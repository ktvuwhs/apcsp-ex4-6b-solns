// Standard coding convention is to arrange includes in alphabetical order
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

// Optional function prototypes so that I can make main() my first function
void sayGreeting(const std::string word);
int intCompare(const int x, const int y);
int findMax2(const int x, const int y);
int findMax4(const int w, const int x, const int y, const int z);
std::vector<double> quadraticFormula(const double a, const double b, const double c);
bool isPrime(const int p);
bool isCoprime(const int p, const int q);
std::string removeLetter(const std::string word, const char letter);


int main()
{
	std::string word;
	char target; // We want to make target a single character here
	int w;
	int x;
	int y;
	int z;

	std::cout << "What's your name? ";
	std::getline(std::cin, word); // This allows me to read in the entire line including spaces
	sayGreeting(word);

	std::cout << "Enter 4 numbers: ";
	std::cin  >> w 
			  >> x
			  >> y
			  >> z;

	std::cin.ignore(); // Clears input buffer from previous cin so we can read an entire line again
	
	std::cout << "Enter a word: ";
	std::getline(std::cin, word);
	
	std::cout << "What letter do you want to remove? ";
	std::cin  >> target;

	std::cout << "\nTesting intCompare(): " << intCompare(w, x);
	std::cout << "\nTesting findMax2(): "   << findMax2(w, x);
	std::cout << "\nTesting findMax4(): "   << findMax4(w, x, y, z);
	
	std::cout << "\nTesting quadraticFormula(): ";
	for (double d : quadraticFormula(w, x, y))
	{
		std::cout << d << " ";
	}
	
	std::cout << "\nTesting isPrime(): " 	  << isPrime(w);
	std::cout << "\nTesting isCoprime(): " 	  << isCoprime(w, x);
	std::cout << "\nTesting removeLetter(): " << removeLetter(word, target) << std::endl;

	return 0;
}


/* ***********************************************************
					PROCEDURE DEFINITIONS
************************************************************ */

/** Note: Making parameters const are optional
* If you know your variables won't be changing, then you can make them const
* It makes your programs more secure and prevents unintended out
*/
void sayGreeting(const std::string name)
{
	std::cout << "Hello " << name << ".  How are you?\n";
}

int intCompare(const int x, const int y)
{
	if (x < y)
	{
		return -1;
	}
	else if (x == y)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int findMax2(const int x, const int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int findMax4(const int w, const int x, const int y, const int z)
{
	/** Finds max between w and x
	* Then finds max of (max of w and x) and y
	* Then finds max of (max of w and x and y) and z
	*/
	return findMax2( findMax2( findMax2(w, x), y ), z );
}

std::vector<double> quadraticFormula(const double a, const double b, const double c)
{
	std::vector<double> ans;
	const double discriminant = b*b - 4*a*c;
	
	if (a == 0)
	{
		std::cout << "Error: a is equal to 0" << std::endl;
	}
	else if (discriminant < 0)
	{
		std::cout << "Error: answers are imaginary" << std::endl;
	}
	else
	{
		ans.push_back((-b + sqrt(discriminant)) / (2*a));
		ans.push_back((-b - sqrt(discriminant)) / (2*a));
	}

	return ans;
}

bool isPrime(const int p)
{
	if (p == 1)
	{
		// If p == 1, then we return false and the function ends
		return false;
	}

	for (int curr_num = 2; curr_num < p; curr_num++)
	{
		if (p % curr_num == 0)
		{
			// If we find a number that p is divisible by,
			// then we return false and the function ends
			return false;
		}
	}

	// We reach this if p > 1 and is not divisible by anything from 2 to p-1
	// Thus, p is prime and so we return true
	return true;
}

bool isCoprime(const int p, const int q)
{
	// We assume that a>0 and b>0 and that a != b
	for (int curr_num = 2; curr_num <= p; curr_num++)
	{
		if (p % curr_num == 0 && q % curr_num == 0)
		{
			return false;
		}
	}
	return true;
}

std::vector<int> factors(const int n)
{
	std::vector<int> ans = {};
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			ans.push_back(i);
		}
	}
	return ans;
}

std::string removeLetter(const std::string word, const char target)
{
	std::string ans = "";
	for (int i = 0; i < word.length(); i++)
	{
		// Need to use char here since indexing a std::string produces individual characters
		char current_letter = word[i];
		
		// If the current letter is not equal to the target letter
		// then we add it to our answer string
		if (current_letter != target)
		{
			ans += current_letter;
		}
	}
	return ans;
}

