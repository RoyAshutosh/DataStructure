// SortingTechniques.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void BubbleSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1-i; j++) {     //-i because after every pass one comparison should reduced...
            if (A[j] > A[j + 1])
                Swap(&A[j], &A[j + 1]);
        }
    }
}
void InsertionSort(int A[],int n) {
    for (int i = 1; i < n ; i++) {
        int j = i - 1;
        int x = A[i];
        while (j>-1 && A[j] > x) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
int main()
{
    int A[] = { 1,10,2,20,23,45,167,156,3,23 };
    int n = 10;
    //BubbleSort(A, n);
    InsertionSort(A, n);
    for (auto x : A)
        cout << x << " ";
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
