@class NSString, NSMutableDictionary, NSDate;

@interface MOPerformanceMeasurement : NSObject {
    NSDate *_startDate;
    struct pc_session { } *_session;
}

@property (retain) NSMutableDictionary *metrics;
@property (retain) NSString *name;
@property (readonly) BOOL measureRecentPeak;

+ (BOOL)isEnabled;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)endSession;
- (void)startSession;
- (id)initWithName:(id)a0 measureRecentPeak:(BOOL)a1;
- (void)measureBlock:(id /* block */)a0;
- (void)_evaluateEndedSession:(struct pc_session { } *)a0 duration:(double)a1;
- (void)_addMetricWithKey:(id)a0 name:(id)a1 unit:(id)a2 denominator:(double)a3 pcMetricID:(unsigned long long)a4;

@end
