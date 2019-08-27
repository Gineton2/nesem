#ifndef OPCODES_HPP
#define OPCODES_HPP

#include <unordered_map>

#include "isa.hpp"

namespace nes::isa
{
    struct opcode
    {
        isa::istr istr;
        isa::mode mode;
    }

    static std::unordered_map<isa::byte, opcode> opcodes
    {
        {0x01, {istr::ORA, mode::xidr}}, // 0b000'000'01
        {0x05, {istr::ORA, mode::zpg }}, // 0b000'001'01
        {0x09, {istr::ORA, mode::imd }}, // 0b000'010'01
        {0x0D, {istr::ORA, mode::abs }}, // 0b000'011'01
        {0x11, {istr::ORA, mode::idry}}, // 0b000'100'01
        {0x15, {istr::ORA, mode::zpgx}}, // 0b000'101'01
        {0x19, {istr::ORA, mode::absy}}, // 0b000'110'01
        {0x1D, {istr::ORA, mode::absx}}, // 0b000'111'01

        {0x21, {istr::AND, mode::xidr}}, // 0b001'000'01
        {0x25, {istr::AND, mode::zpg }}, // 0b001'001'01
        {0x29, {istr::AND, mode::imd }}, // 0b001'010'01
        {0x2D, {istr::AND, mode::abs }}, // 0b001'011'01
        {0x31, {istr::AND, mode::idry}}, // 0b001'100'01
        {0x35, {istr::AND, mode::zpgx}}, // 0b001'101'01
        {0x39, {istr::AND, mode::absy}}, // 0b001'110'01
        {0x3D, {istr::AND, mode::absx}}, // 0b001'111'01

        {0x41, {istr::EOR, mode::xidr}}, // 0b010'000'01
        {0x45, {istr::EOR, mode::zpg }}, // 0b010'001'01
        {0x49, {istr::EOR, mode::imd }}, // 0b010'010'01
        {0x4D, {istr::EOR, mode::abs }}, // 0b010'011'01
        {0x51, {istr::EOR, mode::idry}}, // 0b010'100'01
        {0x55, {istr::EOR, mode::zpgx}}, // 0b010'101'01
        {0x59, {istr::EOR, mode::absy}}, // 0b010'110'01
        {0x5D, {istr::EOR, mode::absx}}, // 0b010'111'01

        {0x61, {istr::ADC, mode::xidr}}, // 0b011'000'01
        {0x65, {istr::ADC, mode::zpg }}, // 0b011'001'01
        {0x69, {istr::ADC, mode::imd }}, // 0b011'010'01
        {0x6D, {istr::ADC, mode::abs }}, // 0b011'011'01
        {0x71, {istr::ADC, mode::idry}}, // 0b011'100'01
        {0x75, {istr::ADC, mode::zpgx}}, // 0b011'101'01
        {0x79, {istr::ADC, mode::absy}}, // 0b011'110'01
        {0x7D, {istr::ADC, mode::absx}}, // 0b011'111'01

        {0x81, {istr::STA, mode::xidr}}, // 0b100'000'01
        {0x85, {istr::STA, mode::zpg }}, // 0b100'001'01
     // {0x89, {istr::STA, mode::imd }}, // 0b100'010'01 /* DNE */
        {0x8D, {istr::STA, mode::abs }}, // 0b100'011'01
        {0x91, {istr::STA, mode::idry}}, // 0b100'100'01
        {0x95, {istr::STA, mode::zpgx}}, // 0b100'101'01
        {0x99, {istr::STA, mode::absy}}, // 0b100'110'01
        {0x9D, {istr::STA, mode::absx}}, // 0b100'111'01

        {0xA1, {istr::LDA, mode::xidr}}, // 0b101'000'01
        {0xA5, {istr::LDA, mode::zpg }}, // 0b101'001'01
        {0xA9, {istr::LDA, mode::imd }}, // 0b101'010'01
        {0xAD, {istr::LDA, mode::abs }}, // 0b101'011'01
        {0xB1, {istr::LDA, mode::idry}}, // 0b101'100'01
        {0xB5, {istr::LDA, mode::zpgx}}, // 0b101'101'01
        {0xB9, {istr::LDA, mode::absy}}, // 0b101'110'01
        {0xBD, {istr::LDA, mode::absx}}, // 0b101'111'01

        {0xC1, {istr::CMP, mode::xidr}}, // 0b110'000'01
        {0xC5, {istr::CMP, mode::zpg }}, // 0b110'001'01
        {0xC9, {istr::CMP, mode::imd }}, // 0b110'010'01
        {0xCD, {istr::CMP, mode::abs }}, // 0b110'011'01
        {0xD1, {istr::CMP, mode::idry}}, // 0b110'100'01
        {0xD5, {istr::CMP, mode::zpgx}}, // 0b110'101'01
        {0xD9, {istr::CMP, mode::absy}}, // 0b110'110'01
        {0xDD, {istr::CMP, mode::absx}}, // 0b110'111'01

        {0xE1, {istr::SBC, mode::xidr}}, // 0b111'000'01
        {0xE5, {istr::SBC, mode::zpg }}, // 0b111'001'01
        {0xE9, {istr::SBC, mode::imd }}, // 0b111'010'01
        {0xED, {istr::SBC, mode::abs }}, // 0b111'011'01
        {0xF1, {istr::SBC, mode::idry}}, // 0b111'100'01
        {0xF5, {istr::SBC, mode::zpgx}}, // 0b111'101'01
        {0xF9, {istr::SBC, mode::absy}}, // 0b111'110'01
        {0xFD, {istr::SBC, mode::absx}}, // 0b111'111'01

     // {0x02, {istr::ASL, mode::imd }}, // 0b000'000'10 /* DNE */
        {0x06, {istr::ASL, mode::zpg }}, // 0b000'001'10
        {0x0A, {istr::ASL, mode::acm }}, // 0b000'010'10
        {0x0E, {istr::ASL, mode::abs }}, // 0b000'011'10
        {0x16, {istr::ASL, mode::zpgx}}, // 0b000'101'10
        {0x1E, {istr::ASL, mode::absx}}, // 0b000'111'10

     // {0x22, {istr::ROL, mode::imd }}, // 0b001'000'10 /* DNE */
        {0x26, {istr::ROL, mode::zpg }}, // 0b001'001'10
        {0x2A, {istr::ROL, mode::acm }}, // 0b001'010'10
        {0x2E, {istr::ROL, mode::abs }}, // 0b001'011'10
        {0x36, {istr::ROL, mode::zpgx}}, // 0b001'101'10
        {0x3E, {istr::ROL, mode::absx}}, // 0b001'111'10

     // {0x42, {istr::LSR, mode::imd }}, // 0b010'000'10 /* DNE */
        {0x46, {istr::LSR, mode::zpg }}, // 0b010'001'10
        {0x4A, {istr::LSR, mode::acm }}, // 0b010'010'10
        {0x4E, {istr::LSR, mode::abs }}, // 0b010'011'10
        {0x56, {istr::LSR, mode::zpgx}}, // 0b010'101'10
        {0x5E, {istr::LSR, mode::absx}}, // 0b010'111'10

     // {0x62, {istr::ROR, mode::imd }}, // 0b011'000'10 /* DNE */
        {0x66, {istr::ROR, mode::zpg }}, // 0b011'001'10
        {0x6A, {istr::ROR, mode::acm }}, // 0b011'010'10
        {0x6E, {istr::ROR, mode::abs }}, // 0b011'011'10
        {0x76, {istr::ROR, mode::zpgx}}, // 0b011'101'10
        {0x7E, {istr::ROR, mode::absx}}, // 0b011'111'10

     // {0x82, {istr::STX, mode::imd }}, // 0b100'000'10 /* DNE */
        {0x86, {istr::STX, mode::zpg }}, // 0b100'001'10
     // {0x8A, {istr::STX, mode::acm }}, // 0b100'010'10 /* DNE */
        {0x8E, {istr::STX, mode::abs }}, // 0b100'011'10
        {0x96, {istr::STX, mode::zpgx}}, // 0b100'101'10
     // {0x9E, {istr::STX, mode::absx}}, // 0b100'111'10 /* DNE */

        {0xA2, {istr::LDX, mode::imd }}, // 0b101'000'10
        {0xA6, {istr::LDX, mode::zpg }}, // 0b101'001'10
     // {0xAA, {istr::LDX, mode::acm }}, // 0b101'010'10 /* DNE */
        {0xAE, {istr::LDX, mode::abs }}, // 0b101'011'10
        {0xB6, {istr::LDX, mode::zpgx}}, // 0b101'101'10
        {0xBE, {istr::LDX, mode::absx}}, // 0b101'111'10
 
     // {0xC2, {istr::DEC, mode::imd }}, // 0b110'000'10 /* DNE */
        {0xC6, {istr::DEC, mode::zpg }}, // 0b110'001'10
     // {0xCA, {istr::DEC, mode::acm }}, // 0b110'010'10 /* DNE */
        {0xCE, {istr::DEC, mode::abs }}, // 0b110'011'10
        {0xD6, {istr::DEC, mode::zpgx}}, // 0b110'101'10
        {0xDE, {istr::DEC, mode::absx}}, // 0b110'111'10

     // {0xE2, {istr::INC, mode::imd }}, // 0b111'000'10 /* DNE */
        {0xE6, {istr::INC, mode::zpg }}, // 0b111'001'10
     // {0xEA, {istr::INC, mode::acm }}, // 0b111'010'10 /* DNE */
        {0xEE, {istr::INC, mode::abs }}, // 0b111'011'10
        {0xF6, {istr::INC, mode::zpgx}}, // 0b111'101'10
        {0xFE, {istr::INC, mode::absx}}, // 0b111'111'10

     // {0x20, {istr::BIT, mode::imd }}, // 0b001'000'00 /* DNE */
        {0x24, {istr::BIT, mode::zpg }}, // 0b001'001'00
        {0x2C, {istr::BIT, mode::abs }}, // 0b001'011'00
     // {0x34, {istr::BIT, mode::zpgx}}, // 0b001'101'00 /* DNE */
     // {0x3C, {istr::BIT, mode::absx}}, // 0b001'111'00 /* DNE */

     // {0x40, {istr::JMP, mode::imd }}, // 0b010'000'00 /* DNE */
     // {0x44, {istr::JMP, mode::zpg }}, // 0b010'001'00 /* DNE */
        {0x4C, {istr::JMP, mode::abs }}, // 0b010'011'00
     // {0x54, {istr::JMP, mode::zpgx}}, // 0b010'101'00 /* DNE */
     // {0x5C, {istr::JMP, mode::absx}}, // 0b010'111'00 /* DNE */

     // {0x60, {istr::JMP, mode::imd }}, // 0b010'000'00 /* DNE */
     // {0x64, {istr::JMP, mode::zpg }}, // 0b010'001'00 /* DNE */
        {0x6C, {istr::JMP, mode::idr }}, // 0b010'011'00
     // {0x74, {istr::JMP, mode::zpgx}}, // 0b010'101'00 /* DNE */
     // {0x7C, {istr::JMP, mode::absx}}, // 0b010'111'00 /* DNE */

     // {0x80, {istr::STY, mode::imd }}, // 0b100'000'00 /* DNE */
        {0x84, {istr::STY, mode::zpg }}, // 0b100'001'00
        {0x8C, {istr::STY, mode::abs }}, // 0b100'011'00
        {0x94, {istr::STY, mode::zpgx}}, // 0b100'101'00
     // {0x9C, {istr::STY, mode::absx}}, // 0b100'111'00 /* DNE */

        {0xA0, {istr::LDY, mode::imd }}, // 0b101'000'00
        {0xA4, {istr::LDY, mode::zpg }}, // 0b101'001'00
        {0xAC, {istr::LDY, mode::abs }}, // 0b101'011'00
        {0xB4, {istr::LDY, mode::zpgx}}, // 0b101'101'00
        {0xBC, {istr::LDY, mode::absx}}, // 0b101'111'00

        {0xC0, {istr::CPY, mode::imd }}, // 0b110'000'00
        {0xC4, {istr::CPY, mode::zpg }}, // 0b110'001'00
        {0xCC, {istr::CPY, mode::abs }}, // 0b110'011'00
     // {0xD4, {istr::CPY, mode::zpgx}}, // 0b110'101'00 /* DNE */
     // {0xDC, {istr::CPY, mode::absx}}, // 0b110'111'00 /* DNE */

        {0xE0, {istr::CPX, mode::imd }}, // 0b111'000'00
        {0xE4, {istr::CPX, mode::zpg }}, // 0b111'001'00
        {0xEC, {istr::CPX, mode::abs }}, // 0b111'011'00
     // {0xF4, {istr::CPX, mode::zpgx}}, // 0b111'101'00 /* DNE */
     // {0xFC, {istr::CPX, mode::absx}}, // 0b111'111'00 /* DNE */


         {0xE0, {istr::CPX, mode::imd }}, // 0b111'000'00
         {0xE4, {istr::CPX, mode::zpg }}, // 0b111'001'00
         {0xEC, {istr::CPX, mode::abs }}, // 0b111'011'00
         // {0xF4, {istr::CPX, mode::zpgx}}, // 0b111'101'00 /* DNE */
         // {0xFC, {istr::CPX, mode::absx}}, // 0b111'111'00 /* DNE */
}
}

#endif // OPCODE_HPP