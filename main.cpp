//
//  main.cpp
//  StackClassTemplate
//
//  Created by Sione on 9/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "IntNode.hpp"
#include "IntList.hpp"
#include "IntStack.hpp"

using namespace std;

int main()
{
    
    ofstream outfile("oop06in.txt", ios::out);
    cout << "Lab 06: the Stack & the Class Template (in-lab portion)\n";
    IntNode intItem1 (101);
    IntNode intItem2 (212);
    cout << "test nodes: " << intItem1 << ' ' << intItem2 << "\n";
    intItem1.setNext (&intItem2);
    cout << "test next:  " << intItem1 << ' ' << intItem2 << "\n\n";
    
    /////////////////////////////////////
    
    IntList list1;
    list1.addAtHead (101);
    list1.addAtHead (212);
    list1.addAtHead (323);
    list1.addAtHead (434);
    cout << "test list 101/212/323/434:\n" << list1 << "\n\n";
    
    ///////////////////////////////////
    
    int listData1;
    if (list1.removeFromHead (listData1))
        cout << "test list remove #1: " << listData1 << endl;
    else
        cout << "test list remove #1 failed\n";
    cout << "list is now:\n" << list1 << "\n";
    int listData2;
    if (list1.removeFromHead (listData2))
        cout << "test list remove #2: " << listData2 << endl;
    else
        cout << "test list remove #2 failed\n";
    cout << "list is now:\n" << list1 << "\n\n";
    
    /////////////////////////////////////
    
    IntStack stack;
    stack.push (101);
    stack.push (212);
    stack.push (323);
    stack.push (434);
    cout << "test stack 101/212/323/434:\n" << stack << endl;
    int stackData1;
    if (stack.pop (stackData1))
        cout << "test stack pop #1: " << stackData1 << endl;
    else
        cout << "test stack pop #1 failed\n";
    cout << "stack is now:\n" << stack << endl;
    int stackData2;
    if (stack.pop (stackData2))
        cout << "test stack pop #2: " << stackData2 << endl;
    else
        cout << "test stack pop #2 failed\n";
    cout << "stack is now:\n" << stack << endl;
    
    /////////////////////////////////////
    
    IntStack postfixStack;
    ifstream infile("oop06in.txt",ios::in);
    if (!infile)
        cout << "error opening data file!\n";
    else // file ok
    {
        bool stackError = false; // true if stack empties too soon
        while (! infile.eof())
        {
            char token [10];
            infile >> token;
            
            // BODY OF LOOP GOES HERE
            
            cout << "stack is now " << postfixStack << "\n\n";
        }  // end while not eof
        if (stackError)
            cout << "stack emptied during expression evaluation!!\n";
        else // no stack error
        {
            int intResult;
            if (postfixStack.pop (intResult))
                cout << "expression evaluates to " << intResult << endl;
            else
                cout << "final pop of IntStack failed\n";
            if (postfixStack.isEmpty())
                cout << "empty stack => well-formed postfix expression!\n";
            else // stack is not empty
                cout << "non-empty stack => illegal postfix expression!\n";
        }  // end else no stack error
    } // end else file ok
    
    postfixStack.debugWrite(outfile);
    return 0;
}
