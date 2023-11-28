
#include<iostream>
#include"shopping_cart.h"

using namespace std;

int main() 
{
   MaxHeap productCatalog(10);

    
    Product product1("Product1", "Description1", 10, 50);
    Product product2("Product2", "Description2", 20, 30);
    Product product3("Product3", "Description3", 15, 25);

    productCatalog.addToCart(product1);
    productCatalog.addToCart(product2);
    productCatalog.addToCart(product3);

    
    cout << "Product Catalog:\n";
    productCatalog.displayProductCatalog();

    
    MaxHeap shoppingCart(10);

    
    shoppingCart.addProductToCart("Product1", productCatalog);
    shoppingCart.addProductToCart("Product2", productCatalog);

    
    cout << "Shopping Cart:\n";
    shoppingCart.displayShoppingCart();

    
    shoppingCart.removeFromCart("Product1");

   
    cout << "Updated Shopping Cart:\n";
    shoppingCart.displayShoppingCart();

    
    shoppingCart.updateQuantity("Product2", 5);

    
    cout << "Shopping Cart After Quantity Update:\n";
    shoppingCart.displayShoppingCart();

    return 0;
}