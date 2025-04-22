#include <iostream>

using namespace std;

int arr[100000];
int merged_arr[100000];

void merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid + 1; //각 리스트 내의 원소 시작 위치
    int k = low; //병합시 원소를 담을 위치

    //두 리스트 내의 원소가 남아있을때까지
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) { // 첫번째 리스트의 원소가 더 작을 시
            merged_arr[k] = arr[i]; //해당 원소를 임시배열에 저장
            k += 1;
            i += 1;
        }
        else { 
            merged_arr[k] = arr[j]; //두번째 리스트의 원소를 임시배열에 저장
            k += 1;
            j += 1;
        }
    }

    //아직 첫번째 리스트의 원소가 남아있다면 원소를 임시배열에 저장
    while (i <= mid) {
        merged_arr[k] = arr[i];
        k += 1;
        i += 1;
    }

    //아직 두번째 리스트의 원소가 남아있다면 원소를 임시배열에 저장
    while (j <= high) {
        merged_arr[k] = arr[j];
        k += 1;
        j += 1;
    }

    //병합된 결과를 원본 리스트에 옮겨준다.
    for (k = low; k <= high; k++) {
        arr[k] = merged_arr[k];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        
        //분할
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        //병합
        merge(arr, low, mid, high);
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

    //입력받은 원소를 저장
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}