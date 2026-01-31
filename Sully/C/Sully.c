#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define CODE "#include <unistd.h>%1$c#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <stdlib.h>%1$c%1$c#define CODE %2$c%3$s%2$c%1$c%1$cint main(){%1$c	int count = %4$d;%1$c	if (count == 0)%1$c		return (1);%1$c	if (access(%2$cSully_5.c%2$c, F_OK) != -1)%1$c		count--;%1$c	char name[] = %2$cSully_X.c%2$c;%1$c	name[6] = count + 48;%1$c	int fd = open(name, O_CREAT | O_WRONLY | O_TRUNC, 0644);%1$c	if (fd == -1)%1$c		return(1);%1$c	dprintf(fd, CODE, 10, 34, CODE, count);%1$c	char	cmd[] = %2$ccc Sully_X.c -o Sully_X && ./Sully_X%2$c;%1$c	cmd[9] = count+48;%1$ccmd[22] = count+48;%1$c	cmd[35] = count+48;%1$c	system(cmd);%1$c}%1$c"

int main(){
	int count = 5;
	if (count == 0)
		return (1);
	if (access("Sully_5.c", F_OK) != -1)
		count--;
	char name[] = "Sully_X.c";
	name[6] = count + 48;
	int fd = open(name, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
		return(1);
	dprintf(fd, CODE, 10, 34, CODE, count);
	char	cmd[] = "cc Sully_X.c -o Sully_X && ./Sully_X";
	cmd[9] = count+48;
	cmd[22] = count+48;
	cmd[35] = count+48;
	system(cmd);
}
