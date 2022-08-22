#include<bits/stdc++.h>
using namespace std;

void PrintArray(int array[], int size) {

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}

int main() {
    int size;
    cin >> size;

    int array[size];

    for (int i=0; i<size; i++) {
        cin >> array[i];
    }

    cout << "Before Sort : ";
    PrintArray(array, size);
    cout<<endl;

    //Bubble Sort Implementation
    for (int i=1; i<size; i++) {
        cout<< "Iteration no : " << i << endl;
        for (int j=0; j<size-1; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            cout<< j+1<< " Step : ";PrintArray(array, size);
        }
        cout<<endl;
    }


    return 0;
}
