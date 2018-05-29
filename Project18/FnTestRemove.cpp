#include "FnTestRemove.h"



void FnTestRemove::setUp()
{
	publisher1 = new ConcreteObservable();
	subscriber3 = new ConcreteObserver();
	subscriber4 = new ConcreteObserver();
}

void FnTestRemove::test()
{
	publisher1->addObserver(subscriber3);
	publisher1->addObserver(subscriber4);
	publisher1->removeObserver(subscriber4);
	assert(publisher1->count() == 1);

}

void FnTestRemove::clean()
{
	delete publisher1;
	delete subscriber3;
	delete subscriber4;
}

FnTestRemove::FnTestRemove()
{
}


FnTestRemove::~FnTestRemove()
{
}
