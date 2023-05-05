#include <bits/stdc++.h>
using namespace std;
bool isvowel(const int& );

int main() {
    string x, y, z;
    cout << "Aplicacion numero 2" << endl;
    x = "Bond, James Bond";
    cout << "X = " << x << endl;
    stack<char> p;
    queue<char> c;
    for (const char i : x) {
        if (isvowel(i)) {
            while (!p.empty()) {
                y += p.top();
                p.pop();
            }
            y += i;
        } else {
            p.push(i);
        }
    }
    while (!p.empty()) {
        y += p.top();
        p.pop();
    }
    cout << "Y = " << y << endl;
    int zy = (int) y.size();
    for (const char i : y) {
        c.push(i);
        p.push(i);
    }
    for (int i = 0; i < zy/2; ++i) {
        z += c.front();
        z += p.top();
        c.pop();
        p.pop();
    }
    if ((zy % 2) != 0)
        z += c.front();
    cout << "Z = " << z << endl << endl;
    return 0;
}

bool isvowel(const int& C) {
    if (C == 'a' || C == 'A')
        return true;
    if (C == 'e' || C == 'E')
        return true;
    if (C == 'i' || C == 'I')
        return true;
    if (C == 'o' || C == 'O')
        return true;
    if (C == 'u' || C == 'U')
        return true;
    return false;
}