# Class Inheritance #

Class inheritance is when you create a class, then create other classes that can **extend / inherit** all the *functionalities & attributes* of the original class.

In order for the class to be able to use the attributes and functionalities off another class, you would need to use `: public` keyword before referencing the name of the class you wanted to inherit.

What makes C++ really impressive that this is simply done in literally *one* line of code. Not only is the class able to inherit another class, but it also has the ability to create its own functionalities and attributes that are unique to itself.

Lets look at a class of a car, which will have basic elements, and then the second class which will be a luxury car with new features as well as inherited features of the basic car.

```
class BasicCar{
    public:
        int wheels = 4;
        int seats = 5;
        int boot = 1;
};

class LuxuryCar : public basicCar{
    public:
        string seatType = "leather";
        string topSpeed = "120 mph";
        bool chauffer = true;
};
```

In this example, the `LuxuryCar` class can access all the attributes of the `BasicCar` and also has it's own attributes that are unique to itself.

```
BasicCar car1;
cout << car1.wheels << endl;     // 4

LuxuryCar car2;
cout << car2.wheels << endl;     // 4
cout << car2.seatType << endl;   // leather
```

**Note** In the example above, `car1` **cannot** access attributes such as `seatType` from `car2`, but `car2` can access the attributes from `car1`
