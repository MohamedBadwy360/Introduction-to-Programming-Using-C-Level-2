#pragma once

#include <iostream>

using namespace std;

namespace input
{
    float read_number(string message)
    {
        float number = 0;
        cout << message << endl;
        cin >> number;

        return number;
    }

    float read_positive_number(string message)
    {
        float number = 0;
        
        do
        {
            cout << message << endl;
            cin >> number;
        }
        while (number <= 0);
        

        return number;
    }

    float read_number_in_range(string message, int from, int to)
    {
        float number = 0;
        
        do
        {
            cout << message << endl;
            cin >> number;
        }
        while (number < from || number > to);
        

        return number;
    }

}