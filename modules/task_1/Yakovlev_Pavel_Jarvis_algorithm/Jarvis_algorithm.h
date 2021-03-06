// Copyright 2020 Yakovlev Pavel
#ifndef MODULES_TASK_1_YAKOVLEV_PAVEL_JARVIS_ALGORITHM_JARVIS_ALGORITHM_H_
#define MODULES_TASK_1_YAKOVLEV_PAVEL_JARVIS_ALGORITHM_JARVIS_ALGORITHM_H_

#include <vector>
#include <string>
#include <utility>

std::pair<double, double> getRandomPair();
std::vector<std::pair<double, double>> getRandomVectorOfPair(size_t sz);
std::vector<std::pair<double, double>> ConvexHull_Jarvis(std::vector<std::pair<double, double>> points);

#endif  // MODULES_TASK_1_YAKOVLEV_PAVEL_JARVIS_ALGORITHM_JARVIS_ALGORITHM_H_
