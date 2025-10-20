// basics.cpp - Basic C++ Input/Output Examples
// Základy C++ - Príklady vstupu a výstupu
//
// HOW TO COMPILE / AKO SKOMPILOVAŤ:
//   g++ basics.cpp -o basics
//
// HOW TO RUN / AKO SPUSTIŤ:
//   ./basics
//
// This program shows basic C++ input and output with simple examples.
// Tento program ukazuje základný vstup a výstup v C++ s jednoduchými príkladmi.

#include <iostream>

using namespace std;

int main() {
    // --- Section 1: Simple Output / Jednoduchý výstup ---
    // cout prints text to the screen / cout vypíše text na obrazovku
    cout << "Hello, World!" << endl;
    cout << "Ahoj, svet!" << endl;
    
    // --- Section 2: Variables / Premenné ---
    // Declare and use variables / Deklaruj a použi premenné
    int age = 16;           // integer number / celé číslo
    double height = 1.75;   // decimal number / desatinné číslo
    
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;
    
    // --- Section 3: Simple Input / Jednoduchý vstup ---
    // cin reads input from keyboard / cin načíta vstup z klávesnice
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;
    
    // --- Section 4: Simple Math / Jednoduchá matematika ---
    // Basic arithmetic operations / Základné aritmetické operácie
    int a = 10;
    int b = 3;
    cout << "Addition: " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Subtraction: " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Multiplication: " << a << " * " << b << " = " << (a * b) << endl;
    cout << "Division: " << a << " / " << b << " = " << (a / b) << endl;
    
    // --- Section 5: User Input Example / Príklad vstupu od užívateľa ---
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << (num1 + num2) << endl;
    
    return 0;
}

// EXERCISES / CVIČENIA:
// 1. Modify the program to ask for your name and print a greeting.
//    Uprav program tak, aby sa pýtal na tvoje meno a vypísal pozdrav.
//
// 2. Add code to calculate and print the area of a rectangle (width * height).
//    Pridaj kód na výpočet a výpis obsahu obdĺžnika (šírka * výška).
