#include <iostream>
#include "shopping_cart.hpp"
using namespace std;


Product :: Product(){
    this->ProductPrice = 0;
    this->ProductAvailability = 0;
    this->CurrProductStock = 0;
}


Product :: Product(string ProductName, string ProductDescription, int ProductPrice,int CurrProductStock){

    this->ProductName = ProductName;
    this->ProductDescription = ProductDescription;
    this->ProductPrice = ProductPrice;
    this->ProductAvailability = true;
    this->CurrProductStock = CurrProductStock;

}

MaxHeap :: MaxHeap(int GivenSize): capacity(GivenSize),size(0){
    Products = new Product[size];
}

bool MaxHeap :: isfull(){
    if( size == MAX_SIZE)
    return true;
    return false;
}

 void MaxHeap :: shiftUp(int index){

    if(index==0)return;
    int parent = (index - 1)/2 ;
    if(parent >= 0 && Products[parent].ProductPrice < Products[index].ProductPrice){
        swap(Products[parent],Products[index]);
        shiftUp(index); //recursion 
    }
 }


 void MaxHeap :: insertItem( Product &prod){
    if (isfull()){
        cout<<"HEAP IS FULL";
        return;
    }
    Products[size++]=prod;
    shiftUp(size-1);
 }

    void MaxHeap :: ShiftDown(int index){
      int largest = index;

      int left = (2 * index) + 1;
      int right = (2 * index) + 2;

      if(left <= size && Products[left].ProductPrice>Products[largest].ProductPrice){
          largest= left;
          
        }
      if(right <= size && Products[right].ProductPrice>Products[largest].ProductPrice){
          largest = right;
        }
      if(largest != index){
          swap(Products[largest],Products[index]);
          ShiftDown(largest);
        }
      }

bool MaxHeap :: isEmpty() const {
        if(size == 0) return true;
        else{
        return false;
        }
    }
void MaxHeap :: deleteAll(){
    Product* tempHeap = new Product[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        tempHeap[i] = Products[i];
        }
    delete[] Products;
    Products = tempHeap;
    size = 0;
}

Product MaxHeap:: getMax(){
    return Products[0];
}

int MaxHeap::extractMax(){
    
    if (isEmpty()){
        cout << "heap is empty" << endl;
        return;
    }

    swap(Products[0],Products[size-1]);
    size--;
    ShiftDown(0);

}





