/******************************************************************************
 
 Intro to C Data Types - Emily CS 
 
 Author Emily CS Ecscvt@gmail.com 
 
 Copyright 2/12/23 Emily CS. 
 

*******************************************************************************/
#include <iostream>
#include <string> 

using namespace std;

int main()
{

//data types 

    /*
    
    In the last demo we declared some variables, and covered int, and double data types.
    We are going to explore data types further. 
    
    When we store a variable in memory.  this is represented as binary data.  I.e zeros and ones.   
    The amount of memory is usually something like 8 bits, 16 bits, 32 bits, 64 bits, etc... based om 
    whats needed for a specific type.  
    
    C is a statically typed language.  When we declare a variable, we need 
    to define a specific type.
    
    We have a number of primative or fundemental data types to work with.
    These are some of the more common ones. 
     
    */ 

    // An intiger is a whole number, or a number without decimals.
    
    int speedLimit = 55;  
    
    // we can do negative numbers to.   
    
    int trafficPenalty = -100; 
    
    /* 
    
    an unsigned int for example is an exception to this.  An unsigned number in binary
    cannot store negative number.  At this time we don't have to worry about that.  But it
    is an option if trying to write code thats heavily optimized for mememory Because
    we can store a larger positive number because we aren't using a bit to define it as positive or negative. 
    For more background on this look up twos complinent.  Twos complient is how computers store and differentiate 
    positive and negative numbers. This is optional but an important computer science concept.      
    
    https://www.youtube.com/watch?v=sJXTo3EZoxM
    
    */
    
    unsigned int positiveNumberOnly = 500; 
    
    // A long takes twice the memory as Int, but lets us store bigger whole numbers.  
    // If we try to exceed the largest number we can store its called an overflow. 
    
    long int bigNumber = 2147483647;
    
    //A float is a 32 bit floating point number, aka a number with decimals.  
    //Because this an obvious mathmatical constant. This is a good time to make this a constant with const 
    
    const float pi = 3.141;  
    
    /* 
    
    A double is a 64 bit floating point number, aka a number with decimals.  
    This offers more precision than a float.  The name comes from "double precision". 
    In a modern system we have plenty of memory, and unless we are writing super optimized code
    we might as well just use double for floating point numbers. 

    A pitfall of floating point numbers is that they are close aproximatiion.  Representing
    a number with decimals in binary takes some tricky math that we won't get into here.  
    A double offers excelent precsion for most uses, like scientific calculaitons and 
    floating point math is designed to be FAST.   However something to be aware of 
    is that if we are doing math on base 10 numbers, like currency, or measurements.
    We can introduce some innacuracies.   Its ok to use types like double 
    for financial calculations while learning.   Production code uses various ways  
    to work arround this, or complex data types designed for financial calculatons. 
    
    */ 
    
    double interestRate = -.27;  
 
    //So far we have focused on numbers.  What about text.
    
    //A char stores Acharicter data, for letters, symbols, etc... 
    //Chars store a SINGLE charicter. I.e we cannot store a word in a char. 
    
    char firstInitial = 'A';   
                
    char currencySign = '$'; 
    
    // we can use a char to store a number.  Note that this is just the charicter data 
    // for a number.  We are not actually storing a number.   So without using a function
    // that converts this to a type like an integer.  We cannot use it like as a number like int, or double. 
    
    char answer = '5';  
    
    // Now that we have covered some primitave data types.  Lets talk about objects.
    // At the top of the file we imported <string> from the c++ standard library. 
    
    // The string class from the c++ standard library provides us with a string type 
    // which is an object built from primitave data types.  
    // We can use this to store a string of chars, aka text.
    
    string fullName = "Nyann Cat Nyaa Nyaa Nyaa";  
    
    //We can put numbers in a string too.  Note that these are chars. Without writing code to extract and parse them  
    //we cannot do math with these numbers.  
    
    string address =  "2521 Last Street";   
    
    //booleans or bool store a simple true or false state.    Bool  can ONLY reperesent true or false.
    //This is a basic building block of logic we will use with conditional statements or loops later. 
    
    bool isLate = true;
    bool outOfMana = false; 
    
    
    
//Arrays.  

    /* 
    
    An array is a basic data structure that lets us store multible variables in a continuous allocation of memory.  
    
    An array index starts at zero. 
    
    */ 
    
    int phoneDirrectory[3]; 
    phoneDirrectory[0] = 5551212; 
    phoneDirrectory[1] = 4914444; 
    phoneDirrectory[2] = 1231111; 

    //note we declared a size of 3.  THat gives us 3 entries, period.  Because an array creates a fixed,, continuous allocation of memory. 
    //if we try to go beyond this and the complier doesn't stop us. We will actually write beyond the bounds of the memory that has been
    //alocated.  This may cause us to overwite other memory, even memory that doesn't belong to us. This is called an overflow.   A lot of
    //securtiy vulnerabilities involve overwriting the bounds of an array.
    
    //We can also use arrays to build our own strings.  We would need to do this in if we were writing C code because we would not have access to 
    //the c++ string class we used above.  The \0 at the end  of a c string is called a null terminator, and ends the string. 
    
    char LastName[6] = {'S', 'm', 'i', 't', 'h', '\0'};
    
    // we can also do it like this. 
    
    char firstName[] = "Marry"; 
    
    
    //lets print the variables we declared to the console for practice. 
 
    cout << speedLimit;
    cout << endl;  // this starts a new line in the console. 
    cout << trafficPenalty; 
    cout << endl; 
    cout << positiveNumberOnly;
    cout << endl; 
    cout << bigNumber;
    cout << endl;
    cout << pi; 
    cout << endl; 
    cout << interestRate;
    cout << endl; 
    cout << firstInitial; 
    cout << endl;
    cout << currencySign; 
    cout << endl; 
    cout << answer; 
    cout << endl; 
    cout << fullName;
    cout << endl; 
    cout << address; 
    cout << endl; 
    cout << phoneDirrectory[0]; // prints the fist out of three indexes in our array. 
    cout << endl;
    cout << phoneDirrectory[1]; // prints the second out of three indexes in our array 
    cout << endl; 
    cout << phoneDirrectory[2]; // prints the third out of our three indexes in our array. 
    cout << endl; 
    
    // Notice how this is wrong.  Whe run this will print some unexpected numbers. 
    // We are reading memory outside the bounds of our array and introduced bug and security flaw into our code. 
    // When learning we dont have to worry about this.  When we use arrays in production code we need to protect them
    // to prevent attempts to read or write out of bounds of the array.  
   
    cout << phoneDirrectory[3];  
  
    cout << endl;
    cout << LastName; 
    cout << ' ';  //prints a space to console between our two strings. 
    cout << firstName; 
    

    return 0;
}

// press green button with arrow to run. 


