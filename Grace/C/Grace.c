#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/*
	COMMENT
*/

#define RET(x) return(x)
#define CODE "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <unistd.h>%1$c%1$c/*%1$c	COMMENT%1$c*/%1$c%1$c#define RET(x) return(x)%1$c#define CODE %2$c%3$s%2$c%1$c#define MAIN() int main(){ int fd = open(%2$cGrace_kid.c%2$c, O_CREAT | O_WRONLY | O_TRUNC, 0644);if (fd == -1) RET(1); dprintf(fd, CODE, 10, 34, CODE); RET(0);}%1$cMAIN()%1$c"
#define MAIN() int main(){ int fd = open("Grace_kid.c", O_CREAT | O_WRONLY | O_TRUNC, 0644);if (fd == -1) RET(1); dprintf(fd, CODE, 10, 34, CODE); RET(0);}
MAIN()
