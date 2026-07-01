#pragma once
#include <string>
using namespace std;

class Product
{
protected:
	string name;
	double price;
	int quantity;
public:
	Product(string name, double price, int quantity);
	virtual ~Product();

	//Getters
	string getName() const;
	double getPrice() const;
	int getQuantity() const;

	//Setters
	void setQuantity(int newQuantity);

	//Pure virtual
	virtual double getTotalValue() const = 0;
	virtual void displayInfo() const = 0;

	static int totalProductsCreated;
	static int getTotalProductsCreated();
};