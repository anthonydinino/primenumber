# Prime Number Checker
Calculate if a number is prime and also calculate time taken.

## How to use
Firstly compile the source code file:
```
g++ prime.cpp
```
Then use the following format to run:
```
./a.out <number you want to check>
```

## Examples
```
./a.out 73
73 is a Prime Number (0.00000 seconds)
```
```
./a.out 768614336404564651
768614336404564651 is a Prime Number (3.35600 seconds)
```
```
./a.out 1111111111111111111
1111111111111111111 is a Prime Number (4.00300 seconds)
```
```
./a.out 10
10 is not a Prime Number (0.00000 seconds)
```
```
./a.out 0
Please enter a number above 0
```

## Future fixes
Increase (or remove) range limit on numbers
```
./a.out 900900900900990990990991
Range error: Number is larger than 18446744073709551615
```

