## Introduction

Welcome to the 2018 Penn State Cybersecurity Competition, a security contest sponsored by NSA (National Security Agency)!

This competition is a 2-stage (i.e., two rounds) cyber competition on crash forensics against memory corruption attacks.  Being different from existing Capture the Flag (CTF) competitions, which focus on skills such as reverse-engineering, network sniffing, and cryptanalysis, our competition focuses on software vulnerability identification.  In other words, the skills  required for this contest include memory forensics, and dynamic and static analysis of vulnerable programs.

The main goal of the competition is to serve as an educational exercise helping participants gain essential experience in finding security loopholes that may be found in commonly available software. In addition, the contest aims to attract a diverse population of students to the field of cybersecurity. The contest will produce a collection of core dumps attributable to real-world memory corruption attacks.  We will make these core dumps publicly available as a resource to cybersecurity educators and researchers.

### What is the 2018 Competition? When does it start/end?

The Competition consists of two stages:

- Stage I (i.e., preliminary round) involves trying to solve 7 problems (i.e., Challenges) without going to the main campus of Penn State.  Participants submit their solutions through an email.  Stage I will last 2 weeks.
- Stage II (i.e., final round) involves trying to solve a designated number of problems at the main campus of Penn State.  A designated number of better performers during Stage I will advance to Stage II. All travel costs will be covered by Penn State. The Stage II Competition will last 12 hours (10am-10pm) on the designated Competition day.

### Who is eligible to participate in the Competition?

The competition is open to all students: high school students, undergraduate students, and graduate students. Each individual who participates in the Competition must:

- be at least 18 years old;
- form a team alone or with up to 4 other participants;
- must be U.S. citizens, or permanent residents admitted to the U.S. for permanent residence prior to award, and;
- have a valid student ID (photo ID)

