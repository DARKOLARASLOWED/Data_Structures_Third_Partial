// A3BEMath
// Lara Hernandez Carlos Alberto
// Numero de cuenta: 476759
#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(const string &);
int main() {
    string expression = "[(1+2)*3]";
    cout << (isBalanced(expression) ? "La expresion esta balanceada" : "La expresion no esta balanceada") << endl;
    return 0;
}
bool isBalanced(const string &expression) {
    stack<char> s;
    for (char c : expression) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty() ||
                (c == ')' && s.top() != '(') ||
                (c == ']' && s.top() != '[') ||
                (c == '}' && s.top() != '{')) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}