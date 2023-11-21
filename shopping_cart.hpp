#include <iostream>
using namespace std;

class MaxHeap {

public: 

MaxHeap();
bool isEmpty();
int getMax();
void insertItem();
void shiftUp();
void shiftdown();
int extractMax();
void deleteAll();
~MaxHeap();



};