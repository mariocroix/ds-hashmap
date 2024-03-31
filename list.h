#ifndef LIST_H
#define LIST_H

#define uint unsigned int

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    const char* key;
    uint value;
} keyValue;

struct Node {
    struct Node* next;
    keyValue pair;
};

typedef struct Node Node;

Node* createNode(const char*, uint);
void pushFront(Node**, const char*, uint);
void freeList(Node**);

#endif // LIST_H
