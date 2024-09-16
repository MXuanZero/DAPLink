/**
 * @file    sdk_stub.c
 * @brief
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2017-2017, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "device.h"

__WEAK void sdk_init()
{
    // Do nothing
}

#if defined ( __CC_ARM )
#elif defined ( __GNUC__ )
__WEAK int _isatty(int fd) { return 0; }

__WEAK int _write(int fd, char *ptr, int len) { return 0; }

__WEAK int _close(int fd) { return 0; }

__WEAK int _lseek(int fd, int ptr, int dir) { return 0; }

__WEAK int _read(int fd, char *ptr, int len) { return 0; }
#endif
