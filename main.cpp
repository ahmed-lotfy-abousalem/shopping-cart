
#include<iostream>
#include"shopping_cart.h"

using namespace std;

int main() 
{
    MaxHeap productCatalog(100); 

    
    Product prod1("Product1", "Description1", 10, 50);
    Product prod2("Product2", "Description2", 20, 30);
    Product prod3("Product3", "Description3", 15, 25);

    productCatalog.insertProduct(prod1);
    productCatalog.insertProduct(prod2);
    productCatalog.insertProduct(prod3);

    
    productCatalog.displayProductCatalog();

    
    MaxHeap shoppingCart(50); 

    
    shoppingCart.addToCart(productCatalog.extractMaxProduct());
    shoppingCart.addToCart(productCatalog.extractMaxProduct());

    
    shoppingCart.displayShoppingCart();

    return 0;
}