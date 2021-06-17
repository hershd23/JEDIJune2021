#include <stdio.h>

void helloWorld();

void greeting(char name[]){
        printf("Hey, Where were you?.. %s", name);
}


int main() {
	helloWorld();
	char name[] = "Chintu";
	greeting(name);
}

void helloWorld() {
	printf("Hello World");
	printf("Another Line");
}
