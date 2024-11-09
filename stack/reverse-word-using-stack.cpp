#include<iostream>
#include<stack>
using namespace std;

void reverseword(string s)
{
   stack<char> st;
   int n =s.length();

   for(int i=0;i<n;i++)
   {
    st.push(s[i]);

   }
   while(!st.empty())
   {
    cout<<st.top();
    st.pop();
   }
}
int main()
{
    string s="manish";
    cout<<"the reversed word is :";
     reverseword(s);
     return 0;
}