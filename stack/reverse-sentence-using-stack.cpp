#include <iostream>
#include <stack>
using namespace std;
void reversesentence(string s)
{
  stack<string> st;

  for (int i = 0; i < s.length(); i++)
  {
    string word = "";

    while (s[i] != ' ' && i < s.length())
    {
      word = word + s[i];
      i++;
    }
    st.push(word);
  }
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}

int main()
{

  string s = "manish is a good boy";
  reversesentence(s);
  return 0;
}
