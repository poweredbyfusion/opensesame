/*
 * Commmon garage frequencies, baudrates,
 * lengths, and bit representations for
 * hacking fixed code garages and gates.
 *
 * Currently supports several makes including:
 *  Chamberlain, Linear, Multi-code, Stanley, Moore-o-Matic, NSCD/North Shore Commercial Door
 *
 * http://samy.pl/opensesame
 *
 * -samy kamkar
 */

#include "types.h"

typedef struct {
        u32 hz;
        u32 baud;
        u8 bits;
        u8 len;
        u8 tri;
        u32 b0;
        u32 b1;
        u32 b2;
} garage_t;

extern __code const garage_t garages[];
#define NUM_GARAGES 4

// size should be 2**BITS+(BITS-1), but we're limited by chip
// to 255 and further limited by stack size
//#define MAXLEN 255 // maximum packet length
#define MAXLEN 128 // maximum packet length
#define MAXBITS 13

#define G_HZ 0   // Hz
#define G_BAUD 1 // baudrate
#define G_BITS 2 // bits
#define G_LEN 3  // each bit code is represented by multiple bits, so what is that length
#define G_TRI 4  // is this trinary? (3-bit garages)
#define G_0 5    // eg, if bit "0" is "1000", then 0x8 (1000)
#define G_1 6    // bit 1's representation
#define G_2 7    // only if trinary

extern u8 _garage_id;
#define g garages[_garage_id]
