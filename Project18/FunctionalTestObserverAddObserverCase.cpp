#include "FunctionalTestObserverAddObserverCase.h"



void FunctionTestObserverAddObserverCase::setUp()
{
	publisher = new ConcreteObservable();
	subscriber1 = new ConcreteObserver();
	subscriber2 = new ConcreteObserver();
}

void FunctionTestObserverAddObserverCase::test()
{
	publisher->addObserver(subscriber1);
	assert(publisher->count() == 1);
	publisher->addObserver(subscriber2);
	assert(publisher->count() == 2);
}

void FunctionTestObserverAddObserverCase::clean()
{
	delete publisher;
	delete subscriber1;
	delete subscriber2;
}

FunctionTestObserverAddObserverCase::FunctionTestObserverAddObserverCase()
{
}


FunctionTestObserverAddObserverCase::~FunctionTestObserverAddObserverCase()
{
}
