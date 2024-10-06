#include <iostream>  
#include <windows.h> 
// aftours: LeRMoN, Kolia, XeSh, FlasH. school Shag, code: house worken. my tg:https://t.me/LERMONfupa <- click Ctrl+Left mouse, im check sms.Надеюсь правильно написал.     \\ 
using namespace std;
void midleee(int*& arr, int& size, int index, int value) { 
    if (index < 1 || index >= size) {
        cout << "Индекс не доступен\n";
        return;
    }

    int* newArr = new int[size + 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    newArr[index] = value; 
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];  
    }

    delete[] arr;  
    arr = newArr; 
    ++size;  
}

void startis_pluss(int*& arr, int& size, int value) {
    int* newArr = new int[size + 1];  

    newArr[0] = value;  
    for (int i = 0; i < size; ++i) {
        newArr[i + 1] = arr[i]; 
    }

    delete[] arr;
    arr = newArr;  
    ++size;  
}

void delets_endddd(int*& arr, int& size) { 
    if (size == 0) {
        cout << "Масив уже пустенький\n";
        return;
    }

    int* newArr = new int[size - 1];
    for (int i = 0; i < size - 1; ++i) {
        newArr[i] = arr[i];  
    }

    delete[] arr;  
    arr = newArr; 
    --size;  
}

void Delete_midleee(int*& arr, int& size, int index) { 
    if (size == 0 || index < 1 || index >= size) {
        cout << "Инрекс вне допустимых значений или масив пустой!\n";
        return;
    }

    int* newArr = new int[size - 1];  
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i]; 
    }
    for (int i = index + 1; i < size; ++i) {
        newArr[i - 1] = arr[i];  
    }

    delete[] arr; 
    arr = newArr; 
    --size;  
}

void Deletesss_nachalo(int*& arr, int& size) { 
    if (size == 0) {
        cout << "Масив уже пустой\n";
        return;
    }

    int* newArr = new int[size - 1]; 
    for (int i = 1; i < size; ++i) {
        newArr[i - 1] = arr[i]; 
    }

    delete[] arr;    
    arr = newArr;  
    --size;  
}

void clear2DArray(int** arr, int tree) { 
    for (int i = 0; i < tree; ++i) {
        delete[] arr[i];  
    }
    delete[] arr;  
}

int main() {
    int size = 0;  
    int* array = nullptr;   

    startis_pluss(array, size, 10);
    startis_pluss(array, size, 20);
    midleee(array, size, 1, 15);
    delets_endddd(array, size);
    Delete_midleee(array, size, 1);
    Deletesss_nachalo(array, size);

    int tree = 3;
    int** tase = new int* [tree];
    for (int i = 0; i < tree; ++i) {
        tase[i] = new int[5];
    }
    return 0;
}
// hcul_doog_ih||hi_good_luch ну по памяти ето: Привет Удачи. Ну можно еще добавить хорошого дня и будет изумральдовно, Хоршего денёчка.