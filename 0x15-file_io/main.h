#ifndef MAIN_H
#define MAIN_H "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);
void check_elf(unsigned char *elf_ptr);
void print_magic(unsigned char *elf_ptr);
void print_class(unsigned char *elf_ptr);
void print_data(unsigned char *elf_ptr);
void print_version(unsigned char *elf_ptr);
void print_abi(unsigned char *elf_ptr);
void print_osabi(unsigned char *elf_ptr);
void print_type(unsigned int e_type, unsigned char *elf_ptr);
void print_entry(unsigned long int e_entry, unsigned char *elf_ptr);
void close_elf(int elf);

#endif /* MAIN_H */
