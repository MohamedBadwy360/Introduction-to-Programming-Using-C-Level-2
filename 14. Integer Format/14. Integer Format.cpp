#include <iostream>

using namespace std;

int main()
{
    int page = 1, total_pages = 10;

    // print string and int variable
    printf("The page number = %d \n", page);
    printf("You are in page %d of %d.\n", page, total_pages);

    // Width Specification
    printf("The page number = %0*d \n", 2, page);
    printf("The page number = %0*d \n", 3, page);
    printf("The page number = %0*d \n", 3, page);
    printf("The page number = %0*d \n", 4, page);

    int number1 = 10, number2 = 20;
    printf("The result of %d + %d = %d \n", number1, number2, number1 + number2);


    return 0;
}
