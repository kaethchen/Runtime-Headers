@class NSNumber;

@interface MTRTestClusterClusterTimedInvokeRequestParams : MTRUnitTestingClusterTimedInvokeRequestParams

@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

@end
