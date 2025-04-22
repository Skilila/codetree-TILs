#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n;
int arr[100000];

// 최대값 구하기
int getMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

// 기수 정렬 (버킷 방식)
void radixSort(int arr[], int n) {
    int maxVal = getMax(arr,n);
    int exp = 1;  // 자릿수 (1, 10, 100...)

    while (maxVal / exp > 0) {
        // 0~9 버킷 생성
        vector<vector<int>> buckets(10);

        // 자릿수에 맞게 숫자 분배
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / exp) % 10;
            buckets[digit].push_back(arr[i]);
        }

        // 버킷 합치기
        int index = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < buckets[i].size(); j++) {
                arr[index++] = buckets[i][j];
            }
        }
        exp *= 10;
    }
}

//정렬된 원소를 출력
void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    cin >> n;

    //입력받은 원소를 저장
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radixSort(arr, n);
    printArray(arr, n);

    return 0;
}
