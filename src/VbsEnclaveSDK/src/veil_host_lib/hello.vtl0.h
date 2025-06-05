// Copyright (c) Microsoft Corporation.  
// Licensed under the MIT License.  

#pragma once  
#include <vector>
 
namespace veil::vtl0::implementation::callins
{
    void encrypt_snapshot(_In_ void* enclave, _In_ std::vector<uint8_t> dataBlob);
}
