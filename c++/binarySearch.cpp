#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::sort;

int binarySearch(int * array, int size, int key) {

    int start = 0;
    int end = size-1;
    int mid;

    while(start <= end) {
        mid = (end + start) / 2;

        if(array[mid] == key)
            return mid;

        if(array[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main () {

    int key = 0;
    int array[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, array + size);

    cout << "Digite a sua chave de busca" << endl;
    cin >> key;

    int index = binarySearch(array, size, key);

    if(index == -1) {
        cout << "Chave nao encontrada no array" << endl;
    } else {
        cout << "Chave encontrada no indice: " << index << endl;
    }
    
    return 0;
}