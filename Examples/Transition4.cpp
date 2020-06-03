#include <stdlib.h>
#include "Transition4.h"

namespace Examples
{
    Transition4* Transition4::_instance = NULL;

    Transition4* Transition4::GetInstance()
    {
        if (_instance == NULL)
            _instance = new Transition4();

        return _instance;
    }

    Transition4::Transition4()
    {
        _payload = new Payload3();
    }

    Payload3* Transition4::GetPayload()
    {
        return _payload;
    }
}
