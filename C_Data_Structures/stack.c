#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define len 1000
struct stack
{
    char d;
    struct stack *next;
};
typedef struct stack stack;
void push(stack **s, char d)
{
    stack *p = malloc(sizeof(stack));
    p->d = d;
    p->next = *s;
    *s = p;
}
char peek(stack *s)
{
    return s->d;
}
char pop(stack **s)
{
    int d = (*s)->d;
    stack *p = *s;
    *s = (*s)->next;
    free(p);
    return d;
}
int main(){
    
}