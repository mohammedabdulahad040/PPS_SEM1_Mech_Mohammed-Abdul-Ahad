// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
// Problem     For Loop in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-12, 09:33 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>

int main() 
{
    int a, b;
    
    scanf("%d\n%d", &a, &b);

    
    const char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            
            printf("%s\n", words[i - 1]);
        } 
        else if (i > 9) {
            
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}

