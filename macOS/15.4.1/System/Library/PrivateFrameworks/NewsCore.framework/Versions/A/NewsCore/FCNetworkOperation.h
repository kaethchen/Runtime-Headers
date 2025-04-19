@class NSString;
@protocol FCNetworkReachabilityType;

@interface FCNetworkOperation : FCOperation <FCNetworkReachabilityObserving>

@property (readonly, nonatomic) id<FCNetworkReachabilityType> networkReachability;
@property (readonly, nonatomic) double preferredTimeoutIntervalForRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)maxRetries;
- (id)initWithNetworkReachability:(id)a0;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)prepareOperation;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (BOOL)areNetworkRequirementsSatisfiedWithReachability:(id)a0 offlineReason:(long long *)a1;
- (void)networkReachabilityDidChange:(id)a0;
- (BOOL)validateOperationError:(id *)a0;

@end
