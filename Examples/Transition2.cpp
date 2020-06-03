#include <stdlib.h>
#include "Transition2.h"

namespace Examples
{
    Transition2* Transition2::_instance = NULL;

    Transition2* Transition2::GetInstance()
    {
        if (_instance == NULL)
            _instance = new Transition2();

        return _instance;
    }

    Transition2::Transition2()
    {
        _payload = new Payload2();
    }

    Payload2* Transition2::GetPayload()
    {
        return _payload;
    }
}
