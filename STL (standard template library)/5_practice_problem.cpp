#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class Item {
private:
    string name;
    float price;
    int qty;

public:
    // Constructors
    Item() {}
    Item(string n, float p, int q);

    // Overloaded friend operators for file I/O
    friend ofstream& operator<<(ofstream& fos, const Item& i);
    friend ostream& operator<<(ostream& os, const Item& i);
    friend ifstream& operator>>(ifstream& fis, Item& i);
};

// Constructor definition
Item::Item(string n, float p, int q) : name(n), price(p), qty(q) {}

// Overloaded ofstream operator for writing to file
ofstream& operator<<(ofstream& fos, const Item& i) {
    fos << i.name << endl << i.price << endl << i.qty << endl;
    return fos;
}

// Overloaded ifstream operator for reading from file
ifstream& operator>>(ifstream& fis, Item& i) {
    fis >> i.name >> i.price >> i.qty;
    return fis;
}

// Overloaded ostream operator for displaying Item data
ostream& operator<<(ostream& os, const Item& i) {
    os << "Name: " << i.name << endl;
    os << "Price: " << i.price << endl;
    os << "Quantity: " << i.qty << endl;
    return os;
}

int main() {
    int n;
    string name;
    float price;
    int qty;

    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item*> list;

    // Input item details
    cout << "Enter details of all items:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter Item " << i + 1 << " Name, Price, and Quantity: ";
        cin >> name >> price >> qty;
        list.push_back(new Item(name, price, qty));
    }

    // Write items to file
    ofstream fos("Items.txt");
    for (Item* item : list) {
        fos << *item;
    }
    fos.close();

    // Read and display items from file
    Item item;
    ifstream fis("Items.txt");

    cout << "\nItems read from the file:" << endl;
    int index = 1;
    while (fis >> item) {
        cout << "Item " << index++ << endl << item << endl;
    }

    // Clean up dynamic memory
    for (Item* item : list) {
        delete item;
    }

    fis.close();
    return 0;
}
