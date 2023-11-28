
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
MaxHeap(const MaxHeap& other) ;
bool isEmpty() const;
Product getMax();
void insertProduct(const Product& prod);
void shiftUp(int index);
void ShiftDown(int index);
Product extractMaxProduct();
void deleteAll();
bool  isfull();
void displayProductCatalog() const;
//NEWS
void addToCart(const Product& product);
Product removeFromCart();
void displayShoppingCart() const;
void removeFromCart(const string& productName) ;
void addProductToCart(const string& productName, MaxHeap& productCatalog);
int searchProductByName(const string& productName) const;
//quantity
void updateQuantity(const string& productName, int newQuantity);


private :
static const int MAX_SIZE = 100;
    Product* Products;  
    int capacity;
     int size;
};
