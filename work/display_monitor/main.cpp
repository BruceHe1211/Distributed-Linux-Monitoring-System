#pragma once

#include <QApplication>
#include <thread>
#include "client/rpc_client.h"
#include "monitor_widget.h"

int main(int argc, char* argv[]) {
  QApplication app(argc, argv);
  monitor::MonitorWidget moitor_widget;
  monitor::RpcClient rpc_client;
  monitor::proto::MonitorInfo monitor_info;

  //从grpc里获取值
  rpc_client.GetMonitorInfo(&monitor_info);

  std::string name = monitor_info.name();
  std::cerr << "Monitor Name: " << name << std::endl;
  // std::cout << "process: " << monitor_info.process() << std::endl;

  QWidget* widget = moitor_widget.ShowAllMonitorWidget(name);
  widget->show();

  std::unique_ptr<std::thread> thread_;
  thread_ = std::make_unique<std::thread>([&]() {
    while (true) {
      monitor_info.Clear();
      rpc_client.GetMonitorInfo(&monitor_info);
      std::string name = monitor_info.name();
      std::cerr << "update_Monitor Name: " << name << std::endl;
      //实时更新
      std::cerr << "try to run updateData before " << name << std::endl;
      moitor_widget.UpdateData(monitor_info);
      std::cerr << "try to run updateData after " << name << std::endl;
      std::this_thread::sleep_for(std::chrono::seconds(2));
    }
  });
  thread_->detach();

  return app.exec();
}