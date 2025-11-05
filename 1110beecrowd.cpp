#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        int queue[100], front = 0, back = n;
        for (int i = 0; i < n; i++) queue[i] = i + 1;

        printf("Discarded cards:");
        while (back - front > 1) {
            printf(" %d", queue[front++]);        // descarta
            queue[back++] = queue[front++];       // move para o final
            if (back == 200) back = 100;          // proteção simples
        }
        printf("\nRemaining card: %d\n", queue[front]);
    }
    return 0;
}