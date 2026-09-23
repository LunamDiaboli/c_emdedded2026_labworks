#include <stdio.h>
#include <math.h>
#include "lib.h"

#define PI 3.14159265358979323846

int main(int argc, char** argv) {

    printHeader();
    
    
    double d;
    double a;
    printf("Enter d: ");
    scanf("%lf", &d);
    printf("Enter a: ");
    scanf("%lf", &a);

    double z1 = (sin((PI / 2.0) + 3.0 * d)) / (1.0 - sin(3.0 * a - PI));
    double z2 = 1.0 / tan(5.0 / 4.0 * PI + 3.0 / 2.0 * a);

    printf("z1 = %lf\n", z1);
    printf("z2 = %lf\n", z2);

    return 0;
}