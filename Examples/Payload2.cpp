#include <iostream>

#include "Payload2.h"

namespace Examples
{
    Payload2::Payload2()
    {
        std::cout << "Creating Payload 2..." << std::endl;

        // Initialise members
        _message = "Payload 2 from State A to State C";
    }

    std::string Payload2::GetString()
    {
        return _message;
    }
}
