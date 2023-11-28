
#include <iostream>
using namespace std;


// Classes for products

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
class Category {
public:
    // Attributes: category name, product list, etc.
};

class ProductCatalog {
public:
    // Methods to manage products and categories.
};

//****************************************************************************************

// Classes for Cart

class CartItem {
public:
    // Attributes: product, quantity, price, etc.
};

class ShoppingCart {
public:
    // Methods to manage cart items: add, remove, update quantities, view cart, etc.
};
//******************************************************************************************

// Classes for Checking out
class Payment {
public:
    // Payment methods: credit card, PayPal, etc.
};

class Order {
public:
    // Attributes: cart, shipping details, total amount, etc.
};

class Checkout {
public:
    // Methods to handle the checkout process: review cart, add shipping details, complete purchase, etc.
};
////*******************************************************************************************

class MaxHeap {

public: 

MaxHeap(int GivenSize);
~MaxHeap();
MaxHeap(const MaxHeap& other) ;
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
