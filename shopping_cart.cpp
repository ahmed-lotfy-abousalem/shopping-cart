#include <iostream>
#include "shopping_cart.hpp"
using namespace std;


MaxHeap :: MaxHeap(int GivenSize){
    heap = new int[GivenSize];
    this->size = GivenSize;
    last= -1;
}

bool MaxHeap :: isfull(){
    if( size == MAX_SIZE)return true;
    return false;
}

 void MaxHeap :: insertItem(int data){
    if (isfull){
        cout<<"HEAP IS FULL";
        return;
    }
    heap[++last]=data;
    shiftUp(last);
 }

 void MaxHeap :: shiftUp(int index){

    if(index<0)return;
    int parent = (index - 1)/2 ;
    if(parent >= 0 && heap[parent] < heap[index]){
        swap(heap[parent],heap[index]);
        shiftUp(index); //recursion 
    }
 }

  inline MaxHeap :: ~MaxHeap(){
      delete [] heap;
    }


    void MaxHeap :: ShiftDown(int index){
      int largest = index;

      int left = (2 * index) + 1;
      int right = (2 * index) + 2;

      if(left <= last && heap[left]>heap[largest]){
          largest= left;
          
        }
      if(right <= last && heap[right]>heap[largest]){
          largest = right;
        }
      if(largest != index){
          int temp=heap[index];
          heap[index]=heap[largest];
          heap[largest]=temp;
          ShiftDown(largest);
        }
      }

bool MaxHeap :: isEmpty() const {
        return size == 0;
    }
void MaxHeap :: deleteAll(){
    int* tempHeap = new int[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        tempHeap[i] = heap[i];
        }
    delete[] heap;
    heap = tempHeap;
    size = 0;
}


