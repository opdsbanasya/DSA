#include <bits/stdc++.h>

using namespace std;

bool isEven(int n) {
    return n % 2 == 0 ? true : false;
}

bool isPrime(int n) {
    bool flag = true;
    n = abs(n);
    if (n == 0 || n == 1) {
        flag = false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

bool isLeapYear(int n){
    return (n%400 == 0 || (n%4==0 && n%100!=0)) ? true : false;
}

bool isArmstrongNumber(int n){
    int tempNum = n;
    int sum = 0;
    int dig = 0;

    while(tempNum>0){
        cout<<"sum = "<<sum<<" temp = "<<tempNum<<endl;
        dig = tempNum%10;
        sum = sum + pow(dig,3);
        cout<<dig<<" "<<pow(dig,3)<<endl;

        tempNum /=10;
    }
    cout<<"sum = "<<sum<<endl;
    
    return n == sum ? true : false;
}

vector<int> fibonacci(int n){
    vector<int> ans;
    if(n == 0) ans.push_back(-1);
    if(n >= 1) ans.push_back(0);
    if(n >=2) ans.push_back(1);

    int i = 2;
    for(;i<n;i++){
        ans.push_back(ans[i-1] + ans[i-2]);
    }
    return ans;
}

bool isPalindrome(int n){
    int tempNum = n;
    int reverseNum = 0;

    while(tempNum>0){
        reverseNum = reverseNum*10 + (tempNum%10);
        tempNum /= 10;
    }

    return n == reverseNum;
}

void printPyramid(int n){
    for(int row=0; row<n; row++){
        // space
        for(int col = 0; col<n-row-1; col++){
            cout<<" ";
        }

        // start
        for(int col = 0; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int factorial(int n){
    int fact = 1;
    if(n==0 || n==1){
        return fact;
    }
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int sumOfDigits(int n){
    int sum = 0;

    while(n>0){
        sum += n%10;
        n /= 10;
    }

    return sum;
}

int greatestCommonDivisor(int n, int m){
    if(n == 0) return m;
    if(m == 0) return n;
    int smallNumber = n>m ? m : n;
    int gcd = 1;

    for(int i = 2; i<=smallNumber/2; i++){
        if(n%i == 0 && m%i == 0) gcd = i;
    }

    return gcd;
}

int lcm(int n, int m){
    int gcd = greatestCommonDivisor(n,m);

    return (n*m)/gcd;
}

int maxNumber(vector<int> arr){
    int max = INT32_MIN;
    for(int i=0; i<arr.size(); i++){
        if(max<arr[i]) max = arr[i];
    }
    return max;
}

int minNumber(vector<int> arr, int size){
    int min = INT32_MAX;
    for(int i=0; i<arr.size(); i++){
        if(min > arr[i]) min = arr[i];
    }
    return min;
}

int sumOfElements(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

vector<int> armstrongNumber(int s, int e){
    vector<int> ans;
    while(s<=e){
        if(isArmstrongNumber(s)){
            ans.push_back(s);
        }
        s++;
    }
    return ans;
}

void numberTable(int n){
    for(int i=1; i<=10; i++){
        cout<<n<<" * "<<i<<"  => "<<n*i<<endl;
    } 
}

vector<int> primeNumbers(int s, int e){
    vector<int> ans;
    while(s<=e){
        if(isPrime(s)){
            ans.push_back(s);
        }
        s++;
    }
    return ans;
}

bool isPerfect(int n){
    int sum = 0;
    for(int i = 1; i<=n/2; i++){
        if(n%i == 0){
            sum = sum + i;
        }
    }

    return n == sum;
}

int sumOfEven(int s, int e){
    int sum = 0;
    for(int i=s; i<=e; i++){
        if(i%2 == 0) sum += i;
    }
    return sum;
}

int sumOfOdd(int s, int e){
    int sum = 0;
    for(int i=s; i<=e; i++){
        if(i%2 != 0) sum += i;
    }
    return sum;
}

int fibAtPos(int n){
    vector<int> allFib = fibonacci(n);
    return allFib[n-1];
}

vector<int> primeNumbersLTGivennumber(int n){
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(isPrime(i)) ans.push_back(i);
    }
    return ans;
}

int findDigits(int n){
    int count = 0;
    while(n>0){
        count++;
        n /= 10;
    }

    return count;
}

bool isNarcissistic(int n){
    // int digits = findDigits(n);
    // cout<<digits<<endl;
    int sum = 0;
    int tempNum = n;

    while(n>0){
        int as=n%10;
        sum += pow(as, 3);
        cout<<sum<<endl;
        n/= 10;
    }

    return tempNum == sum;
}

void numberTriangle(int rows){
    int num = 1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
}

int findSumOfFactorial(int n){
    // int fact = factorial(n);
    // int sum = sumOfDigits(fact);
    return sumOfDigits(factorial(n));
}

int findMissing(vector<int> arr){
    // broot force
    int s = 0;
    int e  = maxNumber(arr);

    for(int i = 1; i<=e; i++){
        if(i == arr[s]) s++;
        else return i;
    }

    return 0;
}

void pascalTriangle(int n){
    int pre = 0;
    int curr = 0;
    int ans[n][n];

    for(int i = 0; i<n; i++){
        // vector<int> temp;
        for(int j = 0; j<=i; j++){
            if(i-1<0 || j-1<0){
                pre = 0;
                curr = 1;
            } else if(j==i){
                curr = 0;
                pre = 1;
            } else {
                pre = ans[i-1][j-1];
                curr = ans[i-1][j];
            }
            ans[i][j] = pre + curr;
            cout<<pre+curr<<" ";
        }
        cout<<endl;
    }
    
}

void findMedian(int arr[], int size){
    sort(arr, arr+size);
    if(size%2!=0){
        cout<< arr[(size+1)/2-1];
    } else {
        cout<< (arr[(size/2)-1] + arr[(size/2)])/2.0;
    };
}

int getPower(int num, int exp){
    if(exp == 0) return 1;
    int ans = 1;
    while(exp>0){
        ans = ans * num;
        exp--;
    }
    return ans;
}

int getSumOfPrimes(int start, int end){
    int sum = 0;

    for(int i = start; i<=end; i++){
        if(isPrime(i)) sum += i;
    }

    return sum;
}

int nthTriangleNum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

bool isPerfectSquare(int n){
    int start = 1;
    int end = n;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(mid*mid == n) return true;
        if(mid*mid > n) end = mid-1;
        else start = mid +1;

        mid = start + (end-start)/2;
    }


    return false;
}

int sumOfSquaresOfDigits(int n){
    int sum = 0;

    while(n>0){
        sum += pow(n%10, 2);
        n /= 10;
    }

    return sum;
}

void printSquareMatrix(int n){
    int p = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<p++<<" ";
        }
        cout<<endl;
    }
}

int sumTillSingleDigit(int n){
    int sum = 0;

    while(n>0 || sum>0){
        if(sum<10 && sum>0 && n==0) break;
        if(n==0) n = sum, sum = 0;
        else {
            sum += n%10;
            n /= 10;
        }
    }

    return sum;
}

int firstOccurence(vector<int> arr, int n){
    int start = 0;
    int end =  arr.size()-1;
    int mid = start +(end - start)/2;
    int ans = -1;

    while(end>=start){
        if(arr[mid] == n){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > n) end = mid - 1;
        else start = mid + 1;

        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurence(vector<int> arr, int n){
    int start = 0;
    int end =  arr.size()-1;
    int mid = start +(end - start)/2;
    int ans = -1;

    while(end>=start){
        if(arr[mid] == n){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > n) end = mid - 1;
        else start = mid + 1;

        mid = start + (end - start)/2;
    }
    return ans;
}

int totalOccurence(vector<int> arr, int n){
    //? Method 1
    // int count = 0;
    // for(int i = 0; i<arr.size(); i++){
    //     if(n == arr[i]) count++;
    // }
    // return count;

    //? Method 2: Binary Search
    return lastOccurence(arr, n) - firstOccurence(arr, n) + 1;
}

vector<int> findAllDivisors(int n){
    vector<int> ans;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            ans.push_back(i);
        }
    }

    return ans;
}

auto findAverage(int arr[6], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    float noOfEle = (float) size;
    return sum / noOfEle;
}

int findMode(vector<int> nums){
    int i = 0;
    int firstOcc, lastOcc, totalOcc;
    int ans = -1;

    vector<int> occArray;

    while(i<nums.size()){
        firstOcc = firstOccurence(nums, nums[i]);
        lastOcc = lastOccurence(nums, nums[i]);
        totalOcc = lastOcc - firstOcc + 1;
        occArray.push_back(totalOcc);

        if(totalOcc == maxNumber(occArray)){
            ans = i;
        }

        i = i + totalOcc;
    }

    return nums[ans];
}

void printNumberPyramid(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

int sumOfPrimeFactors(int num){
    int sum = 0;
    for(int i=2; i<=num; i++){
        if(num%i == 0){
            if(isPrime(i)){
                sum += i;
            }
        }
    }

    return sum;
}

int findSecondLargest(vector<int>nums){
    int max = maxNumber(nums);
    int smax = INT16_MIN;

    for(int i = 0; i<nums.size(); i++){
        if(smax<nums[i] && nums[i] < max){
            smax = nums[i];
        }
    }

    return smax;
}

int main(){
    // int n;
    // cout << "Enter the number" << endl;
    // cin >> n;

    // todo: 1 odd/even
    // if(isEven(n)) cout<<n<<" is a even number"<<endl;
    // else cout<<n<<" is a odd number"<<endl;

    // todo: 2. Prime number
    // if (isPrime(n)) cout << n << " is a Prime number" << endl;
    // else cout << n << " is not a prime number" << endl;
    
    // todo: 3. Leap year
    // if(isLeapYear(2200)) cout<<2200<<" is a leap year"<<endl;
    // else cout<<2200<<" is not a leap year"<<endl;

    // todo: 4. armstrong number
    // if(isArmstrongNumber(153)) cout<<153<<" is a armstrong number"<<endl;
    // else cout<<153<<" is not a armstrong number"<<endl;

    // todo: 5. fibonacci series
    // vector<int> fib = fibonacci(n);
    // for(int i=0; i<fib.size(); i++){
    //     cout<<fib[i]<<" ";
    // }

    // todo: 6. Palindrome number
    // if(isPalindrome(n)) cout<<n<<" is a palindrome number"<<endl;
    // else cout<<n<<" is not a palindrome number"<<endl;

    // todo: 7. Pyramid pattern
    // printPyramid(n);

    // todo: 8. Factorial
    // cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl;

    // todo: 9. Sum of digits
    // cout<<"Sum of digits of "<<n<<" is "<<sumOfDigits(n)<<endl;

    // todo: 10. Greatest Common Divisor (GCD)
    // cout<<"Greatest Common Divisor (GCD) is "<<greatestCommonDivisor(48, 0);
    
    // todo: 11. LCM
    // cout<<"LCM is "<<lcm(48,0)<<endl;
    
    // todo: 14. Largest and Smallest Number
    // vector<int> arr{2,5,6,8,4,1,-9,23,1};
    // int max = maxNumber(arr);
    // int min = minNumber(arr);
    // cout<<"The max number is "<<max<<" and min number is"<<min<<endl;
    
    // todo: 16. Sum of elements of an array
    // int arr[] = {5,6,3,8,4,-2,8,-4};
    // cout<<"The Sum of elements of an array is "<<sumOfElements(arr, 8)<<endl;

    // todo: 17. Checking Armstrong number in a range
    // vector<int> ans = armstrongNumber(1,500);
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }

    // todo: 18. Calculating number table
    // numberTable(4);

    // todo: 19. Prime numbers in a range
    // vector<int> ans = primeNumbers(1, 50);
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }

    // todo: 20. Check Prime Number
    // int n = 28;
    // if(isPerfect(n)){
    //     cout<<n<<" is a Perfect Number"<<endl;
    // } else {
    //     cout<<n<<" is not a Perfect number"<<endl;
    // }

    // todo: 21. Sum of even number
    // cout<<"sum of even numbers "<<sumOfEven(1,10)<<endl;

    // todo: 22. sum of odd number
    // cout<<"sum of odd numbers "<<sumOfOdd(1,10)<<endl;

    // todo: 23. fibbonaci at a specific number
    // int n = 6;
    // int fib = fibAtPos(n);
    // cout<<"fibonacci number at the position "<<n<<" is "<<fib<<endl;

    // todo: 24. Prime Numbers less than given number
    // vector<int> ans = primeNumbersLTGivennumber(20);
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }

    // todo: 25. finding number of digits
    // int digits = findDigits(2535);
    // cout<<"number of digits "<<digits<<endl;

    // todo: 26. check the number is Narcissistic number
    // cout<<isNarcissistic(153)<<endl;

    // todo: 27. Triangle Pattern of 1,2,3,4.... 
    // numberTriangle(5);

    // todo: 28. find sum of digits of factorial of a number
    // cout<<"Sum of digits of factorial of number : "<<findSumOfFactorial(6);
    
    // todo: 29. find missing number in a seqeunce
    // vector<int> arr{1,2,3,4,6};
    // cout<<"Missing num is : " <<findMissing(arr);
    
    // todo: 31. Pascal Triangle
    // int n = 8;
    // pascalTriangle(n);
    
    // todo: 32. Median of array
    // int arr[] = {3,4,7,2,5,1,6};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // findMedian(arr, size);

    // todo: 33. Power of a number
    // int power = getPower(9,8);
    // cout<<power;

    // todo: 35. Sum of Prime Numbers in a Range
    // int sumOfPrimes = getSumOfPrimes(56,100);
    // cout<<sumOfPrimes<<endl;

    // todo: 36. N-th Triangular Number
    // int triNum = nthTriangleNum(4);
    // cout<<triNum<<endl;

    // todo: 37. Checking for Perfect Squares
    // cout<<isPerfectSquare(0);

    // todo: 38. sum of squares of digits
    // cout<<sumOfSquaresOfDigits(453);

    // todo: 39. Square matrix
    // printSquareMatrix(3);
    
    // todo: 40. Sum till Single Digit
    // int singleDigitSum = sumTillSingleDigit(159);
    // cout<<singleDigitSum<<endl;
    
    // todo: 41. Total occurence
    // vector<int> arr{1,2,3,4,4,4,4,5,6};
    // int n = 4;
    // int occurence = totalOccurence(arr, n);
    // cout<<occurence<<endl;
    
    // todo: 43. Finding all divisors of a number
    // vector<int> ans = findAllDivisors(12);
    // for(int i=0; i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    // todo: 44. Find Average of an array
    // int arr[6] = {5,6,9,4,2,3};
    // cout<<findAverage(arr, 6);
    
    // todo: 45. Mode of an array
    // vector<int> nums{1,3,3,5,6,8,8,8,8,8,9,9,9,9,9,9,9};
    // int mode = findMode(nums);
    // cout<<mode<<endl;

    // todo: 47. Generating a Number Pyramid
    // printNumberPyramid(20);

    // todo: 48. Finding the Sum of Prime Factors of a Number
    // int sum = sumOfPrimeFactors(100);
    // cout<<sum<<endl;

    // todo: 49. Finding the Second Largest Number in an Array
    // vector<int> nums {-5,10,-48,9,25};
    // int secondLargest = findSecondLargest(nums);
    // cout<<secondLargest<<endl;


    return 0;
}