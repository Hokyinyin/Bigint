# `Bigint`
By Hok Yin Wong

## Overview
`bigint` is a c++ class that user can define the Arbitary-Precision Integer (API) and perform operations. It provides a way to conduct scietifc programming with high precision.

## Key Features of `bigint`
1. It supports the inputs with the types `int64_t` and `string`. 

2. It supports arithmetic operations: `+`, `-`, `*`, `+=`, and `-=`.

3. It supports comparison operations: `==`, `!=`, `>=`, `>`, `<=`, `<`.
   
4. It supports unary operations: Negation, Increment, and Decrement.  

6. It stores API in `base 10000` system, it is much faster than decimal system.

## How to Use `bigint`
  ## 1. Creat a `bigint` Object in Three Ways

 1. User can intialize `bigint` object by the default contructor. The default value is zero.
    
    ```cpp
    bigint var; 
    cout << "The value of var is: "<< x << "\n";
    ```
    Ouput:
    ```cpp
    The value of var is 0;
    ```
    
 3. User can intialize `bigint` object by `int64_t` input.
    
    ```cpp
    int64_t a = 10000;
    bigint x(a); 

    cout << "The value of x is: "<< x << "\n";
    ```

    Ouput:
    ```cpp
    The value of x is 10000
    ```
  
 5. User can intialize `bigint` object by `string` input.
    
    ```cpp
    string b = "1000000000000000000000000000000000000000000";
    bigint y(b); 

    cout << "The value of b is: "<< b << "\n";
    ```
    Ouput:
    ```cpp
    The value of b is 1000000000000000000000000000000000000000000
    
  ## 2.Arithmetic Operations
  
  
1. Addition (`+` and `+=`)

   If two `bigint` objects have the same sign, the result's magnitude must be the sum of two object's magnitude. Pass the value of `is_negative` to the result.

   If two `bigint` objects have different `is_negative`, the result's magnitude must be the difference of two object's magnitude. The member function `is_larger(const &x, const &y)`, which return `true` when `x` has larger magnitude than `y` or them are equalivent, is used to confirm the sign of the result. If `x` is larger than `y`, the result's `is_negative` equals to `x` 's `is_negative`

   `+` operator returns a new `bigint` object that is the result of `a + b` so that the original value of a and b remain the same. `+=` operator return the value of a after the addition of a and b

    ```cpp
    bigint a(1000);
    bigint b("30000");
  
    cout << "The value of a + b is: "<< a+b << "\n";
    cout << "The values of a and b are: " << a << " and " << b << "\n";
    a+=b
    cout << "The value of a += b is: "<< a << "\n";
    cout << "The results of a and b are: " << a << " and " << b << "\n";
    ```
    Output:
  
    ```cpp
    The value of a + b is: 31000
    The values of a and b are: 1000 and 30000
    The value of a += b is: 31000
    The values of a and b are: 31000 and 30000 
    ```


3. Subtraction (`-` and `-=`)
   If two `bigint` objects have the same sign, the result's magnitude must be the difference of two object's magnitude. The sign of result depends on the sign of the object with larger magnitude. The `is_negative` of the object with larger magnitude passed to the `is_negative` of the result.
   
     ```cpp
      bigint a(1000);
      bigint b("30000");
    
      cout << "The value of a - b is: "<< a-b << "\n";
      cout << "The values of a and b are: " << a << " and " << b << "\n";
      a-=b;
      cout << "The value of a -= b is: "<< a << "\n";
      cout << "The results of a and b are: " << a << " and " << b << "\n";
      ```
      Output:
      ```cpp
      The value of a - b is: -27000
      The values of a and b are: 1000 and 30000
      The value of a -= b is: -27000
      The values of a and b are: -27000 and 30000
      ```
      `-` operator returns a new `bigint` object that is the result of `a - b` so that the original value of a and b remain the same.
   
      `-=` operator return the value of a after the subtraction of a and b
   
5. Multiplication (`*` and `*=`)
      ```cpp
      bigint a(1000);
      bigint b("30000");
    
      cout << "The value of a * b is: "<< a*b << "\n";
      cout << "The values of a and b are: " << a << " and " << b << "\n";
      a*=b;
      cout << "The value of a *= b is: "<< a << "\n";
      cout << "The results of a and b are: " << a << " and " << b << "\n";
      ```
      Output:
      ```cpp
      The value of a * b is: 30000000
      The values of a and b are: 1000 and 30000
      The value of a *= b is: 30000000
      The values of a and b are: 30000000 and 30000
      ```
      `*` operator returns a new `bigint` object that is the result of `a * b` so that the original value of a and b remain the same.
   
      `*=` operator return the value of a after the subtraction of a and b
## 3. Comparison Operations
  User can compare the value of `bigint` objects using comparision operators `==`, `!=`, `>=`, `>`, `<=`, and `<`. They returns the boolean value. 
  1. Equality `==` and Inequality `!=`
      ```cpp
      bigint a(30000);
      bigint b("30000");
      bigint c;

      cout << boolalpha << (a==b) << "\n";
      cout << boolalpha << (a==c) << "\n";
      cout << boolalpha << (a!=b) << "\n";
      cout << boolalpha << (a!=c) << "\n";

      ```
      
      Output:
      ```cpp
      true
      false
      false
      true
      ```
      
  2. Greater than `>`, Greater or Equal to `>=` , Less than `<`, and Less than or Equal to `<=`
    
      ```cpp
      bigint a(1000);
      bigint b("999");
      bigint c;

      cout << boolalpha << (a>b) << "\n";
      cout << boolalpha << (a>=b) << "\n";
      cout << boolalpha << (a<b) << "\n";
      cout << boolalpha << (a<=b) << "\n";
      cout << boolalpha << (a<=a) << "\n";
      cout << boolalpha << (a>=a) << "\n";

      

      ```
      
      Output:
      ```cpp
      true
      true
      false
      false
      true
      true
      ```
## 4. Unary Operations
  1. Negation `-`
    
      Negation is use to flip the sign of the bigint object. 
      
      ```cpp 
      bigint x(100);

      cout << "The value of x is: " << x << "\n";
      cout << "The value of -x is: " << -x << "\n";
      ```
      Output
      ```cpp
      The value of x is: 100
      The value of -x is: -100
      ```
  2. Pre-Increment and Post-Increment `++`
      ```cpp 
      bigint x(100);

      cout << "The value of ++x is: " << ++x << "\n";
      cout << "The value of x++ is: " << ++x << "\n";
      cout << "The value of x is: " << x << "\n";
      ```
      Output
      
      ```cpp
      The value of ++x is: 101
      The value of x++ is: 101
      The value of x++ is: 102
      ```
## 5. Member Functions
   `is_larger(const bigint &var1, const bigint &var2)` compare the magnitude of var1 and var2. It returns true if var1 is greater than of equal to var2.
   
   `addition` return the `bigint` object with the sum of the two varible's magnitude
   
   `subtraction` return the `bigint` object with the difference of the two varible's magnitude
   
   `multiplication` return the `bigint` object with the product of the two varible's magnitude
   
   `str_to_int` take the string input and return the uint32_t.
    
    
      
      
      
  

    






