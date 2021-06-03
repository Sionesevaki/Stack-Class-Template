//
//  IntStack.cpp
//  StackClassTemplate
//
//  Created by Sione on 9/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "IntStack.hpp"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool IntStack::isEmpty(void) const
{
    if(list.isEmpty())
    {
        return true;
    }
    
    else
        return false;
}

bool IntStack::push(int operand)
{
    list.addAtHead(operand);
    
    return true;
    
}

bool IntStack::pop(int& operand)
{
    if(list.isEmpty())
        return false;
    else
    {
        list.removeFromHead(operand);
        
        return true;
    }
}

void IntStack::debugWrite(ostream& outfile) const
{
    list.write(outfile);
}

ostream& operator <<(ostream& outfile, const IntStack& stack)
{
    stack.debugWrite(outfile);
    
    return outfile;
}
