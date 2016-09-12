#include <sstmac/hardware/nic/netlink.h>
#include <sstmac/hardware/node/node.h>
#include <sprockit/sim_parameters.h>
#include <sprockit/keyword_registration.h>

ImplementFactory(sstmac::hw::netlink);

RegisterNamespaces("netlink");

namespace sstmac {
namespace hw {

netlink::netlink(sprockit::sim_parameters* params, node *parent) :
  event_subscheduler(parent)
{
  id_ = netlink_id(params->get_int_param("id"));
  init_loc_id(event_loc_id(id_));
  num_eject_ = params->get_int_param("neject");
  num_inject_ = params->get_int_param("ninject");
}

}
}
