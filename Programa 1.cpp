// Lara Hernandez Carlos Alberto
// Numero de cuenta: 476759

#include <iostream>
#include <stack>
using namespace std;
int charToInt(char);
float evaexpinf(const string&);

int main() {
    string exp = "45*46+/";
    cout << "Resultado:" << evaexpinf(exp) << endl;
    return 0;
}

int charToInt(char c) {
    return c - '0';
}

float evaexpinf(const string& exp) {
    stack<float> s;
    float op2, op1;
    float z;
    for (char c: exp) {
        if (isdigit(c)) {
            s.push((float) charToInt(c));
        } else if (c == '*' || c == '/' || c == '+' || c == '-') {
            op2 =  s.top();
            s.pop();
            op1 =  s.top();
            s.pop();
            if(c == '*') {
                z = op1 * op2;
            } else if (c == '/') {
                z = op1 / op2;
            } else if (c == '+') {
                z = op1 + op2;
            } else {
                z = op1 - op2;
            }
            s.push(z);
        }
    }
    return s.top();
}