#ifndef __SYSTEMCALLLIST_H__
#define __SYSTEMCALLLIST_H__

#define SYSCALL_create_thread      853

#define SYSCALL_get_vcon_addr      200

#define SYSCALL_delay              300
#define SYSCALL_mdelay             301

#define SYSCALL_sys_getpid              500
#define SYSCALL_sys_fork                501
#define SYSCALL_sys_wait                502
#define SYSCALL_sys_execve              503
#define SYSCALL_sys_getprio             504
#define SYSCALL_sys_setprio             505
#define SYSCALL_sys_exit                506
#define SYSCALL_sys_read                507
#define SYSCALL_sys_write               508
#define SYSCALL_sys_sbrk                509 
#define SYSCALL_sys_open                510
#define SYSCALL_sys_close               511
#define SYSCALL_sys_msleep              512
#define SYSCALL_sys_sem_init            513
#define SYSCALL_sys_sem_destroy         514
#define SYSCALL_sys_sem_wait            515
#define SYSCALL_sys_sem_post            516
#define SYSCALL_sys_sem_timedwait       517
#define SYSCALL_sys_sem_cancelablewait  518
#define SYSCALL_sys_clone               519
#define SYSCALL_sys_lseek               520
#define SYSCALL_sys_get_ticks           521
#define SYSCALL_sys_rcce_init           522
#define SYSCALL_sys_rcce_malloc         523
#define SYSCALL_sys_rcce_fini           524
#define SYSCALL_sys_yield               525
#define SYSCALL_sys_kill                526
#define SYSCALL_sys_signal              527

#define SYSCALL_do_exit                 550
#define SYSCALL_block_current_task      551
#define SYSCALL_reschedule              552
#define SYSCALL_wakeup_task             553
#define SYSCALL_numtest                 554
#define SYSCALL_sys_alloc               555
#define SYSCALL_sys_free                556

#define SYSCALL_get_start_tsc           601
#define SYSCALL_get_freq                602

#define SYSCALL_print_log	  854
#endif // __SYSTEMCALLLIST_H__
