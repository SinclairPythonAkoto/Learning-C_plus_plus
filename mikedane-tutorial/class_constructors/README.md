# Class Constructor Functions #

*A class constructor is a function that will get called everytime a class is created.*

We can use the class constructors to initialise the objects with information.  Because the constructors can acceept parameters, we can pass values into the constructor and the constructor will initialise the valuse for us.

```
Book(string title, string authour){
    title = title;
    author = author;
}
```

By doing this we do not have to reference the `object_class.attribute` when we want to assign a new value to it.

```
Book book1("Harry Potter", "JK Rowling");
```
As you can see this takes much less lines of code to create!

**Note**
*You can also create multiple constructors!*

Lets look at how the new class will look with a constructor.

```
class Book{
     public:
          string title;
          string author;

          Book(string title, string author){
               this->title = title;
               this->author = author;
          }
};

int main(){

     Book book1("Harry Potter", "JK Rowling");
     cout << book1.title << endl;

     Book book2("Lord of the Rings", "JRR Tolkien");
     cout << book2.title << endl;

     return 0;
}
```
