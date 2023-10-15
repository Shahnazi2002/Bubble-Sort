#include <iostream>

using namespace std;

void swap(int &a, int &b);

void array_display(int* input_array, int array_size);

void sort(int* input_array, int array_size) {
    for (int r = array_size-1; r >= 0; r--) {
        for (int i = 0; i < r; i++) {
            if (input_array[i] > input_array[i+1]) {
                swap(input_array[i], input_array[i+1]);
            }
        }
    }
}

int main() {
    int my_array[5] = {14, 33, 27, 35, 10};
    array_display(my_array, 5);

    sort(my_array, 5);
    array_display(my_array, 5);

    return 0;
}

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void array_display(int* input_array, int array_size) {
    cout << '[';
    for (int i = 0; i < array_size; i++) {
        cout << input_array[i];
        if (i < array_size-1) {
            cout << ',' << ' ';
        }
    }
    cout << ']' << endl;
}
