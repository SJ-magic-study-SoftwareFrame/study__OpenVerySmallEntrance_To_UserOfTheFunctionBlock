#include <stdio.h>
#include "func_sub.h"
#include "func.h"

void A::func()
{
	func_sub(b);
}

void A::func_sub(B& b)
{
	b.func();
}

