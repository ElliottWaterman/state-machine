#include <stdlib.h>
#include "Transition3.h"

namespace Examples
{
    Transition3* Transition3::_instance = NULL;

    Transition3* Transition3::GetInstance()
    {
        if (_instance == NULL)
            _instance = new Transition3();

        return _instance;
    }

    Transition3::Transition3()
    {
        _payload = new Payload2();
    }

    Payload2* Transition3::GetPayload()
    {
        return _payload;
    }
}
