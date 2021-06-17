#include <stdio.h>

void helloWorld();

void someUnnecessaryCode(){
	printf("Ding dong");
}

int main() {
	helloWorld();
}

void helloWorld() {
	printf("Hello World");
	printf("Another Line");
}
