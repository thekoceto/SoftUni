#ifndef REMOVE_DUPLICATES_H
#define REMOVE_DUPLICATES_H

#include <list>

#include "Company.h"

void removeDuplicates ( std::list<Company*> &companies) {
	std::list<Company*>::iterator firstIt = companies.begin();
	for (firstIt; firstIt != companies.end(); ++firstIt) {
		std::list<Company*>::iterator secondIt = std::next(firstIt, 1);
		for (secondIt; secondIt != companies.end();) {
			if ((*firstIt)->getName() == (*secondIt)->getName()) {
				//delete *secondIt;
				secondIt = companies.erase(secondIt);
			}
			else {
				++secondIt;
			}
		}
	}
		
}
#endif // !REMOVE_DUPLICATES_H
