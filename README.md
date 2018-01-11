## Introduction

## Registration

## Deadline

## Preparation

At first, install VirtualBox following Documents :

- [Installation of VirtualBox in Windows/Mac](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/VirtualBox_Installation.pdf)
- [Installation of VirtualBox in Ubuntu](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/Install_VirtualBox_on_Ubuntu.pdf)

or by Videos :

- [Install VirtualBox on Windows 10](https://www.youtube.com/watch?v=63_kPIQUPp8)
- [Install VirtualBox on Mac](https://www.youtube.com/watch?v=lEvM-No4eQo)
- [How to install VirtualBox on Ubuntu 14.04 LTS](https://www.youtube.com/watch?v=si0nSaCnNoY).

Second, download one virtual machine package from [PSU Box](https://psu.box.com/s/ad8oflskty9byy24urczunbu4z3py5a5), open it with your virtualbox. The username and password is **s2ist** and **s2ist**.

Finally, execute instruction in Tip 1 to disable ASLR(Address Space Layout Randomization).

## Challenges

### Challenge 1 : Generate malicious input to print out "Welcome to overflow!"

Given vulnerable binary - challenge1, generate malicious input to get the specific output - "Welcome to overflow". In order to make life easier, we provide its source code.

Submission : a screenshot with commands to get specific output and md5 of binary you use.

### Challenge 2 : Generate malicious input to print out "Welcome to overflow!"

Given vulnerable binary - challenge2, generate malicious input to get the specific output - "Welcome to overflow". In order to make life easier, we provide its source code.

Submission : a screenshot with commands to get specific output and md5 of binary you use.

### Challenge 3 : Craft malicious input file and invoke gedit

Given vulnerable binary - challenge3, generate malicious input to get gedit window open. In order to make life easier, we provide its source code. And you could read Reference 2 to get some information about **buffer overflow**.

### Challenge 4 : Craft malicious input file and invoke one command in source code

Given vulnerable binary - challenge4, generate malicious input to get gedit window open. In order to make life easier, we provide its source code. And you could read Reference 3 to get some information about **interger overflow**.

### Challenge 5: Learn Coredump

Given one coredump, ask some questions related to coredump format.  You could read References 4, 5 and 6 to get all the following information.

1. Show the magic number for Coredump.
2. Show program header table.
3. Show the value of address 0x8048010(double word size) in the coredump?

### Challenge 6: Coredump with source code and binary (Non-corrupted coredump)
 
Given Coredump with binary and Source code, try to catch the root cause. You could read References 7, 8 to get stacktrace. And you could read Reference 9 to get value of variables.

### Challenge 7: Coredump with source code and binary (Corrupted coredump)

Given Coredump with binary and Source code, try to catch the root cause. You could read References 7, 8 to get stacktrace. And you could read Reference 9 to get value of variables.

### Challenge 8: Coredump with only binary (Corrupted coredump)

Given Coredump with binary and Source code, try to catch the root cause. You could read References 7, 8 to get stacktrace. And you could read Reference 9 to get value of variables.

## Tips

### Tip 1

Q : How to turn off ASLR?    
A : `echo 0 | sudo tee /proc/sys/kernel/randomize_va_space`

## References

[1] [Linux (x86) Exploit Development Series](https://sploitfun.wordpress.com/2015/06/26/linux-x86-exploit-development-tutorial-series/)

[2] [Classic Stack Based Buffer Overflow](https://sploitfun.wordpress.com/2015/05/08/classic-stack-based-buffer-overflow/)

[3] [Integer Overflow](https://sploitfun.wordpress.com/2015/06/23/integer-overflow/)

[4] [ELF Format](http://refspecs.linuxfoundation.org/LSB_4.1.0/LSB-Core-generic/LSB-Core-generic/elf-generic.html)

[5] [ELF Hello World Tutorial](http://www.cirosantilli.com/elf-hello-world/#generate-the-example)

[6] [Coredump in Linux](http://www.gabriel.urdhr.fr/2015/05/29/core-file/)

[7] [GDB Stacktrace](https://sourceware.org/gdb/onlinedocs/gdb/Backtrace.html)

[8] [Get stacktrace from coredump](https://stackoverflow.com/questions/5745215/getting-stacktrace-from-core-dump)

[9] [GDB Variables](https://sourceware.org/gdb/onlinedocs/gdb/Variables.html)

[10] [Anatomy of a Program in Memory](http://duartes.org/gustavo/blog/post/anatomy-of-a-program-in-memory/)

