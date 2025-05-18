#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
    
    string str;
    stack<char> s;
    
    cin >> str;
    
    //문자열의 길이만큼 반복문 실행
    for(int i=0; i<str.size(); i++){
    	//i번째 문자열이 '('이면 스택에 '(' push
    	if(str[i] == '('){
            s.push('(');
        }
        //i번째 문자열이 ')'이면 실행
        else{
            //스택이 비어있지않고 제일 상단이 '('이면 '(' 삭제
            if(!s.empty() && s.top() == '(')
                s.pop();
            //위의 조건에 맞지 않으면 스택에 ')' push
            else
                s.push(')');
        }
    }
	
    //스택이 비어있으면 "YES" 출력, 그렇지 않으면 "NO" 출력
    if(s.empty()) cout << "YES";
    else cout << "NO";
    
    return 0;
}