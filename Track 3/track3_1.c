struct SimpleContext
{
    int Arg1;
    int Arg2;
};

struct SimpleLambda
{
    void *pCallback;
    short Priority;
    struct SimpleContext *pContext;
};

int main()
{
    struct SimpleContext c;
    c.Arg1 = 10;
    c.Arg2 = 12;
    struct SimpleLambda l;
    l.Priority = 1;
}
