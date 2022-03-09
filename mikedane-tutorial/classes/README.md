# Classes and Objects #

Classes are like blueprints.  They describe what the data should look like and lay out all of the attributes and features that will be a part of the data type.

A simple way to describe a class and how useful it could be would be to imagine if you were a library or a book shop, and you wanted to keep an itenary of all the books you have in the building.  A class would be a good way to store the data without having to tediously repeat lines of code several times.

```
class Book{
    public:
        string title;
        string author;
        int numPages;
};
```
Each variable within the class is called a **class attribute**.

To be able to use this class, we would have to create an *instance* of the class in which we call a **class object**.

To craete a class object you would need to reference the class name first before the name of the object.
```
Book book1;
```

`book1` is now essentially a *class object*; which means it holds all the attributes of the `Book` class.  To gain access to these attributes and store data within them in the class object, we would then need to reference `.` followed by the class attribute.
```
book1.title =  "Lord of The Rings";
```

Lets look at how we would create multiple class objects and place data within the class object attributes.

```
class Book{
    public:
          string title;
          string author;
          int numPages;
};

int main(){

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.numPages = 500;

    cout << book1.title << endl;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "JRR Tolkien";
    book2.numPages = 300;

    cout << book2.title << endl;

    return 0;
}
```

As you can see this is a far quicker way to store and reference data with classes, and is a key aspect in ***Object Orientated Programming (OOP).***
