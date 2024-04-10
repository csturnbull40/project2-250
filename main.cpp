//
//  main.cpp
//  CSDP PP2
//
//  Created by CHRIS TURNBULL  on 4/10/24.
//

#include <iostream>
#include "StackLinkedList.h"
#include "QueueLinkedList.h"

using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Split the number
    int integerPart = decimal;
    double decimalPart = decimal - integerPart;

    // Convert integer to binary using stack
    StackLinkedList binaryStack;
    while (integerPart > 0) {
        binaryStack.push(integerPart % 2);
        integerPart /= 2;
    }

    // Convert decimal part to binary using queue
    QueueLinkedList binaryQueue;
    const int precision = 8;
    for (int i = 0; i < precision; ++i) {
        decimalPart *= 2;
        binaryQueue.enqueue(static_cast<int>(decimalPart));
        decimalPart -= static_cast<int>(decimalPart);
    }

    // Display 
    cout << "Binary representation of the decimal number:" << endl;
    cout << "Integer part: ";
    binaryStack.display();
    cout << "Decimal part: ";
    binaryQueue.display();

    return 0;
}


