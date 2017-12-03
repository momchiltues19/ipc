#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	int fd = open("fifo", O_WRONLY);
	char* s = "read me";
	write(fd, s, strlen(s));
	return 0;
}
