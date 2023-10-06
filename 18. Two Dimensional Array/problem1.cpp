#include <iostream>

using namespace std;

void fill_2d_array_with_multiplication_table(int arr[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = (i+1) * (j+1);
        }
    }
}

void print_2d_array_with_multiplication_table(int arr[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%0*d ", 2, arr[i][j]);
        }

        cout << endl;
    }
}

int main()
{
    int arr[10][10];

    fill_2d_array_with_multiplication_table(arr);
    print_2d_array_with_multiplication_table(arr);

    return 0;
}