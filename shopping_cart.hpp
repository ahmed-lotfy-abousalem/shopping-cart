#include <iostream>
using namespace std;

class MaxHeap {

public: 

MaxHeap(int GivenSize);
~MaxHeap();
bool isEmpty() const;
int getMax();
void insertItem(int data);
void shiftUp(int index);
void ShiftDown(int index);
int extractMax();
void deleteAll();
bool  isfull();


private :
static const int MAX_SIZE = 100;
    int* heap;  
    int size;
    int last; 
};
