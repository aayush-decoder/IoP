// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

// #define MAX_SIZE 6

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *createNode(int newData) {
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

typedef struct {
    Node *head;
} Stack;

void initStack(Stack *stack) {
    stack->head = NULL;
}

void push(Stack *stack, int data) {
    Node* ptr = createNode(data);
    
    ptr->next = stack->head; // purane head ko, naye head ke NEXT m edal diya
    stack->head = ptr; // officially ptr ko naya head bana diya
}

void peek(Stack *stack) {
    if (stack->head != NULL)
        printf("Data at top: %d\n", (stack->head)->data);
}

int isEmpty(Stack *stack) {
    if (stack->head == NULL) return 1;
    return 0;
}

void pop(Stack* stack) {
    Node* ptr = stack->head;
    stack->head = stack->head->next;
    free(ptr);
}

int main() {
    
    Stack stack;
    initStack(&stack);


    
    push(&stack, 10);
    printf("%d", isEmpty(&stack));
    push(&stack, 20);
    push(&stack, 24);
    push(&stack, 16);
    pop(&stack);
    peek(&stack);
    

    return 0;
}