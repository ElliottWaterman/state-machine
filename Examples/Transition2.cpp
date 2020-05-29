#include <stdlib.h>
#include "Transition2.h"

namespace Examples
{
    Transition2* Transition2::_instance = NULL;

    Transition2* Transition2::GetInstance(Payload2* payload)
    {
        if (_instance == NULL)
            _instance = new Transition2();

        if (_instance->GetPayload() == nullptr)
            _instance->CreatePayload();

        return _instance;
    }

    void Transition2::CreatePayload()
    {
        _payload = new Payload2();
    }

    Transition2::Transition2() {}

    Payload2* Transition2::GetPayload()
    {
        return _payload;
    }
}
