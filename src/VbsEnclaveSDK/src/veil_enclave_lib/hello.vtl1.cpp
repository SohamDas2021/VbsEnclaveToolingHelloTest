// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "pch.h"

#define VEIL_IMPLEMENTATION

#include <string>

#include <VbsEnclave\Enclave\Implementations.h>
#include "hello.vtl1.h"

namespace veil::vtl1::implementation
{
    void enclave_load_user_bound_key(const std::wstring& /*keyName*/, const std::wstring& /*flags*/, const std::wstring& /*cache*/)
    {
        auto challenge = veil_abi::VTL0_Callbacks::get_challenge_callback();

        /*
        BCryptGenerateRandomKeyPair();

        GetAttestationReport();

        EnclaveEncryptDataForTrustlet();

        // ******
        // NCryptEncrypt x 3
        // ******

        NewClass::CreateRecallKeyCallback(std::async a, std::promise p2, std::future f3);

        ECDH();

        DeriveKEK();

        EncryptWithKey();

        Seal();

        Newclass::StorageCallback(sealEnc, pubECDH);
        */
    }
}

namespace veil_abi  
{  
   namespace VTL1_Declarations  
   {
       void encrypt_snapshot(_In_ std::vector<uint8_t> dataBlob)  
       {  
           std::wstring keyName = {};  
           std::wstring flags = {};  
           std::wstring cache = {};

           // if (!IsUserBoundKeyLoaded())
           {
               veil::vtl1::implementation::enclave_load_user_bound_key(keyName, flags, cache); // Ensure correct overload is called  
           }
       }  
   }  
}
