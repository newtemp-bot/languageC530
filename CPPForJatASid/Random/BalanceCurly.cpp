#include <stdio.h>
#include <string.h>

// Function to check if the braces are balanced
int isBalanced(const char *str) {
    int balance = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '{') {
            balance++;
        } else if (str[i] == '}') {
            balance--;
        }
        // If at any point balance goes negative, it's invalid
        if (balance < 0) {
            return 0;
        }
    }
    return balance == 0;
}

// Function to restore the braces into a valid format
void restoreBraces(const char *input, char *output) {
    int openCount = 0;
    int closeCount = 0;

    // Count the number of open and close braces
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '{') {
            openCount++;
        } else if (input[i] == '}') {
            if (openCount > 0) {
                openCount--;
            } else {
                closeCount++;
            }
        }
    }

    // Construct the output with balanced braces
    int index = 0;

    // Add the missing open braces
    for (int i = 0; i < closeCount; i++) {
        output[index++] = '{';
    }

    // Copy the original braces, balancing them
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '{' || input[i] == '}') {
            output[index++] = input[i];
        }
    }

    // Add the missing close braces
    for (int i = 0; i < openCount; i++) {
        output[index++] = '}';
    }

    // Null terminate the output
    output[index] = '\0';
}

int main() {
    char input[100];
    char output[200];

    // Input the string
    printf("Enter the string of braces: ");
    scanf("%s", input);

    // Check if the input is balanced
    if (isBalanced(input)) {
        printf("The braces are already balanced.\n");
    } else {
        printf("The braces are not balanced. Restoring them...\n");
        restoreBraces(input, output);
        printf("Restored string: %s\n", output);
    }

    return 0;
}
