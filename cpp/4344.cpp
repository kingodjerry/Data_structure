'''
[조건]
1. 첫 줄에는 테스트케이스의 개수 C 주어짐
2. 둘째 줄에는 첫 수 : 학생의 수(1<=N<=1000), 이어서 N명의 점수(0<=score<=100) 주어짐
3. 각 케이스마다 평균을 넘는 학생들의 비율 출력(소수점 셋째 자리까지)

[알고리즘]
0. 테스트케이스 수(int/C), 총 학생수(int/N), 점수 배열(int/Arr(1~1000)), 평균값(int/mean), 평균을 넘는 학생들의 비율(double/rate) 선언
1. 테스트케이스 수(C) 입력받기
2. 총 학생수(N) 입력받기
3. 점수 배열(Arr) 입력받기 + 점수 총합계에 넣기
4. Arr[1~N]의 평균을 계산하기
5. 평균을 넘긴 학생들의 비율 계산하기
    - 평균을 넘기면 student에 +1
    - rate = student/N
    - 소수점 셋째 자리까지 반올림해서 출력하기 + '%'
6. C만큼 2~5번 반복
'''
#include <stdio.h>

int main() {
    int C, N;
    int Arr[1000]; 
    int mean;
    int student;
    double rate;

    scanf("%d", &C); // 테스트케이스 수 입력받기
    
    while(C--){
        scanf("%d", &N); // 배열 입력받기

        // 초기화
        mean = 0;

        for (int i=0; i < N; i++) {
            scanf("%d", &Arr[i]);
            mean += Arr[i]; // 점수 총합하기
        }

        mean /= N; // 평균 구하기

        student = 0;
        for (int j=0; j < N; j++) {
            if (Arr[j] > mean) { // 점수가 평균을 넘은 학생들
                student++;
            }
        }
        
        rate = (double)student / (double)N * 100;

        printf("%0.3f%%\n", rate);

    }

    return 0;
}
