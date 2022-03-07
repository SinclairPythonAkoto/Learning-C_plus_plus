# Strings in C++ #

Whenever we create strings in C++ we want to surround them with double quotation marks.  Any text inside the qoutation marks is considered part of the string.

A string can contain any characters you want.  This can be spaces, numbers & specials characters.  *You can include qoutation marks in strings as long as you have a blackslash before it* -> `\"`.


#### String indexes ####
All characters have string indexes.  This means you can acess the value of the string at the particular index gievn.

```
string greeting = "Hello";

cout << greeting[0] << endl;
// output: G
```


#### String length ####
You can also find the length of a string by using `.length()`.  Knowing the length of a string can come in handy in many circumstances.

```
cout << greeting.length();
```


