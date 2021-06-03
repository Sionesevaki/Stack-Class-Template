//
//  IntStack.hpp
//  StackClassTemplate
//
//  Created by Sione on 9/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef IntStack_hpp
#define IntStack_hpp

#include "IntNode.hpp"
#include "IntList.hpp"
#include <stdio.h>
#include <iostream>
#include <string>

class IntStack
{
public:
    bool     isEmpty
    (void) const;
    bool     push
    (int operand);
    bool     pop
    (int& operand);
    void     debugWrite // debug use only
    (ostream& outfile) const;
private:
    IntList  list;
};
ostream& operator <<
(ostream& outfile, const IntStack& stack);

#endif /* IntStack_hpp */
