#include <iostream>

using namespace std;

int main()
{
    float PI = 3.14145365;

    // Percession Specification
    printf("Percession Specification of %.*f \n", 1, PI);
    printf("Percession Specification of %.*f \n", 2, PI);
    printf("Percession Specification of %.*f \n", 3, PI);
    printf("Percession Specification of %.*f \n", 4, PI);

    float x = 7, y = 8;
    printf("\nThe float division is: %.3f / %.3f = %.3f \n\n", x, y, x / y);

    double value = 12.456659;
    printf("The double value is %.3f \n", value);
    printf("The double value is %.4f \n", value);

    return 0;
}
