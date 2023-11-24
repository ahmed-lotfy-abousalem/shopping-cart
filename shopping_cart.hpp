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
void insertItem(Product &prod);
void shiftUp(int index);
void ShiftDown(int index);
int extractMax();
void deleteAll();
bool  isfull();


private :
static const int MAX_SIZE = 100;
    Product* Products;  
    int size;
    int capacity;
};
