
#ifndef SRC_SERVICES_AUTONOMYMONITORS_POINT_SEARCH_MONITORS_H_
#define SRC_SERVICES_AUTONOMYMONITORS_POINT_SEARCH_MONITORS_H_

#include "AutonomyMonitors/MonitorBase.h"
#include "AutonomyMonitors/AutonomyMonitorServiceMain.h"
#include "afrl/cmasi/PointSearchTask.h"

namespace uxas {
namespace service {
namespace monitoring {

  class PointSearchTaskMonitor: public MonitorBase {
  public:

    PointSearchTaskMonitor(AutonomyMonitorServiceMain * service_ptr, std::shared_ptr<afrl::cmasi::PointSearchTask> pointSearchTask);
    ~PointSearchTaskMonitor();
    
    void addVehicleStateMessage(VehicleStateMessage const & vMessage);
    bool isPropertySatisfied();
    double propertyRobustness();
  protected:
    std::shared_ptr<afrl::cmasi::PointSearchTask> _task;
  };

};
};
};


#endif
