#ifndef CPU_HPP
#define CPU_HPP

#include <cstdint>

class cpu
{
private:
    nes::byte p;
    nes::byte x;
    nes::byte y;
    nes::byte a;
    nes::byte sp;

    nes::addr pc;

public:
};

#endif // CPU_HPP