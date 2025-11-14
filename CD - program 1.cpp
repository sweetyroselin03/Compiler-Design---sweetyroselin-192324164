#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    char identifiers[50], constants[50], operators[50], symbols[50], separator[50];
    int id = 0, cn = 0, op = 0, sy = 0, sp=0;

    printf("Enter expression: ");
    fgets(input, 100, stdin);

    for (int i = 0; input[i] != '\0'; i++) {

        if (input[i] == ' ' || input[i] == '\n')
            continue;

        if (isalpha(input[i])) {
            identifiers[id++] = input[i];
        }

        else if (isdigit(input[i])) {
            constants[cn++] = input[i];
        }

        else if (input[i] == '+' || input[i] == '-' ||
                 input[i] == '*' || input[i] == '/' ||
                 input[i] == '=')
        {
            operators[op++] = input[i];
        }
        else if(input[i]==';' || input[i]==','){
            separator[sp++]=input[i];
        }

        else {
            symbols[sy++] = input[i];
        }
    }

    identifiers[id] = '\0';
    constants[cn] = '\0';
    operators[op] = '\0';
    symbols[sy] = '\0';
    separator[sp]='\0';

    printf("\n--- Classification ---\n");
    printf("Identifiers: %s\n", identifiers);
    printf("Constants  : %s\n", constants);
    printf("Operators  : %s\n", operators);
    printf("Symbols    : %s\n", symbols);
    printf("Separators : %s\n", separator);

    return 0;
}