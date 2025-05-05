#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compareAsc(struct Student a, struct Student b);
int compareDes(struct Student a, struct Student b);
void lower(char* arr);
struct Student {
	char name[50];
};
int main() {
	struct Student s1 = { "David" };
	struct Student s2 = { "aaron" };
	struct Student s3 = { "belle" };
	struct Student s4 = { "Zavid" };
	struct Student students[] = {s1, s2, s3, s4};
	qsort(students, 4, sizeof(struct Student), compareAsc);
	return 0;
}

int compareAsc(struct Student a, struct Student b) {
	lower(a.name);
	lower(b.name);
	return strcmp(a.name, b.name);
}

int compareDes(struct Student a, struct Student b) {
	lower(a.name);
	lower(b.name);
	return strcmp(a.name, b.name) * -1;
}

void lower(char * arr) {
	int index = 0;
	while (*(arr + index) != '\0') {
		*(arr + index) = tolower(*(arr + index));
		index++;
	}
}









