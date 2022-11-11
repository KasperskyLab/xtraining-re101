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

int SimpleCallback(struct SimpleContext *Context)
{
    Context->Arg1 = 14;
    return 0;
}

int main()
{
    struct SimpleContext c;
    c.Arg1 = 10;
    c.Arg2 = 12;
    struct SimpleLambda l;
    l.pCallback = SimpleCallback;
    l.Priority = 1;
    l.pContext = &c;
}