For more background information of this competition, see [http://sites.psu.edu/nsacomptest](http://sites.psu.edu/nsacomptest)

## Prizes

First Prize: $5,000

Second Prize: $3,500

Third Prize: $1,500

## Registration

### Registration deadline: Feb 22, 2018

**Online registration site:** [http://sites.psu.edu/nsacomptest/prelimroundov/registration/](http://sites.psu.edu/nsacomptest/prelimroundov/registration/)


## Instructions for Stage I Participants

- Period of Stage I competition: **Feb 22 -- March 4**
- Submission deadline: **11:59pm on March 4, 2018**  
- You can find the 7 problems in the [Challenges](#challenges) section.  
- Before you can work on any of the 7 problems, you must firstly download a particular virtual machine image created by us. You can download the virtual machine image in the [Preparation](#preparation) section.  
- In order to run the virtual machine image on your PC, you need to install VirtualBox, a free and open-source hypervisor for x86 computers. In the [Preparation](#preparation) section, we provide you with (a) the URLs from which you can download VirtualBox, and (b) a step-by-step “How to install VirtualBox” video.
- To gain sufficient background knowledge for solving the 7 problems, you may leverage the knowledge units provided in the [References](#references) section.

## Helpdesk

If you have any questions, please do not hesitate to send emails to: <s2istnsa@gmail.com>

## Preparation

First, you need to download VirtualBox from [Download Page](https://www.virtualbox.org/wiki/Downloads) according to your host system.

Second, you need to install VirtualBox on your host system. You could refer to :

- Step by step screenshots:

	- [Installation of VirtualBox in Windows/Mac](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/VirtualBox_Installation.pdf)
	- [Installation of VirtualBox in Ubuntu](https://github.com/psusecurity/psusecurity.github.io/raw/master/doc/Install_VirtualBox_on_Ubuntu.pdf)

- Step-by-step videos :

	- [Install VirtualBox on Windows 10](https://www.youtube.com/watch?v=63_kPIQUPp8)
	- [Install VirtualBox on Mac](https://www.youtube.com/watch?v=lEvM-No4eQo)
	- [How to install VirtualBox on Ubuntu 14.04 LTS](https://www.youtube.com/watch?v=si0nSaCnNoY).

Third, you need to download the [S2ISTNSA.zip](https://psu.box.com/s/9yswnnyaf0qsj0x68n6hj2awgx47rwop) or [S2ISTNSA.tar.xz](https://psu.box.com/s/6rktjnf4no317wwl4eqdhwy7vrww7zjx), extract it and double click file S2ISTNSA.vbox. The username and password are **s2ist** and **s2ist**, respectively. All the files related to the 7 problems are in folder **/home/s2ist/Challenges/**. Please carefully read the README file in this folder before taking the next step.

**NOTE:**

1. You could follow the instruction in [Tip 1](#tip-1) to disable ASLR (Address Space Layout Randomization).
2. Please refer to the [Submission](#submission) section before you submit your answers for each challenge.
3. See [Tip 4](#tip-4) to get the md5 value of a given file.

## Challenges for Round I

### Challenge 1: Generate a malicious input to print out “Welcome to overflow!”

Using the given vulnerable binary, the participants should generate a malicious input to get the following output: “Welcome to overflow!”.  To make this challenge easier, the source code of the vulnerable binary is provided.

What should be submitted: a screenshot with the md5 of the given vulnerable binary, and the commands to get the desired output.

### Challenge 2: Generate a malicious input to print out “Welcome to overflow!”

Using the given vulnerable binary, the participants should generate a malicious input to get the following output: “Welcome to overflow!”.  To make this challenge easier, the source code of the vulnerable binary is provided.

What should be submitted: a screenshot with the md5 of the given vulnerable binary, and the commands to get the desired output.

### Challenge 3: Craft a malicious input file and invoke a gedit window

Using the given vulnerable binary, generate a malicious input file to open a **gedit** window. To make this challenge easier, the source code of the vulnerable binary is provided.

Hint: [Reference 2](#references) is particularly helpful for this challenge.  

What should be submitted: a screenshot with the md5 of the given vulnerable binary, and the commands to invoke a **gedit** window.

### Challenge 4: Craft a malicious input file and invoke one command in source code

Using the given vulnerable binary, generate a malicious input file to execute a command hidden in the source code. To make this challenge easier, the source code of the vulnerable binary is provided.  

Hint: [Reference 3](#references) is particularly helpful for this challenge.  

What should be submitted: a screenshot with the md5, and the commands to invoke the command hidden in source code.

### Challenge 5: Understand Core Dumps

Using the given post-crash core dump and the corresponding binary, answer the following four questions:

1. What’s the magic number for the given core dump file?
2. Can you show the program header table?
3. What’s the content of address 0x8048010 (double word size) in the core dump?
4. What’s the stack trace in the core dump?

Hint: [Tip 2](#tip-2) and [References 4, 5 and 6](#references) are particularly helpful for this challenge.

What should be submitted: your answers for the 4 questions

### Challenge 6: Find Root Cause of Vulnerability from Core Dumps

The following files are given: core dump (`core`), binary (`gdb`), and source code (`gdb.tar.gz`). Using these files, find the root cause for the crash (i.e., the buggy source code file and the corresponding line number).

Hint: [References 7 and 8](#references) are helpful in leveraging the stack traces. You could read [Reference 9](#references) to check the value of a program variable.

What should be submitted: File_name:line_number, for example, `test.c:10`.

### Challenge 7: Find Root Cause of Vulnerability from Core Dumps

The following files are given: core dump (`core`), binary (`latex2rtf`), and source code (`latex2rtf.tar.gz`). Using these files, find the root cause for the crash (i.e., the buggy file and the corresponding line number).  

Hint: [References 7 and 8](#references) are helpful in leveraging the stack traces. You could read [Reference 9](#references) to check the value of a program variable.

What should be submitted: File_name:line_number, for example, `test.c:10`.


## Challenges for Round II

### Challenge 8 : More information from Core Dumps

In this challenge, we need your help to provide some detailed information of one software crash. To facilitate your analysis, we prepared [one encrypted zip file ](https://github.com/psusecurity/psusecurity.github.io/raw/master/Challenges/C8/mp3info.zip) that contains the following files:

 - Core dump of the crash : `mp3info.core`
 - Executable of the program : `mp3info`

We are expecting the following detailed information:

 1. What's the ELF header of Core dump?
 2. What's the File association of the crash? Please refer to [Reference 6](http://www.gabriel.urdhr.fr/2015/05/29/core-file/) for the definition of File association.
 3. What's the start and end virtual address for `libc-2.19.so`?

### Challenge 9 : Locate Vulnerability from Software Crash

In this challenge, we need your help to locate the vulnerability behind a software crash. To facilitate your diagnosis, we provide [one encrypted zip file](https://github.com/psusecurity/psusecurity.github.io/raw/master/Challenges/C9/aircrack-ng.zip) that contains the following files:

 - Core dump of the crash: `aireplay-ng.core`
 - Executable (i.e., machine code) of the software: `aireplay-ng`
 - Source code of the software: `aircrack-ng.tar.gz`

We are expecting the following information:

 - Location of the vulnerability
	- You can report a code segment which contains the vulnerability, including the file name and line information (e.g., `test.c: 10-20`). **The smaller the segment is, the more bonus you will get**
	- The steps you followed to locate the code segment (brief but clear description is fine)

**Hints:**

 - The executable is compiled from the provided source code and it contains debugging information
 - The core dump is generated when the provided executable runs into failure
 - **Dynamic Hint: The software crashes right after the return instruction has been executed. To solve this challenge, you might take a look at the return address remaining on the stack.**

### Challenge 10 : Recover the Execution State before a Software Crash

In this challenge, we would like you to recover execution state before a software crash. More specifically, we want to know the execution state, including memory cells and registers, at each instruction executed before the crash. To help you as much as we can, we prepared [one encrypted zip file](https://github.com/psusecurity/psusecurity.github.io/raw/master/Challenges/C10/join.zip) that contains the following resources:

 - Core dump of the crash: `join.core.tar.gz`
 - Executable (i.e., machine code) of the software: `join`
 - The trace of instructions executed before the crash - `trace`. We only provide binary for those instructions.

We would really like to know one thing:

- Starting from the last instruction until the first instruction:
	- Reconstruct the instructions executed before the crash in chronological order
	- Which memory cells or which registers were read/written by each instruction (please give the addresses of memory cells and names of registers)
	- For an instruction, if memory cells or registers are overwritten, what are their original values?
	- **The more instructions you resolve and the more information you provide, the more bonus you will obtain**

**Hints:**

 - Use program header table to get the value of one memory from core dump. You could refer to detailed information in Reference 6
 - The core dump contains the execution state after the last instruction

### Challenges 11 : Locate Vulnerability from Software Crash and Execution Trace

In this challenge, we run into problems of finding the vulnerability behind a software crash. Here, unfortunately, source code of the software is unavailable. To facilitate your analysis, we tried our best but could only provide [one encrypted zip file](https://github.com/psusecurity/psusecurity.github.io/raw/master/Challenges/C11/nasm.zip) that contains the following items:

 - Core dump of the crash: `nasm.core`
 - Executable (i.e., machine code) of the software: `nasm`
 - Executable of libraries used by the software: `libc-2.23.so, ld-2.23.so`
 - The trace of instructions executed before the crash: `inst`. We only have the addresses of those instructions

It will be greatly appreciated if you can share us the following information:

 - The set of instructions that contain the vulnerability. **The smaller the segment is, the more bonus you will get**

**Hints:**

 - Use program header table to get the value of one memory from core dump. You could refer to detailed information from Reference 6
 - The loading locations of libraries can be learned from the core dump

## Submission

**Online solution submission site:** [http://sites.psu.edu/nsacomptest/prelimroundov/submission-board/](http://sites.psu.edu/nsacomptest/prelimroundov/submission-board/ )

Make sure that you include all of your solutions in a single file.

## Tips

### Tip 1

**Q** : How to turn off ASLR?    
**A** : `echo 0 | sudo tee /proc/sys/kernel/randomize_va_space`

### Tip 2

**Q** : How to use binary and corresponding coredump from gdb?    
**A** : `gdb binary coredump`

### Tip 3

**Q** : How to find the vulnerable function that contributes to the corrupted object?    
**A** : Traverse all the functions in the stack trace and figure out the function that modifies the corrupted object to bad state.

### Tip 4

**Q** : How to get the MD5 value of a file?    
**A** : `md5sum filename`

### Tip 5

**Q**: How to easily feed input to those challenge programs?    
**A**: **1.** `echo "XXX" > tmp ;  ./challenge < tmp;`  **2.** `echo "XXX" | ./challenge`     
       You could still use `python/perl/ruby` to directly generate your own payload and feed it to challenge programs.

## References

1. [Linux (x86) Exploit Development Series](https://sploitfun.wordpress.com/2015/06/26/linux-x86-exploit-development-tutorial-series/)

2. [Classic Stack Based Buffer Overflow](https://sploitfun.wordpress.com/2015/05/08/classic-stack-based-buffer-overflow/)

3. [Integer Overflow](https://sploitfun.wordpress.com/2015/06/23/integer-overflow/)

4. [ELF Format](http://refspecs.linuxfoundation.org/LSB_4.1.0/LSB-Core-generic/LSB-Core-generic/elf-generic.html)

5. [ELF Hello World Tutorial](http://www.cirosantilli.com/elf-hello-world/#generate-the-example)

6. [Coredump in Linux](http://www.gabriel.urdhr.fr/2015/05/29/core-file/)

7. [GDB Stacktrace](https://sourceware.org/gdb/onlinedocs/gdb/Backtrace.html)

8. [Get stacktrace from coredump](https://stackoverflow.com/questions/5745215/getting-stacktrace-from-core-dump)

9. [GDB Variables](https://sourceware.org/gdb/onlinedocs/gdb/Variables.html)

10. [Anatomy of a Program in Memory](http://duartes.org/gustavo/blog/post/anatomy-of-a-program-in-memory/)

11. [x86 Instruction Set Reference](https://mudongliang.github.io/x86/)

<!--
13. [A brief look into core dumps](http://uhlo.blogspot.fr/2012/05/brief-look-into-core-dumps.html)

15. [Note Segment Data Format](http://refspecs.linuxbase.org/elf/elf.pdf#page=42)
-->

## FAQs

[http://sites.psu.edu/nsacomptest/faqs/](http://sites.psu.edu/nsacomptest/faqs/)
