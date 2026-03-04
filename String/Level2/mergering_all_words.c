#include <stdio.h>                   //mergeing all the words in a sentence

int main() {
    char str[101];
    
    // Read the entire line including spaces
    fgets(str, sizeof(str), stdin);
    
    // Print each word on a separate line
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i-1] == ' ') {
            printf("->->->");
        }
        if (str[i] != ' ')
            printf("%c", str[i]);
        else
            printf("\n");
    }

    return 0;
}