#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];
int midnum;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sort(arr, arr + i + 1);

        if (i % 2 == 0) {          
            midnum = arr[i / 2];
            cout << midnum << " ";
        }
    }

    return 0;
}