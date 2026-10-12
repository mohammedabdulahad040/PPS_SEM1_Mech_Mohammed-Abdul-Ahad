// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true
// Problem     Conditional Statements in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-12, 09:40 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) {
        return 1; 
    }

    const char *words[] = {
        "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };

    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n]);
    } else if (n > 9) {
        printf("Greater than 9\n");
    }

    return 0;
}
