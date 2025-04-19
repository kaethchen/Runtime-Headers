@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {
    MovingAverage *_average;
}

- (void).cxx_destruct;
- (double)value;
- (void)addValue:(double)a0;
- (id)initWithMaxCapacity:(long long)a0;
- (double)valueForInterval:(double)a0 defaultValue:(double)a1;

@end
