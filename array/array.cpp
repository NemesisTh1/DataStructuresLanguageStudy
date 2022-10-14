#include <iostream>
#include <stdio.h>
#include <cstdlib> 
using namespace std;
using std::cout;

int main () {
    int array[10];

    

    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 10;
        cout << "This is the " << i << " element: " << array[i] << std::endl;
    }
}