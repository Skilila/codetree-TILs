#include<iostream>

using namespace std;

//거품정렬
//마지막에 위치한 원소는 정렬범위의 최대값이므로 탐색 개수를 1개씩 줄이면서 반복문을 진행
void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

//정렬된 원소를 출력하는 함수
void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
}
int main() {

    int n;
    int arr[100];

    cin >> n;

    //입력받은 원소를 저장
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    printArray(arr, n);
	return 0;
}