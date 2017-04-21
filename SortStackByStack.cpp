#include <stack>
#include <iostream>
using namespace std;
int main()
{
    stack<int> s1;
    stack<int> s2;
    s1.push(5);
    s1.push(4);
    s1.push(2);
    s1.push(3);
    s1.push(1);
    int temp;
    while(!s1.empty())
    {
        if(s2.empty()||s2.top()<s1.top())
        {
            s2.push(s1.top());
            s1.pop();
        }
        else if(s2.top()>s1.top())
        {
            temp = s1.top();
            s1.pop();
            s1.push(s2.top());
            s2.pop();
            s1.push(temp);
        }
    }
    for (int i = 0; i <5 ; ++i) {
        cout << s2.top();
        s2.pop();
    }

}
