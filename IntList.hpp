//
//  IntList.hpp
//  StackClassTemplate
//
//  Created by Sione on 9/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef IntList_hpp
#define IntList_hpp

#include "IntNode.hpp"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class IntList
{
public:
    IntList() = default;
    //~IntList(void);
    bool     isEmpty
    (void) const;
    bool     addAtHead
    (int newData);
    bool     removeFromHead
    (int& oldData);
    void     write
    (ostream& outfile) const;
private:
    IntNode* head = nullptr;
    // disallow copies by restricting the following to `private`:
    IntList(const IntList&);
    IntList& operator=(const IntList&);
};
ostream& operator <<
(ostream& outfile, const IntList& list);


#endif /* IntList_hpp */
