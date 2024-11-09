#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st1;
    stack<int> st2;

    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    st1.push(6);
    st1.push(7);
    st1.push(8);
    st1.push(9);

    cout << "Top element of st1: " << st1.top() << endl;

   
    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }

    if (!st2.empty()) {
        cout << "Top element of st2: " << st2.top() << endl;
    } else {
        cout << "st2 is empty." << endl;
    }
    
    return 0;
}
