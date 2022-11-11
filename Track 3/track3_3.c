#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
    struct SimpleLambda l2 = l;

    printf("new lambda priority val: %d and address: 0x%x\n", l2.Priority, &l2.Priority);
    printf("old lambda priority val: %d and address: 0x%x\n", l.Priority, &l.Priority);

    printf("new lambda context address: 0x%x\n", l2.pContext);
    printf("old lambda context address: 0x%x\n", l.pContext);

    l2.pContext = malloc(sizeof(struct SimpleContext));
    memcpy(l2.pContext, l.pContext, sizeof(struct SimpleContext));

    printf("new lambda context address: 0x%x\n", l2.pContext);
    printf("old lambda context address: 0x%x\n", l.pContext);
    printf("new lambda context arg1: %d\n", l2.pContext->Arg1);
}
