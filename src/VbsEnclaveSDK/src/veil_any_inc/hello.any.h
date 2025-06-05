#pragma once
#include <cstdint>
#include <vector>

namespace veil::any::hello
{
    struct ChallengeAndContext
    {
        std::vector<uint8_t> challenge;
        uintptr_t promiseAttestationReport; //std::promise<blob>;
        uintptr_t futureSecurityProperties; //std::future<EncryptedSecurityProperties>;
    };
}
