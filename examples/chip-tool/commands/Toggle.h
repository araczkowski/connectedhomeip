/*
 *   Copyright (c) 2020 Project CHIP Authors
 *   All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#ifndef __CHIPTOOL_TOGGLE_H__
#define __CHIPTOOL_TOGGLE_H__

#include "common/ModelCommand.h"

class Toggle : public ModelCommand
{
public:
    Toggle() : ModelCommand("toggle", 0x06) {}

    size_t EncodeCommand(PacketBuffer * buffer, size_t bufferSize, uint16_t endPointId) override
    {
        return encodeToggleCommand(buffer->Start(), bufferSize, endPointId);
    }
};

#endif // __CHIPTOOL_TOGGLE_H__
