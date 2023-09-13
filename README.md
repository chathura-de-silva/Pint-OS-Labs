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
# Lab-0: Pintos OS Mini Shell

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



