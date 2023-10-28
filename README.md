# Pintos Labs Covered Under Operating Systems module, UOM CSE
<p align="center">
    <picture>
      <source 
        srcset="https://github.com/Chathura-De-Silva/Pint-OS-Labs/blob/master/Banner.png"
        media="(prefers-color-scheme: dark)"
      />
      <img 
        src="https://github.com/Chathura-De-Silva/Pint-OS-Labs/blob/master/Banner.png" 
        alt="PintOS banner"
        width="800"
       />
    </picture>
  </p>

*  [Upstream Repository of PintOS](https://github.com/jhu-cs318/pintos.git)

*  PintOS is an incomplete OS written in C to learn and identify the fundemental concepts of operating systems while completing it's functionalities.
*  _Each Branch contains a breakpoint where the lab of the branch itself is the last completed lab in respective branch._
# Lab-0: Interactive Shell

## Introduction

This is Lab-0 of the CS2042 Operating Systems series. In this lab, we'll create a basic mini shell for Pintos OS.

## Commands Implemented

- `whoami`: Display your name alongside your index number.
- `shutdown`: Shutdown Pintos OS and exit the QEMU emulator.
- `time`: Display the number of seconds passed since Unix epoch.
- `ram`: Display the amount of available RAM for the OS.
- `thread`: Display thread statistics.
- `priority`: Display the thread priority of the current thread.
- `exit`: Exit the interactive shell.

## Implementation Details

- The mini shell is a kernel-level shell.
- No access to the standard C library, so implemented essential functions and some are available as a library built in to pint os.
- Utilize functions from `devices/input.c`, `lib/stdio.c`, and `lib/kernel/console.c`.
- No need to create new files or edit the Makefile.

> [!IMPORTANT]
> Modified :
> * `src/threads/init.c`     
  
# Lab 2: User Programs

The project focuses on enabling user programs to interact with the Pintos operating system through system calls. Read this to get an overview of the project structure, relevant files, and instructions for usage.

## Introduction

In this project, the goal is to enable user programs to interact with the Pintos operating system through system calls. The project builds upon the existing infrastructure of Pintos and focuses on managing memory, scheduling, and other states to maintain the illusion that user programs have full machine access.

## Source Files

The `userprog` directory contains the following key files that form the primary focus of the project:

* `process.c` and `process.h`: Responsible for loading ELF binaries and initiating processes.
* `pagedir.c` and `pagedir.h`: Manage 80x86 hardware page tables.
* `syscall.c and syscall.h: Handle system calls invoked by user processes.
* `exception.c` and `exception.h`: Handle exceptions when a user process performs privileged or prohibited operations.
* `gdt.c` and `gdt.h`: Set up the Global Descriptor Table (GDT) for the 80x86 architecture.
* `tss.c` and `tss.h`: Manage the Task-State Segment (TSS) for 80x86 architectural task switching.

## Using the File System

The project requires interfacing with the file system, which is provided in the /filesys directory. Some key points regarding the file system include:

* The file system has limitations such as lack of internal synchronization, fixed file size, no subdirectories, limited file names, and the potential for disk corruption in case of a system crash mid-operation.
* The `pintos-mkdisk` command is used to create a simulated disk with a file system partition, and the pintos -p and pintos -g commands are used to copy files into and out of the simulated file system.

> [!NOTE]
> To see the test case results or the grade, cd in to the `src/userprog/` and run `make check` or `make grade`.
> You may have to manually delete the `build` directory inside the above specified path to run the above command again from scratch.

 > [!IMPORTANT]
> Modified :
> * `src/threads/thread.c`  
> * `src/threads/thread.h`
> *  `src/userprog/syscall.c`
> *  `src/userprog/syscall.h`
> *  `src/userprog/process.c`
> *  `src/userprog/process.h`
> *  `src/userprog/exception.c`

