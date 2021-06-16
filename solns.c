 int factors(int n , int arr[]) {
  int count=0;
   while (n !=1) {
        for (int i =2; i<=n ; i++){
           if (n%i ==0) {
               arr[count] = i;
                count++;
                n = n/i;
                break;
            }
       }
  }
  return count;
  }
