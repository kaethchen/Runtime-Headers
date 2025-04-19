@class NSNumber;

@interface MTRTimeSynchronizationClusterSetUtcTimeParams : MTRTimeSynchronizationClusterSetUTCTimeParams

@property (copy, nonatomic) NSNumber *utcTime;
@property (copy, nonatomic) NSNumber *granularity;
@property (copy, nonatomic) NSNumber *timeSource;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

@end
