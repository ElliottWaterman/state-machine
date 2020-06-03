#include <iostream>

#include "Payload1.h"

namespace Examples
{
    Payload1::Payload1()
    {
        std::cout << "Creating Payload 1..." << std::endl;

        // Initialise members
        _message = "Payload 1 from State A to State B";
    }

    const std::string Payload1::GetMessage()
    {
        return _message;
    }
    void Payload1::SetMessage(std::string message)
    {
        //if (message != NULL)
            _message = message;
    }
}
