#include <iostream>
using namespace std;

class MaxHeap {
private:
    static const int MAX_SIZE = 100;
    int* heap;  
    int size;
public: 

MaxHeap();
bool isEmpty() const {
        return size == 0;
    }
int getMax();
void insertItem();
void shiftUp();
void shiftdown();
int extractMax();
void deleteAll()
;
~MaxHeap();



};
