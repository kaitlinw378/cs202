# CS 202 Final Exam, S 2021

## Instructions

This exam consists of both essay and coding questions. To facilitate grading and make it easier for you to revise your answers up until the due date, you have been provided with this Github assignment that includes pre-set files to use for answering each question.

Upload all your classes related to problems in the coding section to the `coding-problem-1` and `coding-problem-2` directories. Include a makefile for problem 2. You do not need to create a complete application for problem 1.

**In Canvas, you MUST put the clone URL for your Github repository in the submission. To be safe, zip (compress) your final submission directory and upload that as well**

**Do not forget to commit and push all your files when done**

## Part 0: Photo
Take a photo of yourself with holding your student ID or a driver's license. Add this photo to your repository.

## Part 1: Conceptual Questions
Answer all of the following question in their corresponding text files in the _essay-questions_ directory.

1. In addition to SOLID, we discussed the concept of *primitive obsession*. Explain this concept, and provide an example where you would follow the concept to change an interface.
2. Explain as you would to a co-worker what the open-closed principle means.
3. Review the code below

    ```cpp
    float recursive(float n){
        static int iter = 0;
        std::cout << iter++ << std::endl;
        if(n == 1){
            return 1.0;
        } else {
            return n * recursive(n / 2);
        }
    }
    ```

    This code works for some values of n, but in other cases it runs for a long time and generates a segmentation fault. How could you modify this code so that it works for all numbers?

4. Explain the difference between runtime and compile time polymorphism. How are these types of polymorphism implemented in C++?
5. When you create a local variable, it is created on the *stack.* When you use the *new* keyword, the object you create is put on the *heap.* Whenever you use the *new* keyword, you need to use *delete* at some point, i.e.

    ```cpp
    Cat *c = new Cat();
    ...
    delete c;
    ```

    Why? Why do we *not* need to use *delete* when we create a local variable?

6. What fundamental concept in object orientation is violated by making all class attributes public? How would you explain to a new developer why this concept is not one that they should ignore?

## Part 2: Coding

1. Template functions can take parameters that are not types. Create a template function (not a class) that takes a data type and a *count* and returns a vector to contain the type that pre-allocates *count* positions. 

    Hint: You will need to look at the documentation for vectors

2. The code below will not compile. How would you fix the issue so that the code compiles and prints the age of the cat? *You cannot alter the main function! You may alter the Cat class.*

    ```cpp
    class Cat {
        int age;
    public:
        Cat(int age): age(age){}
    };

    int main() {
        Cat myCat(10);
        std::cout << myCat << std::endl;
        return 0;
    }
    ```

3. The code below uses dependency injection to provide behaviors to animals. Re-write the code and implement all necessary classes to provide the same functionality using inheritance where the *Animal* class is abstract. 

    ```cpp
    #include <iostream>
    #include "Animal.h"
    #include "CatSpeakBehaviour.h"
    #include "DogSpeakBehaviour.h"

    int main() {
        Animal cat;
        cat.speak(new CatSpeakBehaviour);
        Animal dog(new DogSpeakBehaviour);
        dog.speak();
        return 0;
    }

    // application output
    meow
    woof
    ```

4. Assume that you are asked to add a *run* method to all *Animals* in the example in Problem 2 above.  Which approach - inheritance or dependency inversion with injection would be easier for you to extend with the new functionality? Justify your answer by discussing what you would need to to in each case. You do *not* need to write code for this question.
