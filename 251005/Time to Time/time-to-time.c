#include <stdio.h>

int changeToMinute(int hour, int minute)
{
    return hour * 60 + minute;
}
int A, B, C, D;

int main() {
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    // Please write your code here.
    int less = changeToMinute(A, B);
    int more = changeToMinute(C, D);
    printf("%d\n", more - less);
    return 0;
}