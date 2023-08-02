#include <stdio.h>
#define KM_PER_MILE 1.609

int main(void)
{
    double miles,
        kms;
    printf("Enter the distance in miles:\n");
    scanf("%lf",&miles);
    kms= KM_PER_MILE * miles;
    printf("That equals to %f kilometers.\n", kms);
    return 0;
}
