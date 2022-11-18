#pragma once
#include <iostream>
#include <list>

using namespace std;
class Orden
{
public:
	int NGeneracion;
	int NNacional;
	
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    
    void printArray(int array[], int size) {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void selectionSort( int size, int array[]) {
        /*int x = Pokes.size();
        int array[x];*/
        for (int step = 0; step < size - 1; step++) {
            int min_idx = step;
            for (int i = step + 1; i < size; i++) {

                
                if (array[i] < array[min_idx])
                    min_idx = i;
            }

            
            swap(&array[min_idx], &array[step]);
        }
    }

    int* partition(int arr[], int length) {

        int* pivot = arr;

        for (int i = 0; i < length; i++) {
            if (arr[i] < *pivot) {
                int aux = *pivot;
                *pivot = arr[i];
                arr[i] = aux;
                pivot = (arr + i);
            }
        }

        if (pivot - arr >= length) {
            return nullptr;
        }

        return pivot;
    }

    void quick_sort(int arr[], int length) {
        if (length > 1 && arr) {
            int* subarray = partition(arr, length);

            quick_sort(arr, subarray - arr);
            quick_sort(subarray + 1, length - (subarray - arr));
        }
    }

    int shellSort(int arr[], int n)
    {
        
        for (int gap = n / 2; gap > 0; gap /= 2)
        {
            
            for (int i = gap; i < n; i += 1)
            {
                
                int temp = arr[i];

                
                int j;
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                    arr[j] = arr[j - gap];

                
                arr[j] = temp;
            }
        }
        return 0;
    }

    void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }

};

