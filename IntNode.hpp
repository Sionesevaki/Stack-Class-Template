//
//  IntNode.hpp
//  StackClassTemplate
//
//  Created by Sione on 9/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class IntNode
{
public:
    IntNode
    (int newData);
    int      getData
    (void) const;
    void     setNext
    (IntNode* newNext);
    IntNode* getNext
    (void) const;
    void     debugWrite(ostream& outfile) const;
private:
    int      data;
    IntNode* next;
};
ostream& operator << (ostream& outfile, const IntNode& node);

#endif /* IntNode_hpp */
