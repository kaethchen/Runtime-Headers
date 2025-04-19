@class NSString, NSDictionary;

@interface CRPerformanceStatistics : NSObject

@property (retain) NSString *name;
@property (readonly) BOOL measureRecentPeak;
@property (retain) NSDictionary *metrics;

- (id)description;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (id)initWithName:(id)a0;
- (void)addStatistics:(id)a0;
- (id)initWithStatistics:(id)a0;
- (id)_startMeasurement;
- (id)initWithName:(id)a0 measureRecentPeak:(BOOL)a1;
- (void)_endMeasurement:(id)a0;
- (void)measureBlock:(id /* block */)a0;

@end
