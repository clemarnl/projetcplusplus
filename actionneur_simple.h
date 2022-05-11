#include "actionneur.h"

#ifndef ACTIONNEUR_SIMPLE_H
#define ACTIONNEUR_SIMPLE_H
class Actionneur_simple:public Actionneur{
public:
	virtual void allume();
	virtual void eteint();
};

#endif
