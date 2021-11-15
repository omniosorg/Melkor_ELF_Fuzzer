
#ifndef _ILLUMOS_H_
#define _ILLUMOS_H_

typedef struct {
    Elf32_Sword d_tag;        /* how to interpret value */
    union {
        Elf32_Word    d_val;
        Elf32_Addr    d_ptr;
        Elf32_Off    d_off;
    } d_un;
} Elf32_Dyn;

typedef struct {
    Elf64_Xword d_tag;        /* how to interpret value */
    union {
        Elf64_Xword    d_val;
        Elf64_Addr    d_ptr;
    } d_un;
} Elf64_Dyn;

#define STB_LOOS 10
#define STB_HIOS 12

#define _ASM
#include <sys/link.h>
#undef _ASM

#define DT_NUM DT_MAXPOSTAGS

#define Elf32_Section unsigned short
#define Elf64_Section unsigned short

#endif /* _ILLUMOS_H_ */
