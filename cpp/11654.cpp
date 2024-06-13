/*
[조건]
1. 문자열 입력받고 -> 아스키코드 값으로 출력
2. 문자열은 알파벳 소문자, 대문자(구분), 숫자 0-9 중 하나가 주어짐

[알고리즘]
0. 입력 받을 문자열(s) 변수 선언
1. 문자열(s) int로 출력
*/

#include <iostream>

int main() {
    char s;
    
    std::cin >> s;
    std::cout << (int)s;
}

// stoi는 문자열의 있는 숫자(문자열)를 숫자로 변경해주는 함수
