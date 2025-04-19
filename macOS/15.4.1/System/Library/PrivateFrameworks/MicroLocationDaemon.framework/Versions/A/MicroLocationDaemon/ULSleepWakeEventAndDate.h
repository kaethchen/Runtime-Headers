@interface ULSleepWakeEventAndDate : NSObject

@property (nonatomic) int sleepWakeState;
@property (nonatomic) struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double __rep_; } __d_; } time;

- (id).cxx_construct;
- (id)initWithSleepWakeEvent:(int)a0 andDate:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;

@end
