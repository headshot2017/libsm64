#include <stdlib.h>

#include "memory.h"

struct AllocOnlyPool 
{
    int id;
};

struct AllocOnlyPool *alloc_only_pool_init(void)
{
    struct AllocOnlyPool *result = malloc( sizeof( struct AllocOnlyPool ));
    result->id = 0x69;
    return result;
}

void *alloc_only_pool_alloc(struct AllocOnlyPool *pool, s32 size)
{
    return malloc(size);
}

void *alloc_display_list(u32 size)
{
    return malloc(size);
//    size = ALIGN8(size);
//    return alloc_only_pool_alloc(gGfxAllocOnlyPool, size);
}

void main_pool_free(struct AllocOnlyPool *pool)
{
    // TODO
}