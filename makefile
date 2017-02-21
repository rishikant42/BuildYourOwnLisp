main:
	gcc -g -std=c99 blispy.c mpc.c -ledit -lm -o blispy

install: main
	mv blispy /usr/local/bin/

uninstall:
	rm /usr/local/bin/blispy
