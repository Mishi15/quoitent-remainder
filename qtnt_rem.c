#include <stdio.h>
int main()
{
    int a, b, qtnt, rem;
    printf("Enter the number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    qtnt = a / b;
    printf("%d ", qtnt);
    rem = a % b;
    printf("%d ", rem);
     return 0 ;
}
