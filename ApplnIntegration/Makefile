TARGET: exe
exe: application.o libdll.a
	gcc application.o -o exe -L . -ldll
application.o: application.c
	gcc -g -c application.c -o application.o
libdll.a: dll.o dll_util.o
	ar rs libdll.a dll.o dll_util.o
dll.o: dll.c
	gcc -g -c dll.c -o dll.o
dll_util.o: dll_util.c
	gcc -g -c dll_util.c -o dll_util.o
clean:
	rm -rf *.o *.a exe
run:
	./exe