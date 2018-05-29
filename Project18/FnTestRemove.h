#pragma once
#include "FunctionalTestObserverCase.h"
#include "Observable.h"
#include "ConcreteObservable.h"
#include "ConcreteObserver.h"
class FnTestRemove :
	public FunctionalTestObserverCase
{
public:
	Observable *publisher1;
	Observer *subscriber3, *subscriber4;
	void setUp();
	void test();
	void clean();
	FnTestRemove();
	~FnTestRemove();
};

