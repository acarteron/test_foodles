InhabitantSim
=============

Simulates inhabitant intaractions with its environment in his home.

Uses prolog rules to test colision (for now).

Can load map from text files with coordinates or from grayscale image.

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