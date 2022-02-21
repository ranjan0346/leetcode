# set bits
set bits are the bits with value 1



int countSetBits(int n)
{
    int f=0, int count=0;
    while(n>0)
    {
        if(f&i!=0) //and operator 
        count++;
        int<<1;
    }
    return count;
}

another method of counting set bits is 
1.operatin and operation on n and n-1 and then assigning it to n;
this will count the numbers of set bits and run only for the no. of times of set bits present in it


int countSetBits(int n)
{
    int f=0, int count=0;
    while(n>0)
    {
         count++;
        n=n & n-1;
    }
    return count;
}

# left shift
left shifting means shifting each bits to left side
n<<2 means bits of n is shifted towards left by 2 unit
its basic meaning is n*2^i

void leftshiftalgo( int &n, int i)
{
    n=n<<i;
}

