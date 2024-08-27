// TOPIC: list

// 1. This is a double linked list what we know from C programming language
// 2. We should use this class instead of traditional double linked list because
// a. Well tested
// b. Bunch of available function
// 5. Few Available Operations
//    operator =, assign, front, back, empty, size, max_size, clear, insert, emplace, push_back, pop_back, push_front, pop_front, reverse
//    reverse, sort, merge, splice, unique, remove, remove_if, resize

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list1 = {1, 2, 4, 5, 2};
    list<int> list2 = {7, 6, 1, 9};

    for (int elm: list1)
        cout << elm << ' ';
    cout << endl;
    for (int elm: list2)
        cout << elm << ' ';
    cout << endl;
}