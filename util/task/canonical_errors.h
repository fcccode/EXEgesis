// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef UTIL_TASK_CANONICAL_ERRORS_H_
#define UTIL_TASK_CANONICAL_ERRORS_H_

#include "strings/string_view.h"
#include "util/task/status.h"

namespace exegesis {
namespace util {

Status FailedPreconditionError(StringPiece error);
Status InternalError(StringPiece error);
Status InvalidArgumentError(StringPiece error);
Status NotFoundError(StringPiece error);
Status UnimplementedError(StringPiece error);
Status UnknownError(StringPiece error);

bool IsNotFound(const Status& status);
bool IsInvalidArgument(const Status& status);

}  // namespace util
}  // namespace exegesis

#endif  // UTIL_TASK_CANONICAL_ERRORS_H_
