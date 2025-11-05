#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    while (scanf("%s", s) != EOF) {
        int stack = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == '(') stack++;
            else if (s[i] == ')') {
                if (stack > 0) stack--;
                else { stack = -1; break; }
            }
        }
        if (stack == 0) printf("correct\n");
        else printf("incorrect\n");
    }
    return 0;
}