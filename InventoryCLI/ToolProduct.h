#pragma once
#include"Product.h"
#include<string>
using namespace std;

class ToolProduct : public Product
{
private:
	string material;
	int warrantyMonths;

public:
	ToolProduct(string name, double price, int quantity, string material, int warrantyMonths);
	~ToolProduct() override;

	double getTotalValue() const override;
	void displayInfo() const override;
};