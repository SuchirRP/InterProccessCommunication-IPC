#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

#define max 10
int stack[max], top = -1;

pthread_mutex_t pop_mutex;
pthread_mutex_t push_mutex;

void* push(void* arg) {
    int n;
    pthread_mutex_lock(&push_mutex);
    pthread_mutex_lock(&pop_mutex);

}
