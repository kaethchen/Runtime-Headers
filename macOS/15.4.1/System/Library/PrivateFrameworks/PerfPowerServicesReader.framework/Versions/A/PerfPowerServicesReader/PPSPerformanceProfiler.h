@class NSMutableDictionary;

@interface PPSPerformanceProfiler : NSObject

@property (retain) NSMutableDictionary *start_times;
@property (retain) NSMutableDictionary *profilingStats;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)endProfilingForPhase:(id)a0;
- (id)getProfilingStatsForQuery;
- (void)startProfilingForPhase:(id)a0;

@end
