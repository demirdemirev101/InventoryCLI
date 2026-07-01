# InventoryCLI

A C++ console application for inventory management.

## Concepts Demonstrated

- **Classes & Encapsulation** – `Product` base class with private members and validated setters
- **Inheritance** – `ToolProduct` and `MaterialProduct` extend abstract `Product`
- **Polymorphism** – `Repository<Product>` stores mixed types, `displayInfo()` dispatches virtually
- **Abstract Classes / Pure Virtual** – `Product` cannot be instantiated directly (`= 0`)
- **Virtual Destructor** – correct cleanup order (derived → base) via `virtual ~Product()`
- **Static Members** – `Product::totalProductsCreated` counts all instances globally
- **Templates** – `Repository<T>` is a generic container working with any type
- **Smart Pointers** – `unique_ptr<T>` manages heap memory automatically (no manual delete)
- **Stack vs Heap** – products allocated on heap via `make_unique`, managed via RAII
- **References** – Repository passed by reference to menu functions (no unnecessary copying)

## Project Structure
```
InventoryCLI/
├── Product.h / Product.cpp          # Abstract base class
├── ToolProduct.h / ToolProduct.cpp  # Derived class (material, warranty months)
├── MaterialProduct.h / .cpp         # Derived class (weight per unit)
├── Repository.h                     # Generic template container (header-only)
└── InventoryCLI.cpp                 # Main entry point with interactive menu
```

## Demo
![Demo](demo1.png)
![Demo](demo2.png)
