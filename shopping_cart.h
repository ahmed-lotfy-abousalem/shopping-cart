
#include <iostream>
using namespace std;

class Product {

    public:
        Product();
        Product(string ProductName, string ProductDescription, int ProductPrice, int CurrProductStock);

        string ProductName;
        string ProductDescription;
        int ProductPrice;
        bool ProductAvailability;
        int CurrProductStock;

    
};
class MaxHeap {

public: 

MaxHeap(int GivenSize);
~MaxHeap();
bool isEmpty() const;
Product getMax();
void insertItem(const Product& prod);
void shiftUp(int index);
void ShiftDown(int index);
Product extractMax();
void deleteAll();
bool  isfull();
void displayHeap() const;


private :
static const int MAX_SIZE = 100;
    Product* Products;  
    int capacity;
     int size;
};
