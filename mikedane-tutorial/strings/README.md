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

You can also modify characters of a string and assign a character a new value.

```
string phrase = "Giraffe Academy";
phrase[0] = 'B';
cout << phrase << endl;
```

You can use the `.find()` string function to check if characters are within your chosen string.  To use this you will need to pass in 2x parameters inside the find function.  The first one being the set of characters you are searching for, and the second parameter the index position you want to start searching from.  This will return an index value of where the character(s) is found.

```
string phrase = "Giraffe Academy";
cout << phrase.find("Academy", 0) << endl;
// output: 8
```

You can also use the sub-string function `.substr()` to take a section of the string. This takes 2x arguements *(2x parameters)*.  You first pass in the index position of where you want the sub-string to begin, then you pass in the amount of characters you want to grab from the selected string.  We can also store the value of the sub-string into another string which we could use elsewhere within our code.

```
string phrase = "Giraffe Academy";
string subPhrase;
subPhrase = phrase.substr(8, 3);
cout << subPhrase << endl;
// output: Aca
```

***This just covers the basics, there are MANY more in which you can explore!!***
