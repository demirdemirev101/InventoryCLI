#pragma once
#include <vector>
#include <memory>
#include <iostream>
using namespace std;

template <typename T>
class Repository
{
private:
	vector<unique_ptr<T>> items;

public:
	void add(unique_ptr<T> item)
	{
		items.push_back(move(item));
	}

	int count() const
	{
		return items.size();
	}

	T* getAt(int index) const
	{
		if (index<0 || index>=items.size())
		{
			throw out_of_range("Index out of the bounds in Repository.");
		}
		
		return items[index].get();
	}

	void displayAll() const
	{
		for(const auto& item : items)
		{
			item->displayInfo();
		}
	}

	double getTotalInventoryValue() const
	{
		double total = 0;
		for (const auto& item:items)
		{
			total += item->getTotalValue();
		}
		return total;
	}
};