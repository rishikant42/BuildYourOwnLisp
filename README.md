# BuildYourOwnLisp
http://buildyourownlisp.com/

```
gcc -std=c99 -Wall parsing.c mpc.c -ledit -lm -o parsing

gcc => compiler name
mpc.c => parser
-ledit => editliine lib for scroll up & down
-lm  ==> math lib
-std=c99 ==> use this flag to tell the compiler which version or standard of C we are programming with
```

#Example
```
$ gcc -g -std=c99 -Wall belispy.c mpc.c -ledit -lm -o blispy
$ ./blispy 
Lispy Version 0.0.0.0.4
Press Ctrl+c to Exit

lispy> + (* 2 3) (* 4 5) 6
32
lispy> + (* 2 3) (* 4 5) 6 (/ 20 5)
36
lispy> / 8 0
Error: Div By Zero!
lispy>
```
