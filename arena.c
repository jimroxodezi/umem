#include <stdlib.h>
#include <string.h>

// typedef unsigned char i8;

// static unsigned char *arena_buffer;
// static size_t arena_buffer_length;
// static size_t arena_offset;

// /**
//  * linear allocator.
// */
// void *arena_alloc(size_t size) {
//     // check is there's enough space for allocation
//     if (arena_offset+size <= arena_buffer_length) {
//         void *ptr = &arena_buffer[arena_offset];
//         arena_offset += size;

//         memset(ptr, 0, size);
//         return ptr;
//     }
//     // return NULL if there's not enough space for
//     // allocation...failed allocation
//     return NULL;
// }


typedef struct arena_t arena_t;
struct arena_t {
    unsigned char   *buf;
    size_t          buf_length;
    size_t          prev_offset;
    size_t          curr_offset;
};