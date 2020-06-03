#include <iostream>

#include "Payload2.h"

namespace Examples
{
    Payload2::Payload2()
    {
        std::cout << "Creating Payload 2..." << std::endl;

        // Initialise members
        _message = "Payload 2 - Initialised";
    }

    const std::string Payload2::GetMessage()
    {
        return _message;
    }
    void Payload2::SetMessage(std::string message)
    {
        _message = message;
    }
}
