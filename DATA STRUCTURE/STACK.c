#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// Push operation
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("STACK OVERFLOW!\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d is added to the stack\n", value);
    }
}

// Pop operation
void pop()
{
    if (top == -1)
    {
        printf("STACK UNDERFLOW!\n");
    }
    else
    {
        printf("%d is removed from the stack\n", stack[top]);
        top--;
    }
}

// Display operation
void display()
{
    if (top == -1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The elements are:\n");

        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function
int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}