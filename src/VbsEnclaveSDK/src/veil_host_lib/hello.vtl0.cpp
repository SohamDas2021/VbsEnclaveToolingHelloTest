// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "pch.h"

#define VEIL_IMPLEMENTATION

#include <VbsEnclave\HostApp\Stubs.h>

#include "hello.vtl0.h"
#include "hello.any.h"

namespace veil::vtl0::implementation::callins
{
    void encrypt_snapshot(_In_ void* enclave, _In_ std::vector<uint8_t> dataBlob)
    {
        // Initialize enclave interface
        auto enclaveInterface = veil_abi::VTL0_Stubs::export_interface(enclave);
        THROW_IF_FAILED(enclaveInterface.RegisterVtl0Callbacks());

        THROW_IF_FAILED(enclaveInterface.encrypt_snapshot(dataBlob));
    }
}

ChallengeAndContext veil_abi::VTL0_Stubs::export_interface::get_challenge_callback()
{
    return GetChallengeCallback(); // Call to src/VbsEnclaveSDK/src/veil_host_lib/hello_winrt.vtl0.cpp
}
