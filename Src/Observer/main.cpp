#include "subject/csensor.h"
#include "subject/cphotocell.h"

#include "observer/cobserver.h"
#include "observer/cscreen.h"

#include <iostream>

using namespace std;

void observerTest(void)
{
	CSensor *pSensor = new CPhotocell();

	CObersver *pScreen1 = new CScreen(pSensor, "screen_1");
	CObersver *pScreen2 = new CScreen(pSensor, "screen_2");

	pSensor->setValue(5);

	cout << "****************************" << endl;
	delete pScreen1;
	pSensor->setValue(6);

	cout << "****************************" << endl;
	delete pScreen2;
	pSensor->setValue(7);

	delete pSensor;
}

int main(int argc, char**argv)
{
	observerTest();
	system("pause");
	return 0;
}