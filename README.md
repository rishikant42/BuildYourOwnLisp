# BuildYourOwnLisp
http://buildyourownlisp.com/

Install instructions
```
$ git clone https://github.com/rishikant42/BuildYourOwnLisp
$ cd BuildYourOwnLisp
$ sudo make install
```

Uninstall instructions
```
$ sudo make uninstall
```

#Example
```
$ blispy 
Lispy Version 0.1
Press Ctrl+c to Exit

lispy> + 1.1 (* 2.2 3.3 (+ 4.4 5.5 6.6) 7.7) (/ 8.8 2.2) 9.9
937.38
lispy> / 8 0
Error: Division By Zero!
lispy> + 2 3.5 (* 4 5.5) 6
33.50
lispy> + 2 3
5.00
lispy> 
```
