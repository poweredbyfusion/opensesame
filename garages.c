#include "garages.h"

__code const garage_t garages[] = {
    //        HZ,       BAUD, BITS, LEN, TRI,  B0,     B1,     B2
    {310000000, 2000,   10,   4,   0, 0x8, 0xe, 0x0}, // Stanley, Linear Multicode & Moore-o-Matic
    {390000000, 2000,    9,   4,   0, 0x8, 0xe, 0x0}, // Chamberlain
    {315000000, 2000,    9,   4,   0, 0x8, 0xe, 0x0}, // Chamberlain Canada
    {318000000, 2000,    9,  18,   1, 0x020100, 0x03fd00, 0x03fdfe}, // NSCD
};
