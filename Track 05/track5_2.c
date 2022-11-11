#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define url_len 256
#define desc_len 256

struct c2
{
    short port;
    char *c2url;
};

struct node
{
    struct c2 *c2;
    struct node *next;
    char *desc;
};

void init_c2(struct c2 *c2, char *url)
{
    c2->port = 443;
    c2->c2url = malloc(url_len);
    strncpy(c2->c2url, url, url_len);
}

void init_node(struct node *n, struct c2 *c2, char *desc)
{
    n->c2 = c2;
    n->next = NULL;
    n->desc = malloc(desc_len);
    strncpy(n->desc, desc, desc_len);
}

void dealloc_c2(struct c2 *e)
{
    free(e->c2url);
}

void dealloc_node(struct node *n)
{
    free(n->desc);
}

void connect_c2(struct node *head)
{
    while (head->next)
    {
        head = head->next;
    }
    printf("the c2 url is %s\n", head->c2->c2url);
    printf("the c2 port is %d\n", head->c2->port);
    printf("the desc is %s\n", head->desc);
}

int main()
{
    struct c2 c2main;
    init_c2(&c2main, "https://main.control/newtarget");
    struct c2 c2aux;
    init_c2(&c2aux, "https://aux.control/newtarget");
    struct node head;
    init_node(&head, &c2main, "main control server");
    struct node second;
    init_node(&second, &c2aux, "auxiliary control server");

    head.next = &second;
    connect_c2(&head);

    dealloc_node(&second);
    dealloc_node(&head);
    dealloc_c2(&c2aux);
    dealloc_c2(&c2main);
    return (0);
}
