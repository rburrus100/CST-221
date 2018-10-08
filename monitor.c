/**Implementation of monitor in order to prevent overdrafts*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


monitor class Account {
	pricate int balance := 0
	invariant balance >= 0
	private NonblockingCondition balanceMayBeBigEnough
}
public method withdraw(int amount)
	precondition amount >= 0
	{
		while balance < amount do wait balance balanceMayBeBigEnough
		assert balance >= amount
		balance := balance - amount
	}
/** Critical section of program to prevent overdraft*/
int main {
	if (amount > balance)
		printf ("Card Declined, Insufficient funds");
	else
		printf ("Transaction approved");
	}
}
