# Getters and Setters #

*Getters and setters* allows you to control the access to the different elements inside the classes you create in C++.

When using classes in C++ you may come across a situation where you want to control the type of data that is assigned to the object's attribute; for instance, you may want to control the rating given for each movie being played in a cinema.

This means you wouldn't want a movie to be given a fake or made up rating, you only want a movie to be given a rating from your given list.  To achieve this you would use *getters & setters* to control what type of rating could be applied to each movie, and if a wrong rating was applied you could set a default or an error message.

### Public & Private ###
We have used the `public` keyword a few times in our classes.  ***But what does it mean and what does it actually do?***

**Public** means that attributes and functions wihtin it can be accessed by the code outside of the class.

**Private** means that attributes *(and also functions)* within it can ***not*** be accessed by the rest of the codebase outside of the class.  This `private` keyword is very powerful becuase it only allows code within the class to gain access to it.

```
class Movie{
    private:
        string rating;
    public:
        string title;
    Movie(string title, string rating){
        title = title;
        rating = rating;
    }
};
```

***You will have access to the private attributes wihtin your constructor becuase your constructor is still within the same class as the private attributes.***

### Setters ###
Once we have our private attribute, we will want to create a public function which will take the private attribute as a parameter.

```
void setRating(string rating){
    rating = rating;
}
```

Now in *constructor* we change the rating attribute to the **setRating** object function, where the parameter will be `rating`.

```
Movie(string title, string rating){
    title = title;
    setRating(rating);
};
```

*This still isn't want we want becuase for our scenario, a movie can be still given a fake or made up movie rating by setting the* `.setRating` *to an unwated rating.*  ***To avoid this, we could set up an if statement to check what is being passed through and to execute a particular action if the right or wrong movie rating is given.***

```
void setRating(string rating){
    if(rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R" || rating == "NR"){
        this->rating = rating;
     } else {
         this->rating = "NR";
     }     
}
```

### Getters ###
The `setRating` function now has the correct logic in order to control what type of  rating attribute is applied to each Movie object.  The only thing is that we will not be able to print the value of the`setRating` without creating a **getRating** object function.

```
string getRating(){
    return rating;
}
```

Now we can print the `rating` attribute *(which is a private attribute)* by referencing the getter:

```
movie_name.getRating();
```

*Check* **gettersSetters.cpp** *for the full source code.*
