#include <iostream>

using namespace std;

int missingNumber(int nums[], int arr_size) {
        if (NULL == nums || arr_size == 0) {
            return 0;
        }
        int result = arr_size;
        for (int i = 0; i < arr_size; i++) {
            result ^= i;
            result ^= nums[i];
        }
        return result;
    }

int main() {
	int arr[10] = {10, 9, 4, 6, 3, 2, 5, 7, 1, 0 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << "Original array\n";
	for (int i = arr_size - 1; i >= 0; i--) 
    cout << arr[i] << " ";
    cout << "\nMissing number in the said array: ";
    cout << "\n" <<  missingNumber(arr, arr_size);
    
    int arr1[4] = {0, 3, 4, 2};
	arr_size = sizeof(arr1) / sizeof(arr1[0]);
	cout << "\n\nOriginal array\n";
	for (int i = arr_size - 1; i >= 0; i--) 
    cout << arr1[i] << " ";
    cout << "\nMissing number in the said array: ";
    cout << "\n" <<  missingNumber(arr1, arr_size);
    return 0;
}
