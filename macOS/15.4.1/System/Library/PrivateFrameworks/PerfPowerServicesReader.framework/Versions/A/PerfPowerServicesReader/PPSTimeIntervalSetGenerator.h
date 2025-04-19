@class PPSRequestDispatcher, NSDateInterval;

@interface PPSTimeIntervalSetGenerator : NSObject {
    PPSRequestDispatcher *_dispatcher;
    unsigned long long _settings;
    unsigned long long _directionality;
    NSDateInterval *_timelineBoundaries;
}

@property (readonly) NSDateInterval *timelineBoundaries;

- (void).cxx_destruct;
- (id)fetchTimeSeriesForBatteryShutdown;
- (id)fetchTimeSeriesForBootTime;
- (id)initWithDispatcher:(id)a0 settings:(unsigned long long)a1 directionality:(unsigned long long)a2;
- (id)initWithFilepath:(id)a0 settings:(unsigned long long)a1 directionality:(unsigned long long)a2;
- (id)intervalSetForTimeSeries:(id)a0 withIntervalStartCheckBlock:(id /* block */)a1 intervalEndCheckBlock:(id /* block */)a2 payloadBlock:(id /* block */)a3 coalescePolicy:(id)a4;
- (id)intervalSetMapForTimeSeries:(id)a0 withGroupingDimensions:(id)a1 withIntervalStartCheckBlock:(id /* block */)a2 intervalEndCheckBlock:(id /* block */)a3 payloadBlock:(id /* block */)a4 coalescePolicy:(id)a5;
- (id)systemHaltTimeSeries;
- (id)systemSleepTimeSeries;

@end
