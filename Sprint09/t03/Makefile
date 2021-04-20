all:
	clang -std=c11 -Wall -Wextra -Werror -Wpendatic -c ./src/*.c
	ar -cvq calc.a *.o


clean:
	 r -rf *.o *.a
	

install:
	install ./calc.a ../


uninstall:
	rm -rf ../calc.a


reinstall:
	make clean
	make all
	make uninstall
	make install

