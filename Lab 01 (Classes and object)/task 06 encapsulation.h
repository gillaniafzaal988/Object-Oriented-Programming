#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price=0;
    int quantity=0;

public:
    void setName(string n) {
        if (!n.empty()) {
            name=n;
        } else {
            cout<<"Invalid input! Name cannot be empty."<<endl;
        }
    }

    void setPrice(double p) {
        if (p>0) {
            price=p;
        } else {
            cout<<"Invalid input! Price must be greater than 0."<<endl;
        }
    }

    void setQuantity(int q) {
        if (q>=0) {
            quantity=q;
        } else {
            cout<<"Invalid input! Quantity cannot be negative."<<endl;
        }
    }

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }
};



