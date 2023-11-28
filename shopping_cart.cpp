
#include <iostream>
#include "shopping_cart.h"
using namespace std;

//*******************************************product CLASS CPP*******************************************
Product::Product() : ProductName(""), ProductDescription(""), ProductPrice(0), ProductAvailability(false), CurrProductStock(0) {}

Product::Product(string productName, string productDescription, int productPrice, int currProductStock)
    : ProductName(move(productName)), ProductDescription(move(productDescription)),
    ProductPrice(productPrice), ProductAvailability(true), CurrProductStock(currProductStock) {}
//*************************************************MAX HEAP CLASS CPP*********************************************
MaxHeap::MaxHeap(int GivenSize) : capacity(GivenSize), size(0) {
    Products = new Product[capacity];
}

MaxHeap::MaxHeap(const MaxHeap& other) : size(other.size), capacity(other.capacity) {
    Products = new Product[capacity];
    for (int i = 0; i < size; ++i) {
        Products[i] = other.Products[i];
    }
}



bool MaxHeap::isfull() {
    if (size == MAX_SIZE)
        return true;
    return false;
}

void MaxHeap::displayProductCatalog() const {
    cout << "Product Catalog (Max Heap):\n";
    for (int i = 0; i < size; ++i) {
        cout << Products[i].ProductName << " - Price: " << Products[i].ProductPrice << ", Popularity: " << Products[i].CurrProductStock << endl;
    }
    cout << endl;
}

void MaxHeap::shiftUp(int index) {

    if (index == 0)return;
    int parent = (index - 1) / 2;
    if (parent >= 0 && Products[parent].ProductPrice < Products[index].ProductPrice) {
        swap(Products[parent], Products[index]);
        shiftUp(index); //recursion 
    }
}


void MaxHeap::insertProduct(const Product& prod) {
    if (isfull()) {
        cout << "HEAP IS FULL";
        return;
    }
    Products[size++] = prod;
    shiftUp(size - 1);
}

void MaxHeap::ShiftDown(int index) {
    int largest = index;

    int left = (2 * index) + 1;
    int right = (2 * index) + 2;

    if (left <= size && Products[left].ProductPrice > Products[largest].ProductPrice) {
        largest = left;

    }
    if (right <= size && Products[right].ProductPrice > Products[largest].ProductPrice) {
        largest = right;
    }
    if (largest != index) {
        swap(Products[largest], Products[index]);
        ShiftDown(largest);
    }
}

bool MaxHeap::isEmpty() const {
    if (size == 0) return true;
    else {
        return false;
    }
}
void MaxHeap::deleteAll() {
    delete[] Products;
    Products = new Product[MAX_SIZE];
    size = 0;
}

Product MaxHeap::getMax() {
    return Products[0];
}

Product MaxHeap::extractMaxProduct() {
    if (size == 0)
        throw out_of_range("Heap is empty");

    Product maxProduct = Products[0];
    Products[0] = Products[size - 1];
    size--;
    ShiftDown(0);

    return maxProduct;
}
MaxHeap :: ~MaxHeap() {
    delete[] Products;
}
void MaxHeap::addToCart(const Product& product) {
    insertProduct(product);
}

Product MaxHeap::removeFromCart() {
    return extractMaxProduct();
}

void MaxHeap::displayShoppingCart() const {
    cout << "Shopping Cart (Max Heap):\n";
    for (int i = 0; i < size; ++i) {
        cout << Products[i].ProductName << " - Price: " << Products[i].ProductPrice << ", Quantity: " << Products[i].CurrProductStock << endl;
    }
    cout << endl;
}

void MaxHeap::removeFromCart(const string& productName) {
    bool found = false;
    int foundIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (Products[i].ProductName == productName) {
            found = true;
            foundIndex = i;
            break;
        }
    }

    if (found) {
        Products[foundIndex] = Products[size - 1];
        size--;
        ShiftDown(foundIndex);
    }
    else {
        cout << "Product '" << productName << "' not found in the cart." << endl;
    }
}

int MaxHeap::searchProductByName(const string& productName) const {
    for (int i = 0; i < size; ++i) {
        if (Products[i].ProductName == productName) {
            return i;
        }
    }
    return -1;
}


void MaxHeap::addProductToCart(const string& productName, MaxHeap& productCatalog) {
    int productIndex = productCatalog.searchProductByName(productName);

    if (productIndex != -1) {
        Product productToAdd = productCatalog.Products[productIndex];
        productToAdd.CurrProductStock = 1;
        insertProduct(productToAdd);
        cout << "Product '" << productName << "' added to the cart." << endl;
    }
    else {
        cout << "Product '" << productName << "' not found in the catalog." << endl;
    }
}

void MaxHeap::updateQuantity(const string& productName, int newQuantity) {
    int productIndex = searchProductByName(productName);

    if (productIndex != -1) {
        Products[productIndex].CurrProductStock = newQuantity;
        cout << "Quantity of '" << productName << "' updated to " << newQuantity << " in the cart." << endl;
    }
    else {
        cout << "Product '" << productName << "' not found in the cart." << endl;
    }
}








