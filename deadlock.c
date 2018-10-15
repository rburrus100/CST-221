/* program used to simulate a deadlock avoidance strategy by running timers to prevent processes from accessing unavalable resources and deadlocking the system*/
/*Programmed by Ryan Burrus*/

#include <stdio.h>
#include <pthread.h>

#define processes 5
#define resources 3

pthread_mutex_t first_mutex;
pthread_mutex_t second_mutex;

pthread_mutex_init(&first_mutex, NULL);
pthread_mutex_init(&second_mutex, NULL);
/*threads for each individual process*/
void *process_one(void *param)
{
	pthread_mutex_lock(&first_mutex);
	pthread_mutex_lock(&second_mutex);

	pthread_mutex_unlock(&second_mutex);
	pthread_mutex_unlock(&first_mutex);

	pthread_exit(0);
}
void *process_two(void *param)
{
        pthread_mutex_lock(&first_mutex);
        pthread_mutex_lock(&second_mutex);

        pthread_mutex_unlock(&second_mutex);
        pthread_mutex_unlock(&first_mutex);

        pthread_exit(0);
}
void *process_three(void *param)
{
        pthread_mutex_lock(&first_mutex);
        pthread_mutex_lock(&second_mutex);

        pthread_mutex_unlock(&second_mutex);
        pthread_mutex_unlock(&first_mutex);

        pthread_exit(0);
}
void *process_four(void *param)
{
        pthread_mutex_lock(&first_mutex);
        pthread_mutex_lock(&second_mutex);

        pthread_mutex_unlock(&second_mutex);
        pthread_mutex_unlock(&first_mutex);

        pthread_exit(0);
}
void *process_five(void *param)
{
        pthread_mutex_lock(&first_mutex);
        pthread_mutex_lock(&second_mutex);

        pthread_mutex_unlock(&second_mutex);
        pthread_mutex_unlock(&first_mutex);

        pthread_exit(0);
}
/*code to run the timer to prevent processes from deadlocking the system*/
int timer_done = 0;

void* TimerThread(...)
{
	sleep(some_time)
	timer_done = 1
}

int main ()
{
	pthread_create(TimerThread)
	while (1)
	{
		if (timer_done)
			break;
	}
}
/*code to generate Log file*/
void Log (char *message)
{
	FILE *file;

	if (!LogCreated) {
		file = fopen(LOGFILE, "w");
		LogCreated = true;
	}
	else
		file = fopen(LOGFILE, "a");

	if (file == NULL) {
		if (LogCreated)
			LogCreated = false;
		return;
	}
	else
	{
		fputs(message, file);
		fclose(file);
	}

	if (file)
		fclose(file);
}

void LogErr (char *message)
{
	Log(message);
	Log("\n");
	SysShutdown();
}
