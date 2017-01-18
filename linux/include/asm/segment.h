#ifndef _ASM_SEGMENT_H
#define _ASM_SEGMENT_H

unsigned char get_fs_byte(const char * addr);
unsigned short get_fs_word(const unsigned short *addr);
unsigned long get_fs_long(const unsigned long *addr);
void put_fs_byte(char val,char *addr);
void put_fs_word(short val,short * addr);
void put_fs_long(unsigned long val,unsigned long * addr);
unsigned long get_fs();
unsigned long get_ds();
void set_fs(unsigned long val);

#endif
