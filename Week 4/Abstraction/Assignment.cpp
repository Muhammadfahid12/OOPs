#include <iostream>
#include <vector>
using namespace std;

class CartItem
{

public:
    CartItem(){

    };
    virtual double calculatePrice() const = 0;
    virtual void displayDetails() const = 0;
};
class Book : public CartItem
{
    string bookTitle;
    string author;
    float pricePerUnit;
    int quantity;

public:
    Book(string title, string author, float price, int quantity)
    {
        bookTitle = title;
        this->author = author;
        this->pricePerUnit = price;
        this->quantity = quantity;
    }
    double calculatePrice() const
    {
        double totalPrice = pricePerUnit * quantity;
        return totalPrice;
    }
    void displayDetails() const
    {
        cout << "Title: " << bookTitle << endl;
        cout << "Author: " << author << endl;
        cout << "Price Per Unit: " << pricePerUnit << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

class Electronice : public CartItem
{
    string itemName;
    string brand;
    float pricePerUnit;
    int quantity;

public:
    Electronice(string name, string brand, float pricePerUnit, int quantity)
    {
        itemName = name;
        this->brand = brand;
        this->pricePerUnit = pricePerUnit;
        this->quantity = quantity;
    }

    double calculatePrice() const
    {
        double totalPrice = pricePerUnit * quantity;
        return totalPrice;
    }
    void displayDetails() const
    {
        cout << "Item: " << itemName << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price PEr Unit: " << pricePerUnit << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

class ShoppingCart
{

    vector<CartItem *> items;

public:
    void addItem(CartItem *item)
    {
        items.push_back(item);
    }

    void displayCart()
    {
        int size = items.size();
        double totalPrice = 0.0;
        for (int i = 0; i < size; i++)
        {
            items[i]->displayDetails();
            totalPrice += items[i]->calculatePrice();
        }
        cout << endl;
        cout << "Total Cost is: " << totalPrice << endl;
    }
};

int main()
{
    Book book1("5 AM CLUB", "Robin Sharma", 90, 1);
    Electronice elertonic("Smartphone", "vivo", 4000, 2);

    ShoppingCart shop;
    shop.addItem(&book1);
    shop.addItem(&elertonic);
    shop.displayCart();
}