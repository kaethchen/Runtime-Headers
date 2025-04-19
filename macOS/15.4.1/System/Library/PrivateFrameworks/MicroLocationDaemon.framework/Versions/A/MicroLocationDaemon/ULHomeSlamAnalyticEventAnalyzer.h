@interface ULHomeSlamAnalyticEventAnalyzer : NSObject

@property (nonatomic) struct vector<CLMiLoHomeSlamAnalyticEventTable::Entry, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry *__begin_; struct Entry *__end_; struct __compressed_pair<CLMiLoHomeSlamAnalyticEventTable::Entry *, std::allocator<CLMiLoHomeSlamAnalyticEventTable::Entry>> { struct Entry *__value_; } __end_cap_; } events;
@property (nonatomic) struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *db;

- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)_aggregateTimeBetweenEvent:(short)a0 andEvent:(short)a1 startDate:(id)a2 endDate:(id)a3;
- (id)_analyzeTriggersAndGetCA:(id)a0 fromDate:(id)a1 untilDate:(id)a2;
- (long long)_calcMiLoEnabledTimeFromDate:(id)a0 untilDate:(id)a1;
- (long long)_calcTimeAtHomeFromDate:(id)a0 untilDate:(id)a1;
- (BOOL)_checkIfScreenTransitionedToOnBefore:(id)a0 after:(id)a1;
- (BOOL)_daemonWasRestarted;
- (long long)_hoursFromFirstEventToDate:(id)a0;
- (id)_timepointToDate:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (BOOL)_wasLastScreenStateOnBefore:(id)a0;
- (id)initWithDB:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0;
- (id)runStopDetectionAnalysisAtTimepoint:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;

@end
