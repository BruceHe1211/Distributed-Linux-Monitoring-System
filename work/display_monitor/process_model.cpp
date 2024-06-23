#include "process_model.h"

namespace monitor {
ProcessModel::ProcessModel(QObject* parent) : MonitorInterModel(parent) {
  header_ << tr("process_state");
}

int ProcessModel::rowCount(const QModelIndex& parent) const {
  return monitor_data_.size();
}

int ProcessModel::columnCount(const QModelIndex& parent) const {
  return COLUMN_MAX;
}

QVariant ProcessModel::headerData(int section, Qt::Orientation orientation,
                              int role) const {
  if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
    return header_[section];
  }

  return MonitorInterModel::headerData(section, orientation, role);
}

QVariant ProcessModel::data(const QModelIndex& index, int role) const {
  if (index.column() < 0 || index.column() >= COLUMN_MAX) {
    return QVariant();
  }

  if (role == Qt::DisplayRole) {
    if (index.row() < monitor_data_.size() && index.column() < COLUMN_MAX)
      return monitor_data_[index.row()][index.column()];
  }
  return QVariant();
}

void ProcessModel::UpdateMonitorInfo(
    const monitor::proto::MonitorInfo& monitor_info) {
  beginResetModel();
  monitor_data_.clear();

  monitor_data_.push_back(insert_one_process(monitor_info.process()));


  endResetModel();

  return;
}

std::vector<QVariant> ProcessModel::insert_one_process(
    const monitor::proto::Process& process) {
  std::vector<QVariant> process_list;
  process_list.push_back(QVariant(QString::fromStdString(process.process_state())));
  return process_list;
}
}  // namespace monitor
