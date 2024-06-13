/*
[조건]
1. 문자열(영어 대소문자와 공백) 입력
2. 문자열 속 단어 개수 계산

[알고리즘]
0. 문자열(s), 공백의 개수(cnt) 변수 선언 - cnt는 1로 초기화(한 단어일 경우를 위해)
1. (공백을 포함한) 문자열 입력 받기 - getline(cin, 변수)(C++), scanf("%[^\n]", 변수)(C)
2. 공백일 때마다 공백의 개수 +1
*/

#include <iostream>
#include <string>

using namespace std;


int main() {
    string s;
    int cnt = 0; 

    getline(cin, s);
    
    if ((s.length() == 1) && (s[0] == ' ') || (s.length() == 0)) { // 공백 하나만 입력되었을 때
        cnt = 0;
        cout << cnt;
        return 0;
    }
    
    cnt = 1; // 공백의 개수를 단어의 개수로 세고 있기 때문에, 공백의 개수 + 1 = 단어의 개수
    for (int i=0; i < s.length(); i++) { // 공백의 개수를 카운트하여 단어의 개수 계산 
        if (s[i] == ' ') {
            cnt++;
        }
    }
    
    // 첫 글자나 마지막 글자가  공백이라면 cnt - 1
    if (s[0] == ' ') { 
        cnt--;
    }

    if (s[s.length()-1] == ' ') {
        cnt--;
    }

    cout << cnt;

    return 0;
}
  