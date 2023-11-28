
#include<iostream>
#include"shopping_cart.h"

using namespace std;

int main() 
{
    const int MaxHeapSize = 5; 

    
    MaxHeap catalog(MaxHeapSize);

    
    Product product1("Product A", "Description A", 50, 10);
    Product product2("Product B", "Description B", 30, 20);
    Product product3("Product C", "Description C", 80, 5);

    
    catalog.insertproduct(product1);
    catalog.insertproduct(product2);
    catalog.insertproduct(product3);

    
    catalog.displayHeap();

    
    Product maxProduct = catalog.getMax();
    cout << "Maximum Price Product: " << maxProduct.ProductName << " - Price: " << maxProduct.ProductPrice
        << ", Popularity: " << maxProduct.CurrProductStock << endl;

    Product removedMaxProduct = catalog.extractMaxProduct();
    cout << "\nRemoved Maximum Price Product: " << removedMaxProduct.ProductName << " - Price: "
        << removedMaxProduct.ProductPrice << ", Popularity: " << removedMaxProduct.CurrProductStock << endl;

   
    catalog.displayHeap();

    return 0;
}