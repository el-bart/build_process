#include <embUnit/embUnit.h>

TestRef MyFunc_testsuit(void);

int main(void)
{
	TestRunner_start();
		TestRunner_runTest( MyFunc_testsuit() );
	TestRunner_end();
	return 0;
}
