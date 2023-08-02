#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void){
    int radius;
    double radius_square,radius_new;
    double area;

    printf("Enter the radius:\n");
    scanf("%d",&radius);
    area = PI*radius*radius;
    printf("The area of the circle is %lf.\n", area);

    printf("Enter the area of a circle:\n");
    scanf("%lf",&area);
    radius_square = area/PI;
    radius_new = (radius_square);
    printf("The area of the circle is %lf.", radius_new);
    return 0;
}
