#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include <stdbool.h>
#include "threads/thread.h"
#include <list.h>
#include "threads/synch.h"


struct lock file_lock;       /*lock an unlock access file with multi thread*/

struct fd_element
{
    int fd;                        /*file descriptors ID*/
    struct file *myfile;           /* the real file*/
    struct list_elem element;      /*list elem to add fd_element in fd_list*/
};

void syscall_init (void);
void exit (int status);
int read (int fd, void *buffer, unsigned size);
int wait (tid_t pid);
bool remove (const char *file);
int open (const char *file);
void close (int fd);
int filesize (int fd);
unsigned tell (int fd);
void halt (void);
bool create (const char *file, unsigned initial_size);

void seek (int fd, unsigned position);

tid_t exec (const char *cmd_line);

void close_all(struct list * fd_list);
struct child_element* get_child(tid_t tid,struct list *mylist);


#endif /* userprog/syscall.h */