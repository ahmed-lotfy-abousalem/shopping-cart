#include <iostream>
using namespace std;

class MaxHeap {
private:
    static const int MAX_SIZE = 100;
    int* heap;  
    int size;
public: 

MaxHeap();
~MaxHeap();
bool isEmpty() const {
        return size == 0;
    }
int getMax();
void insertItem();
void shiftUp();
void ShiftDown();
int extractMax();
void deleteAll(){
    int* tempHeap = new int[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        tempHeap[i] = heap[i];
        }
    delete[] heap;
    heap = tempHeap;
    size = 0;
}
~MaxHeap();



};
