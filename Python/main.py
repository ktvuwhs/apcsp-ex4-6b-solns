# from procedures_4_7_b import *
from foo import *


print('give me 3 numbers')
x = int(input())
y = int(input())
z = int(input())
print( foo(x,y,z) )
print( foo(4, 5, 6) )

def bar(x, y, z):
	return x+y+z

a = 5
b = 10
c = 15
bar(a,b,c)



# """ This file is the main program that tests all the functions """
# yourName = input('What is your name? ')

# print('\nGive me two numbers')
# num1 = int(input())
# num2 = int(input())

# print('\nTesting intCompare():', intCompare(num1, num2))
# print('Testing findMax2():', findMax2(num1, num2))

# the_maximum = findMax(10, 2) # 10

# print('\nGive me 4 numbers')
# num1 = int(input())
# num2 = int(input())
# num3 = int(input())
# num4 = int(input())

# print('Testing findMax4():', findMax4(num1, num2, num3, num4))

# print('Testing quadraticFormula():', quadraticFormula(num1, num2, num3))

# print('Testing isPrime():', isPrime(num1))

# print('Testing isCoprime():', isCoprime(num1, num2))

# print('Testing factors():', factors(num1))


# word = input('\nGive me a word: ')
# target = input('What letter do you want to remove? ')
# print('Testing removeLetter():', removeLetter(word, target))