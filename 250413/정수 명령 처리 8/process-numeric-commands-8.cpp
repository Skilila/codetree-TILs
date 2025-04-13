#include <iostream>
#include <string>
#include<list>

using namespace std;

//명령의 수, 명령어 저장, front,back 명령어일때 저장할 배열A 선언
int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;
    list<int> li;
    
    for (int i = 0; i < N; i++) {
        cin >> command[i];

        //명령어 front,back일때 실행할 정수값을 A배열에 저장
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }

    //명령어에 대한 처리 및 출력
    for (int i = 0; i < N; i++) {
        if (command[i] == "push_front") {
            li.push_front(A[i]);
        }
        else if (command[i] == "push_back") {
            li.push_back(A[i]);
        }
        else if (command[i] == "pop_front") {
            cout << li.front() << endl;
            li.pop_front();
        }
        else if (command[i] == "pop_back") {
            cout << li.back() << endl;
            li.pop_back();
        }
        else if (command[i] == "size") {
            cout << li.size() << endl;
        }
        else if (command[i] == "empty") {
            cout << li.empty() << endl;
        }
        else if (command[i] == "front") {
            cout << li.front() << endl;
        }
        else if (command[i] == "back") {
            cout << li.back() << endl;
        }
    }

    return 0;
}
