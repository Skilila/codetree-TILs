#include <iostream>
#include<vector>
#include<string>

using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    //동적 배열 선언
    vector<int>list;
    cin >> N;

    //명령어와 주어지는 정수를 구분하여 배열에 저장
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
    }

    //탐색
    for (int i = 0; i < N; i++) {

        //push_back명령어 실행시 num[i]값을 list의 맨 뒤에 저장
        if (command[i] == "push_back") {
            list.push_back(num[i]);
        }

        //pop_back명령어 실행시 list가 비어있는지 확인 후 맨 뒤에있는 원소값 삭제
        else if (command[i] == "pop_back") {
            if (!list.empty()) {
                list.pop_back();
            }
        }

        //size명령어 실행시 list의 크기를 출력
        else if (command[i] == "size") {
            cout << list.size() << endl;
        }

        //get명령어 실행시 num[i]가 1보다크고 list의 크기보다 작으면 list의 원소값출력
        else if (command[i] == "get") {
            if (num[i] >= 1 && num[i] <= list.size()) {
                cout << list[num[i] - 1] << endl;
            }
        }
    }
    return 0;
}