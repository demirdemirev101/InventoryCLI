#pragma once
#include "Product.h"
#include <string>
using namespace std;

class MaterialProduct : public Product
{
private:
	double weightPerUnit;
public:
	MaterialProduct(string name, double price, int quantity, double weightPerUnit);
	~MaterialProduct() override;

	double getTotalValue() const override;
	void displayInfo() const override;

	double getTotalWeight() const;
};