@class NSNumber;

@interface MTRTestClusterClusterTestSpecificParams : MTRUnitTestingClusterTestSpecificParams

@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

@end
