#ifndef sstmac_software_process_THREAD_INFO_H
#define sstmac_software_process_THREAD_INFO_H

#include <pthread.h>
#include <sstmac/common/sstmac_config.h>
#include <sstmac/software/process/tls.h>

extern int sstmac_global_stacksize;

namespace sstmac {

class thread_info {
 public:
  static void
  register_user_space_virtual_thread(int phys_thread_id, void* stack, void* globalsMap);

  static inline int
  current_physical_thread_id(){
    char x;
    size_t stackptr = (size_t) &x;
    size_t stack_mult = stackptr / sstmac_global_stacksize;
    size_t aligned_stack_ptr = stack_mult * sstmac_global_stacksize;
    int* tls = (int*) aligned_stack_ptr;
    return tls[0];
  }
};

}

#endif // THREAD_INFO_H
