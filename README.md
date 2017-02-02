# BuildYourOwnLisp
http://buildyourownlisp.com/

```
gcc -std=c99 -Wall parsing.c mpc.c -ledit -lm -o parsing

gcc => compiler name
mpc.c => parser
-ledit => editliine lib for scroll up & down
-lm  ==> math lib
```

#Example
```
$ gcc -std=c99 -Wall evaluation.c mpc.c -ledit -lm -o eval
$ ./eval 
Lispy Version 0.0.0.0.3
Press Ctrl+c to Exit

lispy> + 1 2 3 
6
lispy> + 1 (* 2 3 (+ 4 5) (/ 8 2)) 6 
223
```
