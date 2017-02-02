#include <string>
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Simple branching: argc=%d\n", argc);
	int branch(0);

	if(argc == 1) {
		branch = 1;
	}
	else {
		branch = 2;
	}

	printf("std::strings creating branches?\n");

	std::string name("SomeName");
	std::size_t nameLength = name.length();

	name.resize(nameLength + 10);
	
	return 0;
}
