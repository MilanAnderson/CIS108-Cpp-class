#include <iostream>
using namespace std;

int main()
{
	//Integer to hold all the sums
	int primeSum = 0;



	//Integer to hold all the products
	int primeProduct = 1;

	int arrayPrimes[] = {
							2, 3, 5, 7, 11, 13,
							17, 19, 23, 29, 31,
							37, 41, 43, 47, 53,
							59, 61, 67, 71, 73,
							79, 83, 89, 97, 101,
							103, 107, 109, 113, 127,
							131, 137, 139, 149, 151,
							157, 163, 167, 173, 179,
							181, 191, 193, 197, 199,
							211, 223, 227, 229, 233,
							239, 241, 251, 257, 263,
							269, 271, 277, 281, 283,
							293, 307, 311, 313, 317,
							331, 337, 347, 349, 353,
							359, 367, 373, 379, 383,
							389, 397, 401, 409, 419,
							421, 431, 433, 439, 443,
							449, 457, 461, 463, 467,
							479, 487, 491, 499, 503,
							509, 521, 523, 541, 547,
							557, 563, 569, 571, 577,
							587, 593, 599, 601, 607,
							613, 617, 619, 631, 641,
							643, 647, 653, 659, 661,
							673, 677, 683, 691, 701,
							709, 719, 727, 733, 739,
							743, 751, 757, 761, 769,
							773, 787, 797, 809, 811,
							821, 823, 827, 829, 839,
							853, 857, 859, 863, 877,
							881, 883, 887, 907, 911,
							919, 929, 937, 941, 947,
							953, 967, 971, 977, 983,
							991, 997
							};

	//for loops are what we use how many times something needs to run
	//while loops are what we use while a condition is true but we don't know how many times it should run
	//a do-while loops are what we use when something is true but we don't know how long it is true but we want it to run at least once
	
	for (int arrayIndex = 0; arrayIndex < 168; arrayIndex++)
	{
		primeSum = primeSum + arrayPrimes[arrayIndex];
		primeProduct = primeProduct * arrayPrimes[arrayIndex];
	}

	//sum of the prime numbers 
		cout << "The sum of the prime numbers between 1 and 1000 is " << primeSum << "\n";

	//product of the prime numbers
		cout << "The product of the prime numbers between 1 and 1000 is " << primeProduct << "\n";


	return 0;
}
