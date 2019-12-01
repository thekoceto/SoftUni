#ifndef FIND_H
#define FIND_H

#include "Company.h"

#include <vector>
#include <algorithm>

Company* find(const std::vector<Company*> company, const int &id){

    for (Company* current: company)
        if (current->getId() == id)
            return current;

    return nullptr;
}

#endif // !FIND_H


