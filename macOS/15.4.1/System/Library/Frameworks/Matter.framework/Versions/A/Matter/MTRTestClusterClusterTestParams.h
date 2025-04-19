@class NSNumber;

@interface MTRTestClusterClusterTestParams : MTRUnitTestingClusterTestParams

@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

@end
