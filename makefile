PHONY:all
all:hello
hello:hello.c libprint.a
	gcc $^ -o $@
libprint.a:print.c
	gcc -c print.c -o print.o
	ar -rc libprint.a print.o
PHONY:clean
clean:
	rm -rf all
