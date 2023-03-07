#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;
    float average;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    average = (n1 + n2 + n3 + n4 + n5) / 5.0;

    printf("The average of the five integers is %.2f", average);

    return 0;
}
