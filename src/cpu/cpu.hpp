#ifndef CPU_HPP
#define CPU_HPP

#include "isa.hpp"
#include "opcodes.hpp"

namespace nes
{
    class cpu
    {
    private:
        isa::mode mode;
        isa::istr istr;

        struct regs
        {
            isa::word pc;
            isa::byte sp;
            isa::byte sr;
            isa::byte a;
            isa::byte x;
            isa::byte y;
        };

    public:

    };
}

#endif // CPU_HPP