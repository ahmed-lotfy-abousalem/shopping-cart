#include <iostream>

using namespace std;

class Heap{
private:
    int last;
    int capacity;
    int *arr;
public:
    Heap(int size){
      last = -1;
      capacity = size;
      arr = new int[size];
    }
    ~Heap(){
      delete [] arr;
    }


    void ShiftDown(int index){
      int largest = index;

      int left = (2 * x) + 1;
      int right = (2 * x) + 2;

      if(left <= last && arr[left]>arr[largest]){
          largest= left;
          
        }
      if(right <= last && arr[right]>arr[largest]){
          largest = right;
        }
      if(largest != index){
          int temp=arr[index];
          arr[index]=arr[largest];
          arr[largest]=temp;
          ShiftDown(largest);
        }
      }

};

