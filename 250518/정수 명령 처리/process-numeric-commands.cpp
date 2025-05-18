#include<iostream>
#include<stack>

using namespace std;

int N;
int value;
string cmd;

int main() {
    stack<int> st;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> cmd;
        //push command
        if(cmd == "push") {
            cin >> value;
            st.push(value);
        }
        //pop command
        else if(cmd == "pop") {
            cout << st.top() << endl;
            st.pop();
        }
        //size command
        else if(cmd == "size") cout << st.size() << endl;
        //empty command
        else if(cmd == "empty") cout << st.empty() << endl;
        //top command
        else cout << st.top() << endl;
    }
    
    return 0;
}
