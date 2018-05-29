#include "FunctionalTestObserver.h"
#include "FunctionalTestObserverAddObserverCase.h"
#include "FnTestRemove.h"
void main()
{
	FunctionalTestObserver testing;
	testing.tests.push_back(new FunctionTestObserverAddObserverCase());
	testing.global_testing();
	testing.tests.push_back(new FnTestRemove());
	testing.global_testing();
	system("pause");
}