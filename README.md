
## Preparation

Install VirtualBox following one document [Installation of VirtualBox in Windows/Mac](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/VirtualBox_Installation.pdf) or by Videos [Install VirtualBox on Windows 10](https://www.youtube.com/watch?v=63_kPIQUPp8) / [Install VirtualBox on Mac](https://www.youtube.com/watch?v=lEvM-No4eQo) / [How to install VirtualBox on Ubuntu 14.04 LTS](https://www.youtube.com/watch?v=si0nSaCnNoY).

## P1: get specific output

Given vulnerable binary files, generate malicious input to get the specific output - "Welcome to overflow".

## P2: open one terminal 

Given vulnerable binary files, generate malicious input to get one terminal open. (Check References 1, 2, and 3)

## P3: Learn Coredump

Given one coredump, ask some questions related to coredump format. (Check References 4, 5 and 6)

1. What's the magic number for Coredump?
2. How many program header entries does it have?
3. What's the value of address 0xXXXXXXXX in the coredump?

## P4: Coredump with source code and binary

Given Coredump with binary and Source code, try to catch the root cause;

## P5: Coredump with only binary

Given Coredump with binary and Source code, try to catch the root cause;

## References

[1] [Linux (x86) Exploit Development Series](https://sploitfun.wordpress.com/2015/06/26/linux-x86-exploit-development-tutorial-series/)

[2] [Classic Stack Based Buffer Overflow](https://sploitfun.wordpress.com/2015/05/08/classic-stack-based-buffer-overflow/)

[3] [Integer Overflow](https://sploitfun.wordpress.com/2015/06/23/integer-overflow/)

[4] [ELF Format](http://refspecs.linuxfoundation.org/LSB_4.1.0/LSB-Core-generic/LSB-Core-generic/elf-generic.html)

[5] [ELF Hello World Tutorial](http://www.cirosantilli.com/elf-hello-world/#generate-the-example)

[6] [Coredump in Linux](http://www.gabriel.urdhr.fr/2015/05/29/core-file/)

[7] [Anatomy of a Program in Memory](http://duartes.org/gustavo/blog/post/anatomy-of-a-program-in-memory/)
