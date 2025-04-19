@class ULEnvironment, NSObject;
@protocol OS_dispatch_queue;

@interface ULHomeSlamAnalytics : NSObject

@property (nonatomic) struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *db;
@property (retain, nonatomic) ULEnvironment *environment;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL dependenciesSet;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)logEventExitHomeLOIAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logSleepStateEvent:(int)a0 atTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;
- (id)_createBGTRequest;
- (void)_logEventType:(short)a0 atTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;
- (void)_registerForBackgroundTask;
- (void)_runStopDetectionAnalyticsTask;
- (void)_unregisterForBackgroundTask;
- (void)logEventDaemonStartedAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventEnterHomeLOIAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventOdometryStartedAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventOdometryStoppedAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventScreenOffAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventScreenOnAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)logEventSleepStateRegisterAtTimestamp:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)resetDependencies;
- (void)setDependenciesAndRegisterToBackgroundTaskWithDB:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0 environment:(id)a1;

@end
