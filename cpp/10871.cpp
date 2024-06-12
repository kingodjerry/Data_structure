// if 조건절과 stdio.h 사용

#include <stdio.h>

int main() {
    int N, X;
    int a;
    scanf("%d %d", &N, &X); //N과 X 입력

    for (int i=0; i < N; i++){
        scanf("%d", &a);
        if (X > a) printf("%d", a);
    }

    return 0;
}

// 배열과 iostream 사용
#include <iostream>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X; //N과 X 입력

    int arr[10000]; //N의 최대값이 10000이므로, 10000칸의 배열 생성

    for (int i=0; i < N; i++) {
        cin >> arr[i]; // 배열에 N개의 수를 저장
        if(arr[i] < X) { // i번째 원소가 X보다 작다면 출력
            cout << arr[i] << " ";
        }
    }
}