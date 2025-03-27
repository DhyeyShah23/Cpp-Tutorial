/* 
Online Shopping Cart: Design an online shopping system.
• Create a class Product with attributes: productID, productName, price, and quantity.
• Add a function calculateTotalPrice() that calculates the total cost based on quantity.
• Get the product details using productDetails() function.
• Create an array of Product objects and write a function to display the details of all products in the cart.
Write the C++ code to show how multiple product objects can be used.
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Function Declarations
void ViewCart(Product*, int);



// Classes
class Product {
private:
    string ProductName;
    int ProductId;
    double ProductRate;
    int ProductQuantity;
    double ProductAmount;

public:
    Product(string name, int id, double price) {
        ProductName = name;
        ProductId = id;
        ProductRate = price;
        ProductQuantity = 1;
    }

    // Getter functions
    string GetName() {return ProductName;}
    int GetId() {return ProductId;}
    double GetRate() {return ProductRate;}
    int GetQuantity() {return ProductQuantity;}
    double GetAmount() {return ProductAmount;}    

    // To add or remove quantity
    void AddQuantity() {ProductQuantity++;}
    void RemoveQuantity() {if(ProductQuantity>0) {ProductQuantity--;}}

    // To calculate total price of a product
    void CalcAmt() {ProductAmount = (ProductRate * ProductQuantity);}

    void ProductDetails() {
        CalcAmt();
        cout << endl;
        cout << "Product Name: " << ProductName << endl;
        cout << "Product ID: " << ProductId << endl;
        cout << "Product Quantity: " << ProductQuantity << endl;
        cout << "Product Rate: " << ProductRate << endl;
        cout << "Total Amount: " << ProductAmount << endl;
        cout << endl;
    }
};



// Main Function
int main() {
    Product p1("Laptop", 101, 45000);
    Product p2("Keyboard", 102, 1500);

    p2.AddQuantity();
    p1.AddQuantity();

    p1.RemoveQuantity();

    p1.ProductDetails();
    p2.ProductDetails();

    Product cart[] = {p1, p2};
    ViewCart(cart, std::size(cart));
}



// Function Definations
void ViewCart(Product* cart, int size) {
    cout << endl;
    int width1 = 5;
    int width2 = 10;
    cout << left;
    for(size_t i {0}; i<size; i++) {
        cout << setw(width1) << "ID: " << setw(width2) << cart[i].GetId() << setw(width1) << "Quantity: " << setw(width2) << cart[i].GetQuantity() << setw(width1) << "Rate: " << setw(width2) << cart[i].GetRate() << setw(width1) << "Amount: " << setw(width2) << cart[i].GetAmount() << endl;
    }
}