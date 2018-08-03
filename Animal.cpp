 #include <iostream>
using namespace std;
/*Meaghan Travers
 17194326
 1/8/2018*/
 
class Animal
{
 private:
  string animalCategory; //string variable for the animal category
  string animalSound; //string variable for the animal sounds
 public:
  Animal(string a, string b)
  {  //sets parameters to the private variables in the Animal class
   animalCategory=a;
   animalSound=b;
  }
  Animal() //constructor that assignsthe category and sound to "undefined"
  {
   animalCategory="undefined";
   animalSound="undefined";
  }
  void setCategory(string C) //setter method for animalCategory
  {
   animalCategory=C;
  }
  void setSound(string S) //setter method for animalSound
  {
   animalSound=S;
  }
  string getCategory() //getter method for animalCategory that returns the category
  {
   return animalCategory;
  }
  
  string getSound() //getter method that returns the animal sound
  {
   return animalSound;
  }
  
  virtual void describeIdentity() //virtual function that has a cout statement
  {
   cout<<"I am a simple Animal"<<endl;
  }
};

class Horse: public Animal //inherits attributed from Animal class
{
 public:
  Horse():Animal("Mustang", "neigh")  //default constructor which uses the base class (superclass) default constructor
  {
  }
  Horse(string a, string b):Animal(a,b) //// second constructor which takes two String parameters and uses the base class (super class) constructor passing it these values.
  {
  }
  void describeIdentity() //virtual function that has a cout statement
  {
   cout<<"I am a horse"<<endl;
  }
  
};

class Mouse: public Animal //inherits attributed from Animal class
{
 public:
  Mouse():Animal("House Mouse", "squeak") //default constructor which uses the base class (superclass) default constructor
  {
  }
  Mouse(string a, string b): Animal(a,b) // second constructor which takes two String parameters and uses the base class (super class) constructor passing it these values.
  {
  }
  void describeIdentity() //virtual function that has a cout statement
  {
   cout<<"I am a mouse"<<endl;
  }
};

class Dog: public Animal //inherits attributed from Animal class
{
 
 private:
  int numDogBiscuitsEaten; //private attribute
 public:
  Dog(): Animal("Corgi", "Woof") //Dog constructor
  {
   numDogBiscuitsEaten=0; //dog biscuits is 0
  }
  Dog(string a, string b): Animal(a,b) // second constructor which takes two String parameters and uses the base class (super class) constructor passing it these values.  d
  {
   numDogBiscuitsEaten=0; ////dog biscuits is 0
  }
  
  int getBiscuits() // getter function for the attribute numDogBiscuitsEaten
  {
   return numDogBiscuitsEaten;
  }
  void eatDogBiscuits() //function will not return anything but will add one to  numDogBiscuitsEaten.
  {
   numDogBiscuitsEaten+=1;
  }
  void describeIdentity() //virtual function that has a cout statement
  {
   cout<<"I am a dog"<<endl;
  }
};

class Cat: public Animal //inherits attributed from Animal class
{
 public:
  Cat(): Animal ("Persian", "meow")//default constructor which uses the base class (superclass) default constructor
  {
  }
  Cat(string a, string b): Animal(a,b) // second constructor which takes two String parameters and uses the base class (super class) constructor passing it these values.
  {
  }
  void describeIdentity() //virtual function that has a cout statement
  {
   cout<<"I am a cat"<<endl;
  }
};

class Tiger: public Animal //inherits attributed from Animal class
{
 public:
  Tiger(): Animal ("Siberian", "Meow") //default constructor which uses the base class (superclass) default constructor
  {
  }
  Tiger(string a, string b): Animal(a,b) // second constructor which takes two String parameters and uses the base class (super class) constructor passing it these values.  d
  {
  }
  void describeIdentity() //virtual function that has a cout statement
  {
   cout<<"I am a tiger"<<endl;
  }
};

int main()
{
 Cat Cat1; //declaring a cat object
 Dog Dog1; //declaring a dog object
 Tiger Tiger1, Tiger2; //declaring two tiger objects
 
 cout<<"The Cat makes a noise like: "<<Cat1.getSound()<<endl; //make calls on the getter function for the Cat object
 cout<<"The Tiger makes a noise like: "<<Tiger1.getSound()<<endl; //getter function to Tiger object
 
 cout<<"The Tiger makes a noise like: "<<Tiger2.getSound()<<endl; // Tiger object use the getter functions to retrieve the sound
 cout<<"The type of Tiger is: "<<Tiger2.getCategory()<<endl; // Tiger object use the getter functions to retrieve the category
 
 Tiger2.setSound("purr"); //setter function changing animal sound
 cout<<"Sound the Tiger makes AFTER changing it: "<<Tiger2.getSound()<<endl; //Prints out the new sound to make sure it worked
 Dog1.eatDogBiscuits(); //calling the function eatDogBiscuits() from the Dog class
 //Cat1.eatDogBiscuits(); Can't call this because it is not in the Dog class
 cout<<"The type of Dog is: "<<Dog1.getCategory()<<endl; //retrieve the animalCategory
 cout<<"The sound a dog makes is: "<<Dog1.getSound()<<endl; //retrieve animalSound
 cout<<"The number of dog biscuits is: "<<Dog1.getBiscuits()<<endl; //call eatDogBiscuit()
 
 Animal *animals[5];
 // Create and array of Animal 5 pointers, then create 5 different animal objects and allow successive elements in the array of pointers, point to a different animal object.
 animals[0] = new Horse(); 
 animals[1] = new Mouse(); 
 animals[2] = new Dog(); 
 animals[3] = new Cat(); 
 animals[4] = new Tiger();
  
 for(int i=0; i < 4; i++) //loop that cycles through the array of elements and prints out the virtual functions
 { 
  animals[i]->describeIdentity();
 } 
  return 0;
  
}
