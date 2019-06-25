
#include "BigDesk.h"
#include "SmallDesk.h"
#include "Builder.h"
int main(int argc, char *argv[])
{
	BigDesk big;
	SmallDesk small;
	Builder builder;
	builder.construct(&big);
	builder.construct(&small);
	builder.construct(&big);

	getchar();
	return 0;
}