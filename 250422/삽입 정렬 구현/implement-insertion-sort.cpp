#include <iostream>

using namespace std;

//삽입정렬
void insertionSort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        int key = arr[i];
        int j = i - 1;

        //j가 0이 될때까지 원소를 비교해 더 앞에있는 원소가 더 커지지 않을때 까지 비교연산을 실행
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; //key값보다 작은 원소를 가진 index 바로 뒤에 key값 삽입
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

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
