#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h> // for sleep function

sem_t semaphore;

void* thread_func(void* arg) {
	int thread_id = *((int*)arg);

	printf("Thread %d is waiting...\n", thread_id);
	sem_wait(&semaphore); // Decrement semaphore

	printf("Thread %d enters the critical section\n", thread_id);
	sleep(2); // Simulate some work inside critical section
	printf("Thread %d leaves the critical section\n", thread_id);

	sem_post(&semaphore); // Increment semaphore

	return NULL;
}

int main() {
	pthread_t thread1, thread2;
	int id1 = 1, id2 = 2;

	sem_init(&semaphore, 0, 1); // Initialize counting semaphore with initial value 2

	pthread_create(&thread1, NULL, thread_func, &id1);
	pthread_create(&thread2, NULL, thread_func, &id2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	sem_destroy(&semaphore);

	return 0;
}

