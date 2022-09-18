

int tribonacci(int n){

    int temp = 0, n1 = 0, n2 = 1,n3=1;

    temp = n;
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
       return 1;
    }
 else if (n == 3)
    {
       return 2;
    }

    else
    {

        for (int i = 2; i < temp; i++)
        {

            {

                n = n1 + n2+n3;
                n1=n2;
                n2=n3;
                n3=n;

            }
      
        }
    }
    return n;
}