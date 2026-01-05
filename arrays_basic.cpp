#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of elements = " << sum << endl;
    cout << "Average = " << (float)sum / n << endl;

    return 0;
}
