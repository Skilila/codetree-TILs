#include <iostream>
#include <string>
#include<list>

using namespace std;

int n, m;
char s;

int main() {
    cin >> n >> m;

    list<char>li;
    list<char>::iterator it;

    for (int i = 0; i < n; i++) {
        cin >> s;
        li.push_back(s);
    }

    it = li.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (it != li.begin()) it--;
        }
        else if (command == 'R') {
            if (it != li.end()) it++;
        }
        else if (command == 'D') {
            if (it != li.end()) it = li.erase(it);
        }
        else if (command == 'P') {
            char c;
            cin >> c;
            li.insert(it, c);
        }
    }

    for (it = li.begin(); it != li.end(); it++) {
        cout << *it;
    }

    return 0;
}