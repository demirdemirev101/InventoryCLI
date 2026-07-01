#include <iostream>
#include <limits>
#include "Product.h"
#include "ToolProduct.h"
#include "MaterialProduct.h"
#include "Repository.h"
using namespace std;

void showMenu()
{
    cout << "\n===== Inventory Management System =====" << endl;
    cout << "1. Add Tool Product" << endl;
    cout << "2. Add Material Product" << endl;
    cout << "3. Display All Products" << endl;
    cout << "4. Show Total Inventory Value" << endl;
    cout << "5. Show Total Products Created (static counter)" << endl;
    cout << "6. Exit" << endl;
    cout << "Choose an option: ";
}

void addToolProduct(Repository<Product>& inventory)
{
    string name, material;
    double price;
    int quantity, warranty;

    cout << "Enter tool name: ";
    cin >> name;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter material: ";
    cin >> material;
    cout << "Enter warranty (months): ";
    cin >> warranty;

    inventory.add(make_unique<ToolProduct>(name, price, quantity, material, warranty));
    cout << "Tool product added successfully!\n";
}

void addMaterialProduct(Repository<Product>& inventory)
{
    string name;
    double price, weight;
    int quantity;

    cout << "Enter material name: ";
    cin >> name;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter weight per unit (kg): ";
    cin >> weight;

    inventory.add(make_unique<MaterialProduct>(name, price, quantity, weight));
    cout << "Material product added successfully!\n";
}

int main()
{
    Repository<Product> inventory;
    int choice = 0;

    while (choice != 6)
    {
        showMenu();
        cin >> choice;

        if (cin.fail())
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice)
        {
        case 1:
            addToolProduct(inventory);
            break;
        case 2:
            addMaterialProduct(inventory);
            break;
        case 3:
            cout << "\n--- Inventory Contents ---" << endl;
            inventory.displayAll();
            break;
        case 4:
            cout << "Total inventory value: " << inventory.getTotalInventoryValue() << endl;
            break;
        case 5:
            cout << "Total products created: " << Product::getTotalProductsCreated() << endl;
            break;
        case 6:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}