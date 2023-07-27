#include "TTH_HASH_FUNCTS.h"	

int main()
{
	string message = "ee..eee...eee";

	string* messagePtr = &message;

	RemoveGarbage(*messagePtr);
	


	cout << message;
}