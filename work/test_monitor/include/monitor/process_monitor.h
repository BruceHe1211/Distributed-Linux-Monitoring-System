#pragma once

#include <vector>
#include <string>
#include <iostream>
#include "monitor/monitor_inter.h"
#include "monitor_info.grpc.pb.h"
#include "monitor_info.pb.h"

namespace monitor {

class ProcessMonitor : public MonitorInter {
public:
    // explicit ProcessMonitor(const std::string& pid);
    ProcessMonitor() {}
    void UpdateOnce(monitor::proto::MonitorInfo* monitor_info);
    void Stop() override {}

private:
    std::string pid_;  // Process ID
};

}  // namespace monitor

  // PROCESS_MONITOR_H