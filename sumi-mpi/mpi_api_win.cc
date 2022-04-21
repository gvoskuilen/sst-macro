/**
Copyright 2009-2022 National Technology and Engineering Solutions of Sandia,
LLC (NTESS).  Under the terms of Contract DE-NA-0003525, the U.S. Government
retains certain rights in this software.

Sandia National Laboratories is a multimission laboratory managed and operated
by National Technology and Engineering Solutions of Sandia, LLC., a wholly
owned subsidiary of Honeywell International, Inc., for the U.S. Department of
Energy's National Nuclear Security Administration under contract DE-NA0003525.

Copyright (c) 2009-2022, NTESS

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.

    * Neither the name of the copyright holder nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Questions? Contact sst-macro-help@sandia.gov
*/

#include <sumi-mpi/mpi_api.h>
#include <sprockit/stl_string.h>

namespace sumi {

int
MpiApi::winFlush(int  /*rank*/, MPI_Win  /*win*/)
{
  spkt_abort_printf("unimplemented error: MPI_Win_flush");
  return MPI_SUCCESS;
}

int
MpiApi::winFlushLocal(int  /*rank*/, MPI_Win  /*win*/)
{
  spkt_abort_printf("unimplemented error: MPI_Win_flush_local");
  return MPI_SUCCESS;
}

int
MpiApi::winCreate(void * /*base*/, MPI_Aint  /*size*/, int  /*disp_unit*/, MPI_Info  /*info*/,
               MPI_Comm  /*comm*/, MPI_Win * /*win*/)
{
  spkt_abort_printf("unimplemented error: MPI_Win_flush_local");
  return MPI_SUCCESS;
}

int
MpiApi::winFree(MPI_Win * /*win*/)
{
  spkt_abort_printf("unimplemented error: MPI_Win_flush_local");
  return MPI_SUCCESS;
}

int
MpiApi::winLock(int  /*lock_type*/, int  /*rank*/, int  /*assert*/, MPI_Win  /*win*/)
{
  spkt_abort_printf("unimplemented error: MPI_Win_flush_local");
  return MPI_SUCCESS;
}

int
MpiApi::winUnlock(int  /*rank*/, MPI_Win  /*win*/)
{
  spkt_abort_printf("unimplemented error: MPI_Win_flush_local");
  return MPI_SUCCESS;
}

int
MpiApi::get(void * /*origin_addr*/, int  /*origin_count*/, MPI_Datatype  /*origin_datatype*/,
             int  /*target_rank*/, MPI_Aint  /*target_disp*/, int  /*target_count*/, MPI_Datatype  /*target_datatype*/,
             MPI_Win  /*win*/)
{
  spkt_abort_printf("unimplemented error: MPI_Get");
  return MPI_SUCCESS;
}

int
MpiApi::put(const void * /*origin_addr*/, int  /*origin_count*/, MPI_Datatype  /*origin_datatype*/,
             int  /*target_rank*/, MPI_Aint  /*target_disp*/, int  /*target_count*/, MPI_Datatype  /*target_datatype*/,
             MPI_Win  /*win*/)
{
  spkt_abort_printf("unimplemented error: MPI_Put");
  return MPI_SUCCESS;
}

}

