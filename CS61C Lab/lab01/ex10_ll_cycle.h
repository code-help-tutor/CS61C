WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef LL_CYCLE_H
#define LL_CYCLE_H

typedef struct node {
    int value;
    struct node *next;
} node;

int ll_has_cycle(node *);

#endif // LL_CYCLE_H
