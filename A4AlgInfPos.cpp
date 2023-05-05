#include <iostream>
#include <stack>
using namespace std;
int precedencia(const char&);
string AlgInfPos(const string&);

int main() {
    string inf;
    getline(cin, inf);
    string pos = AlgInfPos(inf);
    cout << "Expresion Infija: " << inf << endl;
    cout << "Expresion Posfija: " << pos << endl;
    return 0;
}
int precedencia(const char& C) {
    if (isalpha(C))
        return 3;
    if (C == '+' || C == '-')
        return 1;
    if (C == '*' || C == '/')
        return 2;
    if (C == '#')
        return 0;
    return -1;
}
string AlgInfPos(const string& inf) {
    stack<char> s;
    string pos;
    for (const char c : inf + '#') {
        while (!s.empty() && precedencia(s.top()) >= precedencia(c)) {
            pos += s.top();
            s.pop();
        }
        s.push(c);
    }
    return pos;
}