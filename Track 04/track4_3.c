#include <stdlib.h>

int hash;

enum err_code
{
    OK,
    NO_MEM
};

struct buf
{
    int iblob[256];
    char cblob[1024];
};

struct buf global_buf;

int main(void)
{
    struct buf stack_buf;
    stack_buf.iblob[0] = 24;
    stack_buf.cblob[0] = 'b';

    struct buf *heap_buf = malloc(sizeof(struct buf));
    heap_buf->iblob[1] = 12;
    heap_buf->cblob[2] = 'a';

    global_buf = *heap_buf;

    hash = stack_buf.iblob[0] + stack_buf.cblob[0] + heap_buf->iblob[1] + heap_buf->cblob[2];
    free(heap_buf);
    return (OK);
}