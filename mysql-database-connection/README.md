# MySQL Database Connection With C++ #

**Source:** [Steve's teacher](https://www.youtube.com/watch?v=cSZvq7Kv6_0)

This is going to be a simple program that connects to a MySQL database.  The data base is going to house the users *ID, fist name, last name, email and password*.

To complete this tutorial you will either have to have **MySQL** *or* **MariaDB** installed.

### Project Objectives ###
- Install MySQL
- Create a database on terminal
- Connect to the database via C++ 
- Complete CRUD operatoins with C++ *(Create, Read, Update, Delete)*



#### Installing MySQL on MacOS ####

Open the terminal and run:
```
brew install mysql
```

If you get this error message:
```
Error: The following directories are not writable by your user:
/usr/local/share/man/man8
```

Then you need to change the ownership of the directories to your user by simply running:
```
sudo chown -R $(whoami) /usr/local/share/man/man8
```

Then you can try `brew install mysql` again.  After that is complete you should secure your connection to the MySQL server.  Before we do that we need to start the MySQL server.

**Start MySQL server**
```
brew services start mysql
```

**Securing the MySQL server**
```
mysql_secure_installation
```

*Since we used* `brew serviced start mysql` *to start MySL, your Mac will re-start it at reboot.  To stop this from happening, and to also immediately stop MySQL you can run:*
```
brew services stop mysql
```

**Start MySQL and keep it running until the computer is shut down**
```
mysql.server start
```

**Prevent MySQL from re-starting at reboot**
```
mysql.server stop
```

**Start MySQL**
Now that's out of the way, you can now connect to the server.  Type in the terminal:
```
mysql -u root -p
```

or 

```
mysql -uroot -p
```

***You will be prompted for your MySQL password which you created when securing the server so don't forget it!***

**Stop MySQL**
```
\q
```

More information on MySQL setup for MacOS can be found [here](https://flaviocopes.com/mysql-how-to-install/)

With this knowlege I plan to create programs that connect to a MySQL database rather than storing the data locally on the machine.
