#pragma once

#include <rtweekend.h>

class interval {
  public:
    double min, max;

    interval() : min(+infinity), max(-infinity) {} // Default interval is empty

    interval(double min, double max) : min(min), max(max) {}

    [[nodiscard]] double size() const { return max - min; }

    [[nodiscard]] bool contains(double x) const { return min <= x && x <= max; }

    [[nodiscard]] bool surrounds(double x) const { return min < x && x < max; }

    [[nodiscard]] double clamp(double x) const {
        return std::clamp(x, min, max);
    }

    static interval empty() { return {+infinity, -infinity}; }
    static interval universe() { return {-infinity, +infinity}; }
};
