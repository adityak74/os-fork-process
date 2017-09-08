# OS-FORK-PROCESS
-----------------

Project Structure:

```
os-fork-process/
	|README
	|README.md
	|src/
		|os_fork.c
	|Makefile
```

Compiling:

```
$ make
```

Running the project

```
$ ./forkos -n3 -k4 -m10
```

Help:

```
$ ./forkos -h
Usage : ./forkos -n <int> -k <int> -m <int>
n = number of process to fork
k = number of times to loop on fprintf
m = time to sleep in millis
```

Clean the project:

```
$ make clean
```

***Process Chains*** : Project #1 as a part of CS4760. 