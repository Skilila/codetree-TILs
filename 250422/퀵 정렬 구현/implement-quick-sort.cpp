#include <iostream>

using namespace std;

int arr[100000];

//pivot을 기준으로 정렬하는 파티션 함수
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 마지막 원소를 pivot으로 선정
    int i = low - 1; //작은 요소의 index

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { //빨간색 화살표가 가리키는 원소가 pivot보다 작다면
            i += 1; //왼쪽으로 이동
            swap(arr[i], arr[j]); //두 원소의 위치를 바꾼다.
        }
    }
    swap(arr[i + 1], arr[high]); // pivot을 올바른 위치로 이동
    return i + 1; //pivot의 최종 위치를 반환
}

//퀵 정렬
void quickSort(int arr[], int low, int high) {

    if (low < high) { //원소의 개수가 2개 이상일 때만 진행
        int pi = partition(arr, low, high); //pivot을 기준으로 좌,우로 분할
        quickSort(arr, low, pi - 1); //pivot 기준 왼쪽 구간에 있는 원소 정렬
        quickSort(arr, pi + 1, high); //pivot 기준 오른쪽 구간에 있는 원소 정렬
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
    cin >> n;

    //입력 받은 원소를 저장
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}