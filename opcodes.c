#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1; // Initialize stack pointer

// Push operation
void push(int value) {
    if (top >= STACK_SIZE - 1) {
        fprintf(stderr, "Error: Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

// Pop operation
int pop() {
    if (top < 0) {
        fprintf(stderr, "Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

// Function to print all values on the stack
void pall() {
    if (top >= 0) {
        printf("Stack values:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    // Sample bytecode commands
    char* commands[] = {
        "push 1",
        "push 2",
        "push 3",
        "pall"
    };
    int num_commands = sizeof(commands) / sizeof(commands[0]);

    for (int i = 0; i < num_commands; i++) {
        char op[5];
        int value;
        if (sscanf(commands[i], "%s %d", op, &value) == 2) {
            if (strcmp(op
				    }
				    }
				    }
				    
