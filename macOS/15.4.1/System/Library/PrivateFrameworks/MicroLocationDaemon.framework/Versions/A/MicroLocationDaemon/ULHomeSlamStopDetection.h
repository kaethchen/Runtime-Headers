@class ULHomeSlamTimer, ULHomeSlamFence;

@interface ULHomeSlamStopDetection : NSObject

@property (nonatomic) struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *db;
@property (nonatomic) long long state;
@property (retain, nonatomic) ULHomeSlamFence *largeFence;
@property (retain, nonatomic) ULHomeSlamFence *smallFence;
@property (retain, nonatomic) ULHomeSlamFence *staticFence;
@property (retain, nonatomic) ULHomeSlamTimer *longTimer;
@property (retain, nonatomic) ULHomeSlamTimer *shortTimer;

- (void).cxx_destruct;
- (void)_setStaticFence;
- (void)_enterMotionStateAtTime:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)_enterStaticState;
- (id)_getStopMotionTriggersFromOdometryEntries:(struct vector<CLMiLoOdometryTable::Entry, std::allocator<CLMiLoOdometryTable::Entry>> { struct Entry *x0; struct Entry *x1; struct __compressed_pair<CLMiLoOdometryTable::Entry *, std::allocator<CLMiLoOdometryTable::Entry>> { struct Entry *x0; } x2; })a0;
- (void)_runMotionStateLogicWithEntry:(const void *)a0 andTriggers:(id)a1;
- (void)_runStaticStateLogicWithEntry:(const void *)a0 andTriggers:(id)a1;
- (void)_setLargeMotionFence;
- (void)_setLongMotionTimerStartingDate:(id)a0;
- (void)_setShortMotionTimerStartingDate:(id)a0;
- (void)_setSmallMotionFence;
- (id)_shouldExitMotionState:(const void *)a0;
- (BOOL)_shouldExitStaticState:(const void *)a0;
- (id)_timepointToDate:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)_updateFencesAndTimersInMotionStateWithEntry:(const void *)a0;
- (id)initWithDB:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0;
- (id)runStopDetectionAnalysisFromTime:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0 toTime:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;

@end
