## Introduction

Welcome to the 2017 NSA Competition!

This competition is a 2-stage cyber competition on crash forensics against memory corruption attacks. Being different from existing Capture the Flag (CTF) competitions, which focus on skills such as reverse-engineering, network sniffing, and cryptanalysis, etc, our competition focuses on the skillset for software vulnerability identification. In other words, the technique required for contest participants includes memory forensics, and dynamic and static analysis of vulnerable programs.

The main goal of the competition is to serve as an educational exercise to give participants experience in finding security loopholes that may be found in commonly available software. In addition, the contest aims to attract a diverse population of students to the field of cybersecurity. The contest will produce a collection of core dumps attributable to real-world memory corruption attacks. We will make these dumps publicly available as a resource to cyber security educators and researchers.


## Registration

<!--
// Who's eligible to participate? Graduate? Undergraduate? From which universities?
// What information should be included in the registration email? Name, lastname, student id? student email? Team members?
// What should teams look like? Max amount of members? Min amount?
-->

The competition is open to all students: high school students, undergradute students, and graduate students. Submissions could be done individually or as a group. The maxinum number of team members is X.

To get started, register by sending an email to <s2istnsa@gmail.com>. The subject of the email should include the name and members of your team. For example, **Team XXX with Members - XXX, XXX**. If you want to attach more information, please write them in the body of your email. You could register with your edu email account. Otherwise, you need to provide **student id** (?) as your credential in the body.

For instructions on preparing a virtual machine, see [Preparation](#preparation) section.

For information on core dump and how to get started, check out the [References](#references) section.

Good luck!

### Deadline of registration

XX-XX-XXXX

## Preparation

First, you need to install VirtualBox :

- [Installation of VirtualBox in Windows/Mac](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/VirtualBox_Installation.pdf)
- [Installation of VirtualBox in Ubuntu](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/Install_VirtualBox_on_Ubuntu.pdf)

Step-by-step videos :

- [Install VirtualBox on Windows 10](https://www.youtube.com/watch?v=63_kPIQUPp8)
- [Install VirtualBox on Mac](https://www.youtube.com/watch?v=lEvM-No4eQo)
- [How to install VirtualBox on Ubuntu 14.04 LTS](https://www.youtube.com/watch?v=si0nSaCnNoY).

Second, you need to download the `S2ISTNSA.zip` file from [PSU Box](https://psu.box.com/s/9yswnnyaf0qsj0x68n6hj2awgx47rwop), extract it and double click the `S2ISTNSA.vbox`. The username and password are **s2ist** and **s2ist**, respectively. All the files related to the Challenges are in `/home/s2ist/Challenges/`. Please refer to the README file under that folder before next step.

**NOTE:** 
1. You could follow the instruction in [Tip 1](#tip-1) to disable ASLR (Address Space Layout Randomization).
2. Please refer to the [Submission](#submission) section before you submit your answers for each challenge.
3. See [Tip 4](#tip-4) to get the md5 value of a given file.

## Challenges

### Challenge 1 : Generate malicious input to print out "Welcome to overflow!"

Given the vulnerable binary - `challenge1`, generate a malicious input to get the following output: "Welcome to overflow". To make your life easier, we provide the source code.

**Submission** : a screenshot with the md5 of `challenge1` and the commands to get the desired output. 

### Challenge 2 : Generate malicious input to print out "Welcome to overflow!"

Given the vulnerable binary - `challenge2`, generate a malicious input to get the following output: "Welcome to overflow". To make your life easier, we provide the source code.

**Submission** : a screenshot with the md5 of `challenge2` and the commands to get the desired output.

### Challenge 3 : Craft malicious input file and invoke gedit window

Given the vulnerable binary - `challenge3`, generate a malicious input to open a **gedit** window. To make your life easier, we provide the source code. You could read [Reference 2](#references) to get some information about **buffer overflows**.

**Submission** : a screenshot with the md5 of `challenge3` and the commands to invoke a **gedit** window.

### Challenge 4 : Craft malicious input file and invoke one command in source code

Given the vulnerable binary - `challenge4`, generate a malicious input to execute a command hidden in the source code. To make your life easier, we provide the source code. You could read [Reference 3](#references) to get some information about **interger overflows**.

**Submission** : a screenshot with the md5 of `challenge4` and the commands to invoke the command hidden in source code.

### Challenge 5 : Learn Coredump

Given one coredump - `core` and its binary - `example`, answer the following four questions.  You could read [Tip 2](#tip-2) and [References 4, 5 and 6](#references) to get all of the related information.

1. What’s the magic number for the given coredump file?
2. Can you show the program header table?
3. What’s the value of address 0x8048010(double word size) in the coredump?
4. What's the stack trace in the coredump?

### Challenge 6 : Figure out Root Cause of Vulnerability from Coredump, Binary and Source Code
<!---
(Non-corrupted coredump)
--->
 
Given the following files: core dump (`core`), binary (`gdb`), and source code (`gdb.tar.gz`), try to find the root cause for the crash (i.e. the buggy file and the corresponding line number). You could read [References 7 and 8](#references) for help with stack traces. And you could read [Reference 9](#references) to check the value of program variables.
**Submission** : File_name:line_number, for example, `test.c:10`.

### Challenge 7 : Figure out Root Cause of Vulnerability from Coredump, Binary and Source Code
<!---
(Corrupted coredump)
--->

Given the following files: core dump (`core`), binary (`latex2rtf`), and source code (`latex2rtf.tar.gz`), try to catch the root cause for the crash (i.e. the buggy file and the corresponding line number). You could read [References 7 and 8](#references) for help with stack traces. And you could read [Reference 9](#references) to check the value of program variables.

**Submission** : File_name:line_number, for example, `test.c:10`.

<!---

### Challenge 8 : Modify malicious input file and invoke gedit window according to coredump
### Challenge 9 : Figure out Root Cause of Vulnerability from Coredump with only binary

Given Coredump with binary and Source code, try to catch the root cause. You could read References 7, 8 to get stacktrace. And you could read Reference 9 to get value of variables.

--->

## Submission

Please send an email that contains all the submissions of challenges to <s2istnsa@gmail.com>. Make sure that you write all the submissions **in one email**. We will only take **the last email** from each team before the deadline of submission. Please use the same email address that you used for registration to send your submission. Refer the `submission_template.txt` in `/home/s2ist/Challenges/` for how to submit your answers. 

## Tips

### Tip 1

Q : How to turn off ASLR? 
A : `echo 0 | sudo tee /proc/sys/kernel/randomize_va_space`

### Tip 2 

Q : How to use binary and corresponding coredump from gdb?    
A : `gdb binary coredump`

### Tip 3

Q : How to find the vulnerable function that contributes to the corrupted object?    
A : Traverse all the functions in the stack trace and figure out the function that modifies the corrupted object to bad state.

### Tip 4

Q : How to get the MD5 value of a file?    
A : `md5sum filename`


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

