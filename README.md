# `Bigint`
By Hok Yin Wong

## Overview
`bigint` is a c++ class that user can define the Arbitary-Precision Integer (API) and perform operations. It provides a way to conduct scietifc programming with high precision.

## Key Features of `bigint`
1. It supports the inputs with the types `int64_t` and `string`. 

2. It supports arithmetic operations: `+`, `-`, `*`, `+=`, and `-=`.

3. It supports comparison operations: `==`, `!=`, `>=`, `>`, `<=`, `<`.

4. It stores API in `base 10000` system, it is much faster than decimal system.

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

    ```cpp
    The value of b is 1000000000000000000000000000000000000000000
    
  ## 2.Arithmetic Operations

  1. Addition (`+` and `+=`)

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
`+` operator returns a new `bigint` object that is the result of `a + b` so that the original value of a and b remain the same.
`+=` operator return the value of a after the addition of a and b

2. Subtraction (`-` and `-=`)
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
  The value of a + b is: -27000
  The values of a and b are: 1000 and 30000
  The value of a += b is: -27000
  The values of a and b are: -27000 and 30000
  ```
`-` operator returns a new `bigint` object that is the result of `a - b` so that the original value of a and b remain the same.
`-=` operator return the value of a after the subtraction of a and b

  
  

    






