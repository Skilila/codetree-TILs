#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
    string str;
    stack<char> st;
    cin >> str;

    for(int i = 0; i < str.size(); i++) {
        //'('일때 stack에 여는괄호를 저장
        if(str[i] == '(') {
            st.push('(');
        }
        // ')'일때 stack이 비어있으면 괄호 쌍이 맞지 않기 때문에 No
        else {
            if(st.empty()) {
                cout << "No" << endl;
                return 0;
            }
            st.pop();
        }
    }
    //최종적으로 stack이 비어있다면 괄호검사가 제대로 이루어진 경우 Yes
    if(st.empty()) {
        cout << "Yes" << endl;
    }
    //stack이 비어있지 않은경우 No
    else {
        cout << "No" << endl;
    }
    return 0;
}
