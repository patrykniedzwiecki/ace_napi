/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FOUNDATION_ACE_NAPI_NATIVE_ENGINE_IMPL_JERRYSCRIPT_NATIVE_VALUE_JERRYSCRIPT_NATIVE_STRING_H
#define FOUNDATION_ACE_NAPI_NATIVE_ENGINE_IMPL_JERRYSCRIPT_NATIVE_VALUE_JERRYSCRIPT_NATIVE_STRING_H

#include "jerryscript_native_value.h"

class JerryScriptNativeString : public JerryScriptNativeValue, public NativeString {
public:
    JerryScriptNativeString(JerryScriptNativeEngine* engine, const char* value, size_t length);
    JerryScriptNativeString(JerryScriptNativeEngine* engine, jerry_value_t value);
    virtual ~JerryScriptNativeString() override;

    void* GetInterface(int interfaceId) override;

    virtual void GetCString(char* buffer, size_t size, size_t* length) override;
    virtual size_t GetLength() override;
    virtual size_t EncodeWriteUtf8(char* buffer, size_t bufferSize, int32_t* nchars) override { return 0; }
};

#endif /* FOUNDATION_ACE_NAPI_NATIVE_ENGINE_IMPL_JERRYSCRIPT_NATIVE_VALUE_JERRYSCRIPT_NATIVE_STRING_H */
