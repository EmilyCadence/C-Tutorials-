

/*

Program - C Language Tutorial #1 by Emily CS.
Author - Emily CS 
Copyright - 2/11/23 Emily CS.  
 
Description: A quick C language Tutorial.   This borrows some C++ features
like iostream to make this simpler than writing in pure C.  

Compile and run online in your browser at https://www.onlinegdb.com/

*/ 

//comments 

    //comments let us write notes in our code 

    //Whatever you type following two backslashes gets ignored by the compiler for the rest of the line 
    
    /*
    
    We can also do a multi line comment like this 
    This looks nicer, and we don't have to type // a bunch of times. 
    
    comments are great for explaining how our code works so that someone else 
    can understand it. Its also important so that we can understand our own code
    when we forget how it works later
    
    

    */ 
    
//Lets jump right in and write our first program.


    /*
    
    A wholesale bakery has hired us to write a program so that the sales manager can quickly estimate the 
    price of cakes.  The cakes cost $25.50 each.  The sales rep can add a discount to sweeten the deal 
    for big customers. 
    
    Before we write code, lets break down the steps of what we need to do in plain English.  This is 
    called pseudo code, and this is the first step of writing any program. 
    
    1.) Create a place in memory to keep track of the number of cakes
    2.) Create a place in memory to store the price of the cakes
    3.) Create a place in memory to store the total price of the order 
    4.) create a place in memory to store the percentage of the discount 
    5.) Ask the user to type in the number of cakes.  Get this and store in memory 
    6.) Ask the user to type in the percentage of the discount.  Get this and store in memory 
    7.) Calculate the total cost of the order by multiplying the number of cakes by the price of each cakes. 
    8.) Print the total price to console before discount. 
    9.) Print the discounted price.
    
    */ 


/* Lets jump right in and write some code.

First we need to write a few lines of boiler plate code. Don't worry about what 
this is for now.  We will get to that later.  

*/ 
 
    
#include <iostream>

using namespace std;

int main(){



// OK now that we got that out of the way.  Lets write our program.

    //Variables.  We are going to start by declaring variables. Variables store basic data types in memory. 
    
    /*Lets refer back to our outline.  
    
    1.) Create a place in memory to keep track of the number of cakes.   This only needs to be a whole number. 
    will declare this as int which stores an integer. We will initialize this to 0 for now. 
    
    lets give this a name that makes it clear what this variable is when we use it later in the code. 
    In C we want the first letter of the variable to be lower case. We will write this in Camel Case which is a best practice.
    I.e numOfCakes 
    
    Notice the semi colon at the end? This tells the compiler this is the end of the line. If we forget this 
    the compiler will treat everything that comes after as a line of code and throw a ton of cryptic errors. 
    (Welcome to programming lol).  There are some exceptions where we don't use a semi colon but we will get to that later. 
    
    */

    int numOfCakes = 0;  
    
    
    /*
    
    2.) Create a place in memory to store the price of the cakes
    
    The price of cakes is 22.50 Notice that number has decimals, and is not a whole number like the last variable we declared?  
    We need to declare this as a floating point number. We will use the data type double, which is a 64 bit floating point number.
    The price is also a fixed number which doesn't change.  We will make it a constant, using the const keyword.  Its a best practice
    to declare variables that never change as a constant. 
 
    */

    const double priceOfCakes = 22.50; 
    
    
    /* 
    
    3.) Create a place in memory to store the total price of the order 
    
    We won't use const this time, because we will declare this as 0, and write the total
    price to this variable later. 
    
    */ 
    
    double totalPrice = 0;
    
    // 4.) create a place in memory to store the percentage of the discount. Lets make this a double for the hell of it  Initialize to 0 
    
    double percentageOfDiscount = 0; 
    

//IO 

    /*
    
    We are done declaring variables.  Lets move onto something fun like some Input and Output aka IO 
    Remember at the top of the program we had some gibberish about #include <iostream>  That lets us use functions of the iostream library
    from c++ standard library in our code.  We use this to  print to the console, and get input from the console.  
    
    when we print to the console.  We use cout.  The << operator takes our text in the quotes, and sends it to cout (the output stream to the console) 
    
    When we want to get something from the console.  We use cin.   the >> operator takes the cin  (the input stream from the console) and puts it in our variable. 
    
    */ 
    
    //  5.) Ask the user to type in the number of cakes.  Get this and store in memory 

    cout << "Please type in the number of cakes in the order and press enter"; 
    
    cin >> numOfCakes;
    
    //   6.) Ask the user to type in the percentage of the discount.  Get this and store in memory 
    
    cout << "Please type in the percentage of the discount and press enter. I.e 0.05 for 5 percent Type in a number only ";  
    
    cin >> percentageOfDiscount; //FYI This will crash if you try to type in something that's not a number like % symbol because percentageOfDiscount can only store a number. 
    

//Math 

        // 7.) Calculate the total cost of the order by multiplying the number of cakes by the price of each cakes. 
    
        totalPrice = numOfCakes * priceOfCakes;    
        
    
//Output 

        // 8.) Print the total price to console before discount.  

        cout << "The total price before discount is $" << totalPrice; 
    
        // 9.) Print the discounted price.
        
        cout << "The price with discount is $";
        
        cout << (totalPrice -= totalPrice * percentageOfDiscount);  //we can do math here too since we only calculate this to print.  
        

    return 0;  //this ends our program  A return code of 0 means the program ran successfully. 
}


//Press green button with arrow to run. 
