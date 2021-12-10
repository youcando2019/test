#include <utils.h>

int main()
{
	/*
	Byte20 bin;
	FILE* f = NULL;
	f = fopen("model.bin", "rb");
	fread(&bin, sizeof(Byte20), 1, f);
	printf("magic: %d\n", bin.magic);
	printf("version: %d\n", bin.version);
	printf("length: %d\n", bin.length);
	printf("contentLength: %d\n", bin.contentLength);
	printf("contentFormat: %d\n", bin.contentFormat);
	fclose(f);
	*/

	slList* l = slList_init();
	int a = 2;
	slList_add(l, &a, sizeof(int));
	if(l == NULL)
	{
		printf("List is NULL\n");
	}
    
	printf("\tSuccess\n");
	return 0;
}
