import java.util.ArrayList;
import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		String word;
		char target; // Single letters should be char (character)
		int w;
		int x;
		int y;
		int z;

		System.out.print("What's your name? ");
		word = scan.nextLine();
		sayGreeting(word);

		System.out.print("Enter 4 numbers: ");
		w = scan.nextInt();
		x = scan.nextInt();
		y = scan.nextInt();
		z = scan.nextInt();

		scan.nextLine(); // Consuming "Enter" key from previous scan.nextInt();
		System.out.print("Enter a word: ");
		word   = scan.nextLine();
		System.out.print("What letter do you want to remove? ");
		target = scan.nextLine().charAt(0); // Gets next character

		System.out.println("Testing intCompare(): " 	  + intCompare(w, x));
		System.out.println("Testing findMax2(): " 		  + findMax2(w, x));
		System.out.println("Testing findMax4(): " 		  + findMax4(w, x, y, z));
		System.out.println("Testing quadraticFormula(): " + quadraticFormula(w, x, y));
		System.out.println("Testing isPrime(): " 		  + isPrime(w));
		System.out.println("Testing isCoprime(): " 		  + isCoprime(w, x));
		System.out.println("Testing removeLetter(): " 	  + removeLetter(word, target));
	}


	/* ***********************************************************
						PROCEDURE DEFINITIONS
	************************************************************ */
	
	/** Note: Making parameters final are optional
	* If you know your variables won't be changing, then you can make them final
	* It makes your programs more secure and prevents unintended behavior
	*/
	public static void sayGreeting(final String name)
	{
		System.out.println("Hello " + name + ".  How are you?");
	}

	public static int intCompare(final int x, final int y)
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

	public static int findMax2(final int x, final int y)
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

	public static int findMax4(final int w, final int x, final int y, final int z)
	{
		/** Finds max between w and x
		* Then finds max of (max of w and x) and y
		* Then finds max of (max of w and x and y) and z
		*/
		return findMax2( findMax2( findMax2(w, x), y ), z );
	}

	public static ArrayList<Double> quadraticFormula(final double a, final double b, final double c)
	{
		ArrayList<Double> ans = new ArrayList<Double>();
		final double discriminant = b*b - 4*a*c;
		
		if (a == 0)
		{
			System.out.println("Error: a is equal to 0");
		}
		else if (discriminant < 0)
		{
			System.out.println("Error: answers are imaginary");
		}
		else
		{
			ans.add((-b + Math.sqrt(discriminant)) / (2*a));
			ans.add((-b - Math.sqrt(discriminant)) / (2*a));
		}

		return ans;
	}

	public static boolean isPrime(final int p)
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

	public static boolean isCoprime(final int a, final int b)
	{
		// We assume that a>0 and b>0 and that a != b
		for (int curr_num = 2; curr_num <= a; curr_num++)
		{
			if (a % curr_num == 0 && b % curr_num == 0)
			{
				return false;
			}
		}
		return true;
	}

	public static ArrayList<Integer> factors(final int n)
	{
		ArrayList<Integer> ans = new ArrayList<Integer>();
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				ans.add(i);
			}
		}
		return ans;
	}

	public static String removeLetter(final String word, final char target)
	{
		String ans = "";
		for (int i = 0; i < word.length(); i++)
		{
			char current_letter = word.charAt(i); // Returns the character at index i
			
			// If the current letter is not equal to the target letter
			// then we add it to our answer string
			if (current_letter != target )
			{
				ans += current_letter;
			}
		}
		return ans;
	}
	
}
