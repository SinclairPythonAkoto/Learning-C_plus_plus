# Building a Registration & Login Form #

**Source:** [Simplilearn](https://www.youtube.com/watch?v=yo3ImzEwP50)

This will be a simple C++ program that will run on the terminal.  It will give the user options to create a new account, log into an existing account, or to create a new password of they have forgotten it.

### Project Objectives ###
- Create a landing page for the user to select options.
- Create login page for exisiting users to log in.
- Create registration page to allow a new user to register.
- Create a page where a user can reset their password.
- Add users into a file / database in order to validate user's ID & password.


**NOTE**
*I have made some slight changes to the code from the tutorial.*

I noticed that the program caused an infinate loop when the users select a letter / word instead of `1`, `2`, `3` or `4` in the main menu.  To resolve this I changed the `int choice` to `char choice` in the `main()` function.  Then I placed single qoutations on each of the different switch statements.

From 
```
case 1:
```

To
```
case '1':
```

This had to be done again for the forgot function where I changed the `int option` to `char option`, and modified the swicth statements the same as above.

If you try the program, feel free to delete the database `records.txt` file, and create your own logins!

Thank you `:grinning:` `:nerd_face:`
