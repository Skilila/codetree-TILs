#include <iostream>

using namespace std;

//선택정렬 함수
void selectionSort(int arr[], int len) {
    int mini; //최소값을 저장할 변수선언

    for (int i = 0; i < len - 1; i++) {
        mini = i; //최소값 index를 i로 선언
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[mini]) {
                mini = j; //최소값인 index로 변경
            }
        }
        swap(arr[i], arr[mini]);
    }
}

//정렬된 원소를 출력
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

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}