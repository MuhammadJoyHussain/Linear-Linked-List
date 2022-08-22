#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int n) {
    for(int i=0; i<n; i++) {
        cout<<array[i]<< " ";
    }
    cout<<endl;
}

int main() {
   int size;
   cin >> size;

   int array[size];

   for (int i=0; i<size; i++) {
    cin >> array[i];
   }

   cout<< "Before Sort : ";
   printArray(array, size);

    //Step 1: Finding max
    int max = INT_MIN;
    for (int i=0; i<size; i++) {
        if(array[i] > max)
            max = array[i];
    }

    cout<< "Frequency : ";
    printArray(array, max+1);

    //Step 2: Initialization of 'Count' Array
    int count[max+1];

    for (int i=0; i<=max; i++) {
        count[i]=0;
    }

    //Step 3: Frequency Calculation
    for (int i=0; i<size; i++) {
        count[array[i]]++;
    }

    cout<< "Frequency : ";
    printArray(count, max+1);

    //Step 4: Cumulative Sum
    for (int i=0; i<=max; i++) {
        count[i] += count[i-1];
    }

    cout<< "Cumulative sum : ";
   printArray(array, max+1);

    //Step 5: Final Array --> Backward traversal of basic array
    int final[size];
    for (int i=size-1; i>=0; i--) {
        count[array[i]]--;
        int k = count[array[i]];
        final[k] = array[i];
    }

    cout<< "After Sort : ";
   printArray(final, size);

    return 0;
}
