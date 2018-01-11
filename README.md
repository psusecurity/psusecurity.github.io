
## Preparation

Install VirtualBox following one document [Installation of VirtualBox in Windows/Mac](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/VirtualBox_Installation.pdf) or by Videos [Install VirtualBox on Windows 10](https://www.youtube.com/watch?v=63_kPIQUPp8) / [Install VirtualBox on Mac](https://www.youtube.com/watch?v=lEvM-No4eQo) / [How to install VirtualBox on Ubuntu 14.04 LTS](https://www.youtube.com/watch?v=si0nSaCnNoY).

Download one virtual machine package from [PSU Box](), open it with your virtualbox. The username and password is **s2ist** and **s2ist**.

Execute instruction in Tip Part to disable ASLR(Address Space Layout Randomization).

## Challenge 1 : Generate malicious input to print out "Welcome to overflow!"

Given vulnerable binary - challenge1, generate malicious input to get the specific output - "Welcome to overflow". In order to make life easier, we provide its source code.

Submission : a screenshot with commands to get specific output and md5 of binary you use.

## Challenge 2 : Generate malicious input to print out "Welcome to overflow!"

Given vulnerable binary - challenge2, generate malicious input to get the specific output - "Welcome to overflow". In order to make life easier, we provide its source code.

Submission : a screenshot with commands to get specific output and md5 of binary you use.

## Challenge 3 : Craft malicious input file and invoke gedit

Given vulnerable binary - challenge3, generate malicious input to get gedit window open. In order to make life easier, we provide its source code. And you could read Reference 2 to get some information about **buffer overflow**.

## Challenge 4 : Craft malicious input file and invoke one command in source code

Given vulnerable binary - challenge4, generate malicious input to get gedit window open. In order to make life easier, we provide its source code. And you could read Reference 3 to get some information about **interger overflow**.

## Problem 1: Learn Coredump

Given one coredump, ask some questions related to coredump format. (Check References 4, 5 and 6)

1. What's the magic number for Coredump?
2. How many program header entries does it have?
3. What's the value of address 0xXXXXXXXX in the coredump?

## Problem 2: Coredump with source code and binary (Non-corrupted coredump)
 
Given Coredump with binary and Source code, try to catch the root cause;

## Problem 3: Coredump with source code and binary (Corrupted coredump)

Given Coredump with binary and Source code, try to catch the root cause;

## Problem 4: Coredump with only binary (Corrupted coredump)

Given Coredump with binary and Source code, try to catch the root cause;

## Tips

1.Q : How to turn off ASLR?    
  A : `echo 0 | sudo tee /proc/sys/kernel/randomize_va_space`

## References

[1] [Linux (x86) Exploit Development Series](https://sploitfun.wordpress.com/2015/06/26/linux-x86-exploit-development-tutorial-series/)

[2] [Classic Stack Based Buffer Overflow](https://sploitfun.wordpress.com/2015/05/08/classic-stack-based-buffer-overflow/)

[3] [Integer Overflow](https://sploitfun.wordpress.com/2015/06/23/integer-overflow/)

[4] [ELF Format](http://refspecs.linuxfoundation.org/LSB_4.1.0/LSB-Core-generic/LSB-Core-generic/elf-generic.html)

[5] [ELF Hello World Tutorial](http://www.cirosantilli.com/elf-hello-world/#generate-the-example)

[6] [Coredump in Linux](http://www.gabriel.urdhr.fr/2015/05/29/core-file/)

[7] [Anatomy of a Program in Memory](http://duartes.org/gustavo/blog/post/anatomy-of-a-program-in-memory/)
