#include "FunctionalTestObserver.h"
#include "FunctionalTestObserverAddObserverCase.h"
void main()
{
	FunctionalTestObserver testing;
	testing.tests.push_back(new FunctionTestObserverAddObserverCase());
	testing.global_testing();
	system("pause");
}