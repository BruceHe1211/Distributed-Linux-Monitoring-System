#pragma once

#include <QAbstractTableModel>
#include <vector>
#include "monitor_inter.h"

#include "monitor_info.grpc.pb.h"
#include "monitor_info.pb.h"

namespace monitor {

class CpuLoadModel : public MonitorInterModel {
  Q_OBJECT

 public:
  explicit CpuLoadModel(QObject *parent = nullptr);

  virtual ~CpuLoadModel() {}
  //行列大小
  int rowCount(const QModelIndex &parent = QModelIndex()) const override;
  int columnCount(const QModelIndex &parent = QModelIndex()) const override;
  //数据名称
  QVariant data(const QModelIndex &index,
                int role = Qt::DisplayRole) const override;
  //数据
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role) const override;

  void UpdateMonitorInfo(const monitor::proto::MonitorInfo &monitor_info);

 signals:
  //数据刷新
  void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight,
                   const QVector<int> &roles);

 private:
  std::vector<QVariant> insert_one_cpu_load(
      const monitor::proto::CpuLoad &cpu_load);
  std::vector<std::vector<QVariant>> monitor_data_;
  QStringList header_;

  enum CpuLoad {
    CPU_AVG_1 = 0,
    CPU_AVG_3,
    CPU_AVG_15,
    COLUMN_MAX
  };
};

}  // namespace monitor