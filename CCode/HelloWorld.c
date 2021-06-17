#include <stdio.h>

void helloWorld();

void greeting() {
	printf("Good Morning");
}

int main() {
	helloWorld();
	
	greeting();
}

void helloWorld() {
	printf("Hello World");
	printf("Another Line");
}
