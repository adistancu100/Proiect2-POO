# Skype Contact Agenda - Object-Oriented Programming Project (C++)

This project is a console-based contact agenda written in C++. It demonstrates object-oriented programming techniques such as class hierarchies, operator overloading, polymorphism, smart pointers, and exception handling.

## Purpose

The project is designed to practice and demonstrate core OOP concepts:
- **Class inheritance**
- **Virtual functions and polymorphism**
- **Operator overloading**
- **Dynamic memory management**
- **Custom class hierarchies**

It simulates an agenda that stores different types of contacts, including Skype users from Romania and abroad.

## Features Implemented

- Console-based contact management
- Class hierarchy for various types of subscribers:
  - `Persoana`: base class for people with an `id` and a `name`
  - `Abonat`: extends `Persoana` with a phone number
  - `Abonat_Skype`: adds a Skype ID
  - `Abonat_Skype_Romania`: adds an email address for Romanian users
  - `Abonat_Skype_Extern`: derived class for international Skype users
- `Agenda` class to store and manage subscribers:
  - Add subscribers using `+=`
  - Access subscriber details by name using `[]`
  - Track the number of subscribers using a static attribute
- Operator overloading for:
  - `<<` and `>>` for input/output
  - `=` (assignment operator)
- Polymorphic behavior via virtual functions
- Dynamic memory management with no memory leaks (smart pointers used)
- Copy constructor, destructor, and assignment operators defined where needed
- Proper separation of code into `.h` and `.cpp` files
