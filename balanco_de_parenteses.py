#include <stdio.h>

int main() {
    char exp[1001];
    
    while (fgets(exp, 1001, stdin)) {
        int count = 0;
        int correct = 1;

        for (int i = 0; exp[i] != '\0'; i++) {
            if (exp[i] == '(') {
                count++;
            } else if (exp[i] == ')') {
                count--;
                if (count < 0) {
                    correct = 0;
                    break;
                }
            }
        }

        if (count != 0) correct = 0;

        if (correct) printf("correct\n");
        else printf("incorrect\n");
    }

    return 0;
}
