//
//  IntNode.cpp
//  StackClassTemplate
//
//  Created by Sione on 9/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "IntNode.hpp"
#include <stdio.h>
#include <iostream>
#include <string>

using std::ostream;

IntNode::IntNode(int newData)
{
    data = newData;
    next = nullptr;
}
int IntNode::getData(void) const
{
    return data;
}
void IntNode::setNext(IntNode* newNext)
{
    next = newNext;
}
IntNode* IntNode::getNext(void) const
{
    return next;
}

void IntNode::debugWrite(ostream& outfile) const
{
    outfile << getData();
}

ostream& operator << (ostream& outfile, const IntNode& node)
{
    node.debugWrite(outfile);
    
    return outfile;
}
