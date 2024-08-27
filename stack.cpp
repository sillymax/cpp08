// TOPIC: std::stack

// NOTES:
// 0. std::stack class is a container adapter tat gives the programmer the functionality of a stack.
// 1. Internally it uses std::deque STL container.
// 2. It is LIFO (last-in, first-out) data structure.
// 3. std::stack allows to push(insert) and pop(remove) only from the back.

// FUNCTION PROVIDER:
// empty() -- check whether the stack is empty
// size() -- returns the size of the stack
// top() -- returns a reference to the top most element of the stack
// push(g) -- add the element g at the top of the stack
// pop()

#include <iostream>
#include <stack>

using namespace std;

void print(std::stack<int> stk)
{
    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }
}

int main()
{
    std::stack<int> stk;
    stk.push(2);
    stk.push(3);
    stk.push(4);
    print(stk);
}