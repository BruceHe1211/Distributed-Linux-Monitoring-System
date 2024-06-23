#pragma once

#include <QAbstractTableModel>
#include <vector>
#include "monitor_inter.h"

#include "monitor_info.grpc.pb.h"
#include "monitor_info.pb.h"

namespace monitor {

class ProcessModel : public MonitorInterModel {
  Q_OBJECT

 public:
  explicit ProcessModel(QObject *parent = nullptr);

  virtual ~ProcessModel() {}

  int rowCount(const QModelIndex &parent = QModelIndex()) const override;
  int columnCount(const QModelIndex &parent = QModelIndex()) const override;
  QVariant data(const QModelIndex &index,
                int role = Qt::DisplayRole) const override;
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role) const override;

  void UpdateMonitorInfo(const monitor::proto::MonitorInfo &monitor_info);

 signals:
  void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight,
                   const QVector<int> &roles);

 private:
  std::vector<QVariant> insert_one_process(
      const monitor::proto::Process &process);
  std::vector<std::vector<QVariant>> monitor_data_;
  QStringList header_;

  enum Process {
    //可能有问题，传过来的数据名字不知道叫什么
    PROCESS_STATE = 0,
    COLUMN_MAX
  };
};

}  // namespace monitor