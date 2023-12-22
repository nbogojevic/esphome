#pragma once
#include "esphome/components/teleinfo2/teleinfo.h"
#include "esphome/components/text_sensor/text_sensor.h"
namespace esphome {
namespace teleinfo2 {
class TeleInfoTextSensor : public TeleInfoListener, public text_sensor::TextSensor, public Component {
 public:
  TeleInfoTextSensor(const char *tag);
  void publish_val(const std::string &val) override;
  void dump_config() override;
};
}  // namespace teleinfo
}  // namespace esphome
