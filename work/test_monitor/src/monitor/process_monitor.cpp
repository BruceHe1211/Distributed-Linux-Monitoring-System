#include "monitor/process_monitor.h"
#include "utils/read_file.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include "monitor_info.grpc.pb.h"
#include "monitor_info.pb.h"

namespace monitor {

// ProcessMonitor::ProcessMonitor() {}

void ProcessMonitor::UpdateOnce(monitor::proto::MonitorInfo* monitor_info) {
    // std::string path = "/proc/" + pid_ + "/stat";
    std::string path = "/proc/933/stat";
    ReadFile proc_stat_file(path);
    std::vector<std::string> proc_stat;
    proc_stat_file.ReadLine(&proc_stat);

    if (proc_stat.size() > 3) {
        
        std::string process_state_ = proc_stat[2];

        std::cout << "Process State: " << process_state_ << std::endl;

        if (!monitor_info) {
            std::cerr << "Error: monitor_info is nullptr!" << std::endl;
            return;
        }
        auto process_msg = monitor_info->mutable_process();
        if (!process_msg) {
            std::cerr << "Error: process_msg is null!" << std::endl;
            return;
        }
        // process_msg->set_process_pid(pid_);
        process_msg->set_process_state(process_state_);
    }

    return;
}

}  // namespace monitor
