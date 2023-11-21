#include <iostream>
using namespace std;

class MaxHeap {

public: 

MaxHeap();
~MaxHeap();
bool isEmpty();
int getMax();
void insertItem();
void shiftUp();
void ShiftDown();
int extractMax();
void deleteAll();


private :
static const int MAX_SIZE = 100;
    int* heap;  
    int size;
    int last; 
};
