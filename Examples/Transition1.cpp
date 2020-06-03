#include <stdlib.h>
#include "Transition1.h"

namespace Examples
{
    Transition1* Transition1::_instance = NULL;

    Transition1* Transition1::GetInstance()
    {
        if (_instance == NULL)
            _instance = new Transition1();

        return _instance;
    }

    Transition1::Transition1()
    {
        _payload = new Payload1();
    }

    Payload1* Transition1::GetPayload()
    {
        return _payload;
    }
}
