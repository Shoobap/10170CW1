#include "SensorStream.h"

const std::string dataLocations[3] = {"sensor_1.csv", "sensor_2.csv","sensor_3.csv"};

float SensorStream::GetNextInput() {
  std::string line;
  std::getline(sensorData, line, ',');
  std::getline(sensorData, line);
  return std::stof(line);
}
SensorStream::SensorStream(SensorID id) {
  sensorData = std::ifstream(dataLocations[id]);
}