#include<bits/stdc++.h>
using namespace std;

string ReversePolishNotation(string exp) {
    stack<char> s;
    string result = "";
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '(') {
            s.push(exp[i]);
        } else if (exp[i] == ')') {
            while (!s.empty() && s.top() != '(') {
                result += s.top();
                s.pop();
            }
            s.pop();
        } else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^') {
            s.push(exp[i]);
        } else {
            result += exp[i];
        }
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string exp;
        cin>>exp;
        cout<<ReversePolishNotation(exp)<<endl;
    }
    return 0;
}