#include <stdio.h>
#include <string.h>

struct customer {
	char name[40];
	int age;
};

int main(void) {
	struct customer aCustomer = { "박수희", 36 };
	struct customer cArray[2] = { {"장동건", 38}, {"고소영", 38} };
	int i = 0;

	struct customer* cp = &aCustomer;
	printf("Name = %s, Age = %d\n", cp->name, cp->age);

	cp = cArray; // 배열을 가리킬 때는 & 연산자를 사용하지 않음.
	for (i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", cp->name, cp->age);
		cp++;
	}

	return 0;
}