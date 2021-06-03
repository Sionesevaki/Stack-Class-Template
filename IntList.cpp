//
//  IntList.cpp
//  StackClassTemplate
//
//  Created by Sione on 9/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "IntList.hpp"

bool IntList::isEmpty(void) const
{
    if(head)
        return false;
    else
        return true;
}

bool IntList::addAtHead(int newData)
{
    if(this->isEmpty())
    {
        head = new IntNode(newData);
        
        return true;
    }
    else if(!this->isEmpty())
    {
        IntNode *n = new IntNode(newData);
        n->setNext(head);
        head = n;
        
        return true;
    }
    else
        return false;
}

bool IntList::removeFromHead(int& oldData)
{
    if(this->isEmpty())
    {
        return false;
    }
    else
    {
        IntNode *n = head;
        oldData = head->getData();
        head = n->getNext();
        n->~IntNode();
        
        return true;
    }
}

void IntList::write(ostream& outfile) const
{
    IntNode *n = head;
    while(n)
    {
        n->debugWrite(outfile);
        n = n->getNext();
    }
}

ostream& operator <<(ostream& outfile, const IntList& list)
{
    list.write(outfile);
    
    return outfile;
}






