
#include<iostream>
#include"shopping_cart.h"

using namespace std;

int main() 
{
    const int MaxHeapSize = 5; 

    
   MaxHeap productCatalog(MaxHeapSize);
MaxHeap shoppingCart(MaxHeapSize);

// Adding products to the catalog
Product prod1("Product1", "Description1", 10, 50);
Product prod2("Product2", "Description2", 20, 30);
Product prod3("Product3", "Description3", 15, 25);

productCatalog.insertproduct(prod1);
productCatalog.insertproduct(prod2);
productCatalog.insertproduct(prod3);

// Displaying the product catalog
productCatalog.displayProductCatalog();

// Adding products to the shopping cart
shoppingCart.addToCart(productCatalog.extractMaxProduct());
shoppingCart.addToCart(productCatalog.extractMaxProduct());

// Displaying the shopping cart
shoppingCart.displayShoppingCart();
}