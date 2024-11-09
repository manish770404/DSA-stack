#include <iostream>
using namespace std;

#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {

        if (top == -1)
        {
            cout << "stack underflow" << endl;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "there is no element in the stack";
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    return 0;
}
