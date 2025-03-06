# Library Management System

## Overview
This C++ program models a simple library management system. It allows users to store book information, filter books based on price and quantity, apply discounts, and calculate the maximum number of books that can be bought within a given budget.

## Features
- **Add Books**: Users can enter details for multiple books.
- **Display Books**: Shows all stored books.
- **Filter Books**: Finds books within a specified price and quantity range.
- **Apply Discount**: Reduces price for books with low stock.
- **Calculate Maximum Books**: Determines how many books can be bought with a given budget.

## Classes
### `Carte` (Book Class)
- **Attributes**: `nume` (name), `autor` (author), `pret` (price), `nr` (number of copies)
- **Methods**:
  - `afisare()`: Displays book details.
  - `get_pret()`, `get_nr()`, `get_nume()`: Getters for book properties.

### `Lib` (Library Class)
- **Attributes**: `n` (number of books), `v[20]` (array of book pointers)
- **Constructor**: Copies book objects into the library.
