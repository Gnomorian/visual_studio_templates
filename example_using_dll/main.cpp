#include <SomeClass.h>

int main()
{
	const auto someClass{ makeSomeClass() };
	someClass->helloWorld();
}