#include <iostream>

using namespace std;

int arr[100000];

//max-heap을 유지하기 위한 함수
void heapify(int arr[], int n, int i) {
    int largest = i; //루트노드를 i로 가정
    int left = i * 2; //왼쪽 자식 노드
    int right = (i * 2) + 1; //오른쪽 자식 노드

    //왼쪽 자식이 크다면 largest 갱신
    if (left <= n && arr[left] > arr[largest]) largest = left;

    //오른쪽 자식이 크다면 largest 갱신
    if (right <= n && arr[right] > arr[largest]) largest = right;

    //루트 노트가 largest가 아니면 교환,재귀호출
    if (largest != i) { 
        swap(arr[i], arr[largest]); //해당 자식노드와 현재 노드 교환
        heapify(arr, n, largest); //내려간 위치에서 heapify진행
    }
}

//힙 정렬
void heapSort(int arr[], int n) {
    //max-heap 구성
    for (int i = n / 2; i >= 1; i--) { // n/2번째 원소부터 1번째 원소까지
        heapify(arr, n, i); //heapify함수를 통해 max-heap을 구성
    }
    //정렬 진행
    for (int i = n; i > 1; i--) {
        swap(arr[1], arr[i]); // 최대값을 뒤로
        heapify(arr, i - 1, 1); // 1번노드 기준 heapify를 진행해 줄어든 heap 재정렬
    }
}

//정렬된 원소를 출력
void printArray(int arr[], int len) {
    for (int i = 1; i <= len; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int n;
    cin >> n;

    //입력받은 원소를 저장
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    heapSort(arr, n);
    printArray(arr, n);

    return 0;
}