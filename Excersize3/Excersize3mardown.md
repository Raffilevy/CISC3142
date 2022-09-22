
2.1) An **int** is a 16bit integer, a **long** is a 32bit integer, and a **short** is a 16bit integer.
short <= int
A **signed type** represents postive or negative numbers, and **unsigned type** represent values
that are >= 0.
A float has a precision of 6 significant digits, a double has a precision of 10 significant digits.

2.2) For rate i would use a float becuase it typically doesnt use more than really 2 or 3 significant digits.
for prinicpal i would use double to make sure its exactly accurate, and payment i would 
use a float becuase money doesn't have quantums more than 2 significant digits anyway.

2.3)
```unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl; \\ 32
std::cout << u - u2 << std::endl; \\ 4294967264
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl; \\ 32
std::cout << i - i2 << std::endl; \\ -32
std::cout << i - u << std::endl; \\ 0
std::cout << u - i << std::endl; \\ 0
```
32
4294967264
32
-32
0
0

2.10) global_str = empty string object
global_int = 0
local_int = undefined
local_str = empty string object

2.12) a, c, and d

2.13) 100

2.14) yes: 100 45

2.17) 10 10

2.27) (a) invalid - nonconst reference cannot be initialized to a literal
(b - e) good. (f) invalid - const stated twice, and it must be initialized when defined.

2.28) (a) invalid - * makes a pointer and a const pointer must be initialized
(b) same as (a). (c) invalid - ic isn't initilized. 
(d) same as (a). (e) good - initilized pointer to int p


