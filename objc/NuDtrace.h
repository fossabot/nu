/*
 * Generated by dtrace(1M).
 */

#ifndef	_DTRACE_H
#define	_DTRACE_H

#include <unistd.h>

#ifdef	__cplusplus
extern "C" {
#endif
    
#define NU_STABILITY "___dtrace_stability$nu$v1$5_5_5_1_1_5_1_1_5_5_5_5_5_5_5"
    
#define NU_TYPEDEFS "___dtrace_typedefs$nu$v1"
    
#define	NU_LIST_EVAL_BEGIN(arg0, arg1) \
{ \
__asm__ volatile(".reference " NU_TYPEDEFS); \
__dtrace_probe$nu$list_eval_begin$v1$63686172202a$696e74((char *)arg0, arg1); \
__asm__ volatile(".reference " NU_STABILITY); \
}
#define	NU_LIST_EVAL_BEGIN_ENABLED() \
__dtrace_isenabled$nu$list_eval_begin$v1()
#define	NU_LIST_EVAL_END(arg0, arg1) \
{ \
__asm__ volatile(".reference " NU_TYPEDEFS); \
__dtrace_probe$nu$list_eval_end$v1$63686172202a$696e74((char *)arg0, arg1); \
__asm__ volatile(".reference " NU_STABILITY); \
}
#define	NU_LIST_EVAL_END_ENABLED() \
__dtrace_isenabled$nu$list_eval_end$v1()
    
    
    extern void __dtrace_probe$nu$list_eval_begin$v1$63686172202a$696e74(char *, int);
    extern int __dtrace_isenabled$nu$list_eval_begin$v1(void);
    extern void __dtrace_probe$nu$list_eval_end$v1$63686172202a$696e74(char *, int);
    extern int __dtrace_isenabled$nu$list_eval_end$v1(void);
    
#ifdef	__cplusplus
}
#endif

#endif	/* _DTRACE_H */
