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
