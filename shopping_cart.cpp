#include <iostream>

using namespace std;

class MaxHeap{
private:
    static const int MAX_SIZE = 100;
    int* heap;  
    int size;
    int last; 
    public:
    ~MaxHeap(){
      delete [] heap;
    }


    void ShiftDown(int index){
      int largest = index;

      int left = (2 * x) + 1;
      int right = (2 * x) + 2;

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

};

bool isEmpty() const {
        return size == 0;
    }
void deleteAll(){
    int* tempHeap = new int[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        tempHeap[i] = heap[i];
        }
    delete[] heap;
    heap = tempHeap;
    size = 0;
}
