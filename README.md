# apcsp-ex4-6b-solns
See solutions in appropriate folders in this repository.

## Instructions
1. Write a procedure, `sayGreeting`, that takes a String parameter that represents the user's name, and displays/says/prints some sort of greeting using that name.  This procedure does not return anything (void return type).
2. Write a procedure, `intCompare`, that takes in two input whole numbers (integers), and compares them.  The procedure should return -1 if the first input is less than the second input; it should return 0 if the two inputs are equal; it should return 1 if the first input is greater than the second input
* `intCompare(2, 10)` returns -1 since 2 < 10
* `intCompare(10, 2)` returns 1 since 10 > 2
* `intCompare(2, 2)` returns 0 since 2 = 2

3. Here is code for a procedure that finds the minimum of two numbers.  Write a procedure named `findMax2` that takes 2 numbers as input, and returns the maximum out of all 2 numbers.
```
PROCEDURE findMin2(num1, num2)
{
    IF (num1 < num2)
    {
        RETURN(num1)
    }
    ELSE
    {
        RETURN(num2)
    }
}
```
4. Write a procedure named `findMax4` that takes 4 numbers as input, and returns the maximum out of all 4 numbers.  You can either create the procedure all over again with if-else-if statements, or you can use the findMax2 procedure you created in Problem 1 to simplify your code.

5. Write a procedure named `quadraticFormula` that takes in 3 numbers as input.  The 3 numbers represent the coefficients of a quadratic $ax^2 + bx + c$.  Use these inputs to compute the roots of that parabola.  Return a list that contains both answers.  CAUTION: Programming languages cannot handle imaginary numbers, so make sure that the number under the square root is nonnegative.  If it is negative, return an empty list and print an error message.

The quadratic formula in math is
$$x = \frac{-b\pm\sqrt{b^2 - 4ac}}{2a}$$

**To use the square root:**
* For Scratch and Snap!, there should be a green Operation block that has the square root
* For C++, you need `#include<cmath>` and use `std::sqrt()`
* For Python, at the top of your program, you need to include the line `import math` and use `math.sqrt()`
* For Java, you use `Math.sqrt()`

6. Write a procedure named `isPrime` that takes in a positive number and returns the boolean value true if the input number is prime, and false otherwise.  A number is **prime** if it is not divisible by any number less than it (except 1).  Use the fact that `return` "kills" your code and that if you find out that your number is divisible by another number you can return False, since you know it cannot be prime.
7. Write a procedure named `isCoprime` that takes in two, unique positive numbers, and returns the boolean value true if the two numbers are coprime, and false otherwise.  Two numbers are **coprime** if they do not share any factors except 1 (as in, there is no number that divides both of them).  You may assume that the two input numbers are not equal to each other.
    * For example, 25 and 36 are coprime, since they share no factors.
    * The numbers 12 and 18 are NOT coprime, since 2 divides both of them.  
9. Write a procedure named factors that takes in a positive number and returns a list of all the positive factors of the input number.

 
**Optional Challenge Problem 9.** Write a procedure named `removeLetter` that takes in two inputs: the first is a String, and the second is a letter.  The procedure should remove all instances of the letter from the String and display it.  This procedure does not return anything.

HINT: To remove letters, do the following:
* Create a string variable and set it to the empty string (this is "" for other languages); let's call this string variable STR2
* Loop through/iterate through STR2, and compare each letter of STR2 to the letter to be removed (let's call this the TARGET letter)
* If the current letter is NOT equal to the TARGET letter, then join the current letter to STR2 (this can be done by doing SET STR2 to JOIN(STR2, current letter) in Scratch/Snap! and by doing STR2 += current_letter in other languages).
* In R, use paste(STR2, current_letter, sep=""); the sep stands for separator, and it means you want to paste together the strings with no space between them.

In Scratch and Snap, you can access the individual letters with the "letter # of word" block
See these links for iterating through strings in other languages:
* [Python](https://www.geeksforgeeks.org/iterate-over-characters-of-a-string-in-python/)
* [Java](https://www.geeksforgeeks.org/iterate-over-the-characters-of-a-string-in-java/) (stick with Method 1: Naïve Approach)  IMPORTANT: In Java, you check equality for Strings using the `equals()` function (e.g., `str1.equals(str2)`).  For characters, integers, doubles (sort of), booleans, you use `==`
* [C++](https://www.geeksforgeeks.org/iterate-over-characters-of-a-string-in-c/) (stick with Method 1: Naïve Approach)
