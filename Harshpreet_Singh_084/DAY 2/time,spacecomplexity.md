 1.Find Maximum Element
int mx = arr[0];
for(int i=1;i<n;i++){
    mx = Math.max(mx,arr[i]);
}
 Time complexity - O(n)   Space complexity - O(n)

 2.Count Even Numbers
    int count = 0;
    for(int i=0;i<n;i++){
    if(arr[i]%2 ==0){
        cnt ++;
    }
     Time complexity - O(n)

 3. Nested Loop
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout >> i>>j;
    }
}
  Time complexity - O(n)

4. Triangle Loop
for(int i=0;i<n;i++){ O(n)
    for(int j=0;j<=i; j++){ O(n+1)
        cout << j;
    }
}

Time complexity - O(n^2)

5.Binary Search - O(log n)

6.Two pointers -> O(n)

7.Reverse Array -> O(n)

8.Logarithmic Loop ->O(log n)

9.Doubling Loop -> O(log n)

17. Fibonaaci // H.W is this time complexity 
int fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib (n-2);
}

// Power of 2 think of another method



