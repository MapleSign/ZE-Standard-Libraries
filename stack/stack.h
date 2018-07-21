#include <stdlib.h>

#ifndef STACK_H
#define STACK_H

typedef struct stack_node{
    unsigned long long id;
    int if_malloc;
    const char *type;
    void *value;
    struct stack_node *next;
} SNode;

typedef struct stack{
    unsigned long long id;
    unsigned long long length;
    SNode *top;
} Stack;

Stack *initStack(void);
SNode *initSNode(void);
int initMallocValueForSNode(SNode *p_snode, const char *type, void *value);

SNode *popStack(Stack *p_stack);
int pushStack(Stack *p_stack, SNode *p_snode);

int releaseStack(Stack *p_stack);
int releaseSNode(SNode *p_snode);

#endif /* stack_h */
