/*
조건
1. OX퀴즈 결과 점수 구하기
2. O의 기본점수는 1점, 연속될수록 연속된 만큼의 점수를 얻음 

알고리즘
0. 테스트케이스의 수(N), OX 문자열 배열(Arr), 합계점수(score), 연속횟수(Count) 변수 선언
1. 테스트케이스의 수(N) 입력받기
2. 테스트케이스의 수(N)만큼 "OX" 문자열(0~80) 입력받기
3. 'O'이면 1점, X면 0점
4. 'O'가 반복되면 반복된 횟수만큼 점수 추가
*/

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char Arr[80];
    int score;
    int Count;
    
    scanf("%d", &N); //테스트케이스의 수 입력받기

    for (int i=0; i < N; i++) {
        scanf("%s", Arr); //OX배열 입력받기

        score = 0;
        Count = 1;

        for (int j=0; j < strlen(Arr); j++) {
            if (Arr[j] == 'O') { //O면 합계 점수에 Count만큼 더하고, Count + 1 증가
                score += Count;
                Count++;
            }
            else if (Arr[j] == 'X') { //X면 1로 초기화
                Count = 1;
            }
        }

        printf("%d\n", score);
    }
    
    return 0; 
}
