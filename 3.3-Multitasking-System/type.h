#define NPROC 9 // numero de procesos
#define SSIZE 1024 // tamaño de stack = 4KB

// PROC status
#define FREE    0
#define READY   1
#define SLEEP   2
#define ZOMBIE  3

typedef struct proc {
  struct proc *next;   // puntero a siguiente proceso
  int *ksp;            // puntero a stack guardado
  int pid;             // pid = 0 a NPROC -1
  int ppid;            // pid de proceso padre
  int status;          // estatus de PROC
  int priority;        // prioridad de planificación
  int kstack[SSIZE];   // stack de procesos
} PROC;
