#include<iostream>
#include<queue>

using namespace std;

int N;
int value;
string cmd;

int main() {
    queue<int> que;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> cmd;
        //push command
        if(cmd == "push") {
            cin >> value;
            que.push(value);
        }
        //pop command
        else if(cmd == "pop") {
            if(que.empty()) continue; //que가 비어있다면 다음 반복문으로 넘어가기
            cout << que.front() << endl;
            que.pop();
        }
        //size command
        else if(cmd == "size") cout << que.size() << endl;
        //empty command
        else if(cmd == "empty") cout << que.empty() << endl;
        //front command
        else {
            if(que.empty()) continue; //que가 비어있다면 다음 반복문으로 넘어가기
            cout << que.front() << endl;
        }
    }
    
    return 0;
}
