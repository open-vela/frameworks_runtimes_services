/*
 * Copyright (C) 2024 Xiaomi Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <nuttx/config.h>

#ifdef CONFIG_SYSTEM_SERVER_USE_PROFILER
#include <utils/Trace.h>

#define SCOPED_TRACE_CALL(tag) ::android::ScopedTrace PASTE(___tracer, __LINE__)(tag, __FUNCTION__)
#else
#define SCOPED_TRACE_CALL(...)
#endif

#define AMS_TRACE_CALL() SCOPED_TRACE_CALL(ATRACE_TAG_ACTIVITY_MANAGER)
#define PMS_TRACE_CALL() SCOPED_TRACE_CALL(ATRACE_TAG_PACKAGE_MANAGER)
#define WMS_TRACE_CALL() SCOPED_TRACE_CALL(ATRACE_TAG_WINDOW_MANAGER)
#define APP_TRACE_CALL() SCOPED_TRACE_CALL(ATRACE_TAG_APP)
#define GRAPHICS_TRACE_CALL() SCOPED_TRACE_CALL(ATRACE_TAG_GRAPHICS)
#define VIEW_TRACE_CALL() SCOPED_TRACE_CALL(ATRACE_TAG_VIEW)

#define INPUT_TRACE_CALL() SCOPED_TRACE_CALL(ATRACE_TAG_INPUT)
#define DEFAULT_TRACE_CALL() SCOPED_TRACE_CALL(ATRACE_TAG_ALWAYS)
