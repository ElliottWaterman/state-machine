#include <iostream>

#include "Payload3.h"

namespace Examples
{
    Payload3::Payload3()
    {
        std::cout << "Creating Payload 3..." << std::endl;

        // Initialise members
        _message = "Payload 3 from State C to State A";
    }

    const std::string Payload3::GetMessage()
    {
        return _message;
    }
}
