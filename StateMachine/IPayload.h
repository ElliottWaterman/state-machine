#ifndef STATE_MACHINE_IPAYLOAD_H
#define STATE_MACHINE_IPAYLOAD_H

#include <iostream>
#include <string>

//using namespace std;

namespace StateMachine
{
    class IPayload
    {
    public:
        virtual std::string GetString() { return nullptr; };

    protected:
        IPayload() {}
    };
}

#endif //STATE_MACHINE_IPAYLOAD_H
