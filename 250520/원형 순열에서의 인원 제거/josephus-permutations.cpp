#include<iostream>
#include<queue>

using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    queue<int> que;

    //queue에 순차적으로 번호 저장
    for(int i = 1; i <= N; i++) {que.push(i);}

    int j = 1;
    //que가 빌때까지 반복문 실행
    while(!que.empty()) {
        //해당 번호일때 번호를 출력 후 pop실행
        if(j % K  == 0) {
            cout << que.front() << " ";
            que.pop();
        }
        //해당 번호가 아닐때 현재 번호를 push하고 pop진행(원형큐처럼 사용)
        else {
            que.push(que.front());
            que.pop();
        }
        j++;
    }
    return 0;
}