#ifndef STATE_MACHINE_IPAYLOAD_H
#define STATE_MACHINE_IPAYLOAD_H

#include <string>

//using namespace std;

namespace StateMachine
{
    class IPayload
    {
    public:
        virtual const std::string GetMessage() { return ""; };

    protected:
        IPayload() {}
    };
}

#endif //STATE_MACHINE_IPAYLOAD_H
