#pragma once

#include <span>

#include <gsl/gsl_util>
#include <wil/stl.h>

#include "..\veil_any_inc\hello.any.h"

namespace veil::vtl1::hello
{
    namespace implementation
    {
        namespace callouts
        {
            ChallengeAndContext get_challenge();
        }
    }

    inline ChallengeAndContext get_challenge()
    {
        implementation::callouts::get_challenge();
    }
}
