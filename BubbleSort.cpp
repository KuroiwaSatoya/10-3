#include <iostream>
#include <cstdlib>
#include <ctime>
#define DEBUG
using namespace std;



void BubbleSort(int* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void PrintArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "�z��̑傫������͂��Ă��������B > ";
    cin >> size;

    int* array = new int[size];

    srand((unsigned int)time(NULL));

    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 99 + 1;
    }
    
#ifdef DEBUG
    cout << "���������ꂽ�z���" << endl;
    PrintArray(array, size);
#endif

    BubbleSort(array, size);

    cout << "�o�u���\�[�g��̔z���" << endl;
    PrintArray(array, size);

    delete[] array;
}
