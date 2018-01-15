## Introduction

Welcome to the 2017 NSA Competition!

This competition is a 2-stage cyber competition on crash forensics against memory corruption attacks. Different from existing Capture the Flag (CTF) competitions - which focus on skills such as reverse-engineering, network sniffing, and cryptanalysis etc. - the proposed security competition focuses on the skill set needed for software vulnerability identification. In other words, the techniques required for contest participants include memory forensics, and dynamic and static analysis of vulnerable programs.

The main goal of the competition is to serve as an educational exercise to give participants experience in finding security loopholes that may be found in commonly available software. In addition, the contest aims to attract a diverse population of students to the field of cyber-security. The contest will produce a collection of core dumps attributable to real-world memory corruption attacks. We will make these dumps publicly available as a resource to cyber security educators and researchers.

## Registration

To get started, register by sending an email to <s2istnsa@gmail.com>. You could use one .edu email account or student id as credential. Then, visit [the Preparation section](#preparation) to receive instructions on how to prepare your virtual machine for the challenge.

For information on core dump and for some tips on how to get started, check out the [References](#references) section.

Good luck!

### Deadline of registration

XX-XX-XXXX

## Preparation

First, you need to install VirtualBox :

- [Installation of VirtualBox in Windows/Mac](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/VirtualBox_Installation.pdf)
- [Installation of VirtualBox in Ubuntu](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/Install_VirtualBox_on_Ubuntu.pdf)

Help videos :

- [Install VirtualBox on Windows 10](https://www.youtube.com/watch?v=63_kPIQUPp8)
- [Install VirtualBox on Mac](https://www.youtube.com/watch?v=lEvM-No4eQo)
- [How to install VirtualBox on Ubuntu 14.04 LTS](https://www.youtube.com/watch?v=si0nSaCnNoY).

Second, you need to download one virtual machine package from [PSU Box](https://psu.box.com/s/0qv3y213h7j3pdhphg259135tg0etawn) and open it with your installed VirtualBox. The username and password are **s2ist** and **s2ist**, respectively. All the files related to the Challenges are in `/home/s2ist/Challenges/`. Please refer to the README file before the next step.

**NOTE:** You could execute instruction in Tip 1 to disable ASLR (Address Space Layout Randomization), if you wish.

## Challenges

### Challenge 1 : Generate malicious input to print out "Welcome to overflow!"

Given vulnerable binary - `challenge1`, generate malicious input to get the specific output - "Welcome to overflow". In order to make life easier, we provide its source code.

**Submission** : a screenshot with md5 of challenge1 and commands to get specific output.

### Challenge 2 : Generate malicious input to print out "Welcome to overflow!"

Given vulnerable binary - `challenge2`, generate malicious input to get the specific output - "Welcome to overflow". In order to make life easier, we provide its source code.

**Submission** : a screenshot with md5 of challenge2 and commands to get specific output.

### Challenge 3 : Craft malicious input file and invoke gedit window

Given vulnerable binary - `challenge3`, generate malicious input to get gedit window open. In order to make life easier, we provide its source code. And you could read Reference 2 to get some information about **buffer overflow**.

**Submission** : a screenshot with md5 of `challenge3` and commands to invoke gedit window.

### Challenge 4 : Craft malicious input file and invoke one command in source code

Given vulnerable binary - `challenge4`, generate malicious input to get gedit window open. In order to make life easier, we provide its source code. And you could read Reference 3 to get some information about **interger overflow**.

**Submission** : a screenshot with md5 of `challenge4` and commands to invoke one command in source code.

### Challenge 5 : Learn Coredump

Given one coredump - `core` and its binary - `example`, ask some questions related to coredump format.  You could read Tip 2 and References 4, 5 and 6 to get all the following information.

1. What’s the magic number for the given coredump file?
2. Can you show the program header table?
3. What’s the value of address 0x8048010(double word size) in the coredump?
4. What's the stack trace in the coredump?

### Challenge 6 : Figure out Root Cause of Vulnerability from Coredump, Binary and Source Code
<!---
(Non-corrupted coredump)
--->
 
Given a coredump file - core with its respective binary - gdb and source code - gdb.tar.gz, try to catch the root cause for the crash. You could read References 7 and 8 for help with stack traces. And you could read Reference 9 for information on the value of variables.

**Submission** : File_name:line_number, for example, `test.c:10`.

### Challenge 7 : Figure out Root Cause of Vulnerability from Coredump, Binary and Source Code
<!---
(Corrupted coredump)
--->

Given a coredump file - core with its respective binary - latex2rtf and source code latex2rtf.tar.gz, try to catch the root cause. You could read References 7 and 8 for help with stack traces. And you could read Reference 9 for information on the value of variables.

**Submission** : File_name:line_number, for example, `test.c:10`.

<!---

### Challenge 8 : Modify malicious input file and invoke gedit window according to coredump
### Challenge 9 : Figure out Root Cause of Vulnerability from Coredump with only binary

Given Coredump with binary and Source code, try to catch the root cause. You could read References 7, 8 to get stacktrace. And you could read Reference 9 to get value of variables.

--->

## Submission

Please send one email that contains all the submissions of challenges to <s2istnsa@gmail.com>. Make sure that you write all the submissions in one email. We will only take **the last email** before the deadline of submission.

## Tips

### Tip 1

Q : How to turn off ASLR? 
A : `echo 0 | sudo tee /proc/sys/kernel/randomize_va_space`

### Tip 2

Q : How to use binary and corresponding coredump from gdb?    
A : `gdb binary coredump`


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

