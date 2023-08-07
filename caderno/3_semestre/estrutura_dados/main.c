#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int* heap;
  int size;
  int capacity;
} PriorityQueue;

PriorityQueue* createPriorityQueue(int capacity) {
  PriorityQueue* pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
  pq->heap = (int*)malloc(capacity * sizeof(int));
  pq->size = 0;
  pq->capacity = capacity;
  return pq;
}

void pqinsert(PriorityQueue* pq, int item) {
  if (pq->size == pq->capacity) {
    printf("Priority queue is full.\n");
    return;
  }
  pq->heap[pq->size] = item;
  int i = pq->size;
  while (i > 0 && pq->heap[i] < pq->heap[(i - 1) / 2]) {
    int temp = pq->heap[i];
    pq->heap[i] = pq->heap[(i - 1) / 2];
    pq->heap[(i - 1) / 2] = temp;
    i = (i - 1) / 2;
  }
  pq->size++;
}

int pqmindelete(PriorityQueue* pq) {
  if (pq->size == 0) {
    printf("Priority queue is empty.\n");
    return -1;
  }
  int min_item = pq->heap[0];
  int last_item = pq->heap[pq->size - 1];
  pq->size--;
  int i = 0;
  while (2 * i + 1 < pq->size) {
    int left_child = 2 * i + 1;
    int right_child = 2 * i + 2;
    int min_child = left_child;
    if (right_child < pq->size && pq->heap[right_child] < pq->heap[left_child]) {
      min_child = right_child;
    }
    if (pq->heap[min_child] < last_item) {
      pq->heap[i] = pq->heap[min_child];
      i = min_child;
    }
    else {
      break;
    }
  }
  pq->heap[i] = last_item;
  return min_item;
}

int empty(PriorityQueue* pq) {
  return pq->size == 0;
}

int main() {
  PriorityQueue* pq = createPriorityQueue(10);
  pqinsert(pq, 5);
  pqinsert(pq, 3);
  pqinsert(pq, 7);
  pqinsert(pq, 1);
  pqinsert(pq, 9);
  while (!empty(pq)) {
    printf("%d ", pqmindelete(pq));
  }
  printf("\n");
  return 0;
}