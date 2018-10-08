/**implementaion of a sempahore based locking system to prevent overdrafts from a debit account
code written by Ryan Burrus*/
#include <stdio.h>
#include <pthread.h>
#define Acc_Balance 1
#define Amount 0

static int balance = Acc_Balance;
static Semaphore overdraftLock;
/** main function used to determine the lock status of the semaphore*/
void main(int argc, char **argv)
{
	int i;
	char name[32];
	bool verbose = argc == 2 && (strcmp(argv[1], "-v") == 0));

	InitThreadPackage(verbose);

	overdraftLock = SemaphoreNew("Overdraft Lock", 1);
	for (i = 0; i < Amount; i++) {
		ThreadNew(name, Balance, 0);
	}
	RunAllThreads();
	SemaphoreFree(overdraftLock);
}
/**critical section to determine whether a transaction would be an overdraft*/
static void BalanceCheck(void)
{
	bool done = false;
	
	while (!done) {
	SemaphoreWait(overdraftLock);
	if (balance > Amount) {		
		done = true;
		printf ("Trasaction approved");
	} else {
		turn = 0
		printf ("CArd Declined, Insufficient funds");
	}
	SemaphoreSignal(overdraftLock);
}

