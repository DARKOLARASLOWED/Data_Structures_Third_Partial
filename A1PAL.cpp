#include <bits/stdc++.h>
using namespace std;
bool ispal(const string& );

int main() {
    cout << "Aplicacion numero 1\n" << endl;
    string pr = "Yo hago yoga hoy";
    cout << (ispal(pr) ? "Es palindromo" : "No es palindromo") << endl;
    return 0;
}

bool ispal(const string& x) {
    stack<char> p;
    queue<char> c;
    bool band = true;
    for (const char i: x)
        if (isalpha(i)) {
            p.push((char) tolower(i));
            c.push((char) tolower(i));
        }
    int z = (int) c.size();
    for (int i = 0; i < z; ++i) {
        if (c.front() == p.top()) {
            c.pop();
            p.pop();
        } else {
            band = false;
            break;
        }
    }
    return band;
}