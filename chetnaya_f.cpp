#include <iostream>

using std::cin, std::cout;

int countEven(int arr[], int n) {
    int cnt = 0;                 // счётчик чётных

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {   // проверка на чётность
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int n;
    int arr[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Количество чётных = " << countEven(arr, n) << "\n";
    return 0;
}
