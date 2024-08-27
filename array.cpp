// TOPIC: STL

// NOTES:
// 1. STL: Standard Template Library
// 2. It consist of three components,
//    a. Container
//    b. Iterator
//    c. Algorithm














// TOPIC: std::array
// Syntax: std::array<T, N> array;

// NOTICE:
// 1. std::array is a container that encapsulates fixed size arrays.
// 2. arraysize is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Access Elements:
//    a. at()
//    b. []
//    c. front()
//    d. back()
//    e. data() // gives ptr to the first item in the array

#include <iostream>
#include <array>

using namespace std;

int main()
{
    // Declare
    std::array<int, 5> myarray;
    myarray.fill(10);
    cout << myarray.at(2) << endl;
    cout << myarray[0] << endl;

    // Initialization
    std::array<int, 5> myarray = {1,2,3,4,5};
    std::array<int, 5> myarray2 = {5,2,1,3,4};
    
    // Assign using initializer list
    std::array<int, 5> myarray;
    myarray = {1,2,3,4,5};
}