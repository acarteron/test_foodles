Foodles test
=============

1) Write a function that takes as input (sentence: String, n: Number) 
and returns a list of size `n` where each element contains a word and and the frequency of that word in `sentence`
This list should be sorted by decreasing frequency and alphabetical order in case of tie.

Example: 
Input: ("baz bar foo foo zblah zblah zblah baz toto bar", 3)
Output: 
[
   ("zblah", 3),
   ("bar", 2),
   ("baz", 2),
]

2) Write tests for the function you just wrote

You are free to chose the programming language that you are the most comfortable with.

Requirements
============

* compiler supporting C++17
* cpputest framework

setup
=====

to make:
 ```$ make```

to make doc:
 ```$ make doc```

to clean:
 ```$ make clean```

to full clean:
 ```$ make raz```

Run
============
```./bin/test "sentence" size```


Test
============
```cd tests```
```make```

TODO
====

* Add sensors and their detection range
* Prolog rules to test every constraints
* Find why image loading kills CPU