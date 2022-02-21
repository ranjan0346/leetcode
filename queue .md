queue is based on FIFO
types of queue 1. normal queue 2.circular queue
main function in normal queue
enqueue and dequeue and isFull and front
enqueue-in enqueue check for the empty queue and move the end by one pnts add the value to the new end position O(1)
dequeue- copy each value to its previous location and move end by one pnts O(n)
bool isfull-check for end==size-1
int front- if empty return-1 else return a[0]

circular cueue 
main function enqueue, dequeue, isfull, isempty, front, end, 
bool isempty- if start==end==-1 return true else false;
bool isfull- end+1%n==start
front - check empty and the return start value
end- check empty return end value
deque-check empty,check start=end, start++
enqueue-check full, check check empty , end++ add value