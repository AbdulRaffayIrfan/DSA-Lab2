#include"Lib.h"
using namespace std;

bool isSorted(const int arr[], int size);

//tests made with IA
void testAscendingSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
    int arr[] = {3, 1, 4, 2, 5};
    assert(isSorted(arr, 5) == false);
}

void testSortedArrayWithDuplicates() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    assert(isSorted(arr, 7) == true);
}

void testSingleElementArray() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

void testNegativeValuesSortedArray() {
    int arr[] = {-10, -5, -2, 0, 3};
    assert(isSorted(arr, 5) == true);
}

void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
}

void testAllIdenticalElementsArray() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
}


int main(){

    testAscendingSortedArray();
    testUnsortedArray();
    testSortedArrayWithDuplicates();
    testSingleElementArray();
    testDescendingArray();
    testNegativeValuesSortedArray();
    testEmptyArray();
    testAllIdenticalElementsArray();

    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}

bool isSorted(const int arr[], int size) {
    if (size < 1) {
        return true;
    }

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}
