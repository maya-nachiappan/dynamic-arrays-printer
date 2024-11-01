//
//  main.cpp
//  dynamic array printer
//
//  Created by maya nachiappan on 10/14/24.
//

#include <iostream>
using namespace std;

void arraySum() // creates a function to find the sum of dynamic array
{
    int size;
    std::cout << "How many numbers do you have:" << std::endl;
    std::cin >> size; // defines size of the array based on user input

    int* array = new int[size]; // creates a dynamicly allocated array with the user specified size

    std::cout << "Enter " << size << " numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Number " << i + 1 << ": " << std::endl;
        std::cin >> array[i]; // array is filled with numbers inputted by user
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i]; // adds each element of the array to the sum
    }

    std::cout << "the sum of the array is " << sum << std::endl;

    // deallocate the array memory
    delete[] array;
}


int main() 
{
    arraySum();
    return 0;
}
