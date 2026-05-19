/*simple interest using pointers*/
#include <stdio.h>

void simpleInterest(float p, float r, float t) {
    float si;

    // Pointers inside function
    float *pp = &p;
    float *pr = &r;
    float *pt = &t;

    si = (*pp * *pr * *pt) / 100;

    printf("Simple Interest = %.2f\n", si);
}

int main() {
    float principal, rate, time;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    // Call by value
    simpleInterest(principal, rate, time);

    return 0;
}
