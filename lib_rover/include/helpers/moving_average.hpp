#ifndef __MOVING_AVERAGE_HPP__
#define __MOVING_AVERAGE_HPP__

#include "helpers/helpers.hpp"

template <class T, uint16_t COEFF_NB>
class MovingAverage
{
private:
    T _avgTable[COEFF_NB] = {0};
    uint16_t _cursor = 0;
    float _avg = 0.0f;

public:
    MovingAverage(T startingValue)
    {
        for (uint16_t i = 0u; i < COEFF_NB; i++)
        {
            this->addValue(startingValue);
        }
    }
    ~MovingAverage() {}

    float addValue(T value)
    {
        _avg -= (float)_avgTable[_cursor];
        _avg += (float)value;
        _avgTable[_cursor] = value;
        _cursor = _cursor + 1 == COEFF_NB ? 0 : _cursor + 1;
        return _avg / (float)COEFF_NB;
    }

    float getAverage(void)
    {
        return _avg / (float)COEFF_NB;
    }
};

#endif // __MOVING_AVERAGE_HPP__
