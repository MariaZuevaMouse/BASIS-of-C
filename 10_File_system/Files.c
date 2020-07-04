#include <stdio.h>

int main(int argc, char* argv[]) {
	
	FILE *f;
	f = fopen_s(&f, "filename.txt", "w");  // r = read,  w = write, a = append, rb, wb, ab 
	if (&f == NULL)return 1;
	fprintf(&f, "Hello, files! %s", "we did it! \n");
	fclose(f);

	char word[256];
	f = fopen_s(&f, "filename.txt", "r");
	while (!feof(f)) {
		fscanf_s(f, "%s", &word);
		printf("%s", word);
	}
	fclose(f);
	puts("");
	return 0;
}
