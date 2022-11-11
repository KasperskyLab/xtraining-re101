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

int main(void)
{
    struct buf stack_buf;
    stack_buf.iblob[0] = 24;
    stack_buf.cblob[0] = 'b';

    hash = stack_buf.iblob[0] + stack_buf.cblob[0];
    return (OK);
}