#include<iostream>
#include<deque>

using namespace std;

int N;
int value;
string cmd;

int main() {
    deque<int> deq;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> cmd;
        //push_front command
        if(cmd == "push_front") {
            cin >> value;
            deq.push_front(value);
        }
        //push_back command
        else if(cmd == "push_back") {
            cin >> value;
            deq.push_back(value);
        }
        //pop_front command
        else if(cmd == "pop_front") {
            if(deq.empty()) continue; //deq가 비어있다면 다음 반복문으로 넘어가기
            cout << deq.front() << endl;
            deq.pop_front();
        }
        //pop_back command
        else if(cmd == "pop_back") {
            if(deq.empty()) continue; //deq가 비어있다면 다음 반복문으로 넘어가기
            cout << deq.back() << endl;
            deq.pop_back();
        }
        //size command
        else if(cmd == "size") cout << deq.size() << endl;
        //empty command
        else if(cmd == "empty") cout << deq.empty() << endl;
        //front command
        else if(cmd == "front") {
            if(deq.empty()) continue; //deq가 비어있다면 다음 반복문으로 넘어가기
            cout << deq.front() << endl;
        }
        //back command
        else {
            if(deq.empty()) continue; //deq가 비어있다면 다음 반복문으로 넘어가기
            cout << deq.back() << endl;
        }
    }
    
    return 0;
}
