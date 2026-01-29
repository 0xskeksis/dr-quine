#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define CODE "?"

int main(){
	int count = 5;
	count--;
	char name[] = {'S', 'u', 'l', 'l', 'y', '_', count + 48};
	if (count == 0)
		return (1);
	int fd = open(name, O_RDONLY | O_TRUNC, 0644);
	if (fd == -1)
		return(1);
	dprintf(fd, CODE, 10, 34, count, CODE);
	//system("cc filename && ./a.out");
}
