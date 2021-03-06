/*
 * Copyright 2017 Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <exception>
#include <vector>

#include "Python.h"

#include <folly/ExceptionWrapper.h>
#include <folly/Function.h>
#include <folly/Indestructible.h>
#include <folly/Synchronized.h>

namespace thrift {
namespace py3 {
namespace exception {

typedef folly::Function<void(const folly::exception_wrapper& ex) const> Handler;

folly::Synchronized<std::vector<Handler>>& getHandlers() {
  static folly::Indestructible<folly::Synchronized<std::vector<Handler>>>
      handlers;
  return *handlers;
}

void addHandler(Handler handler) {
  getHandlers().wlock()->push_back(std::move(handler));
}

void runHandlers(const folly::exception_wrapper& exception) {
  auto locked = getHandlers().rlock();
  for (auto const& handler : *locked) {
    handler(exception);
    if (PyErr_Occurred()) { // stop if an exception was raised (in python)
      break;
    }
  }
}

// The only place this function is used it needs a shared_ptr, so may as
// well just return one instead of a unique_ptr
template <class T>
std::shared_ptr<T> try_make_shared_exception(
    const folly::exception_wrapper& exception) {
  auto e = exception.get_exception<T>();
  return e ? std::make_shared<T>(*e) : std::shared_ptr<T>();
}

} // namespace exception
} // namespace py3
} // namespace thrift
