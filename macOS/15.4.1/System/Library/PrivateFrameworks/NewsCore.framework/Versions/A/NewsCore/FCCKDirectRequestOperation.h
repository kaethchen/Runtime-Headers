@class FCNetworkEvent, NSString, NSArray, NSURL, FCEdgeCacheHint, NSMutableDictionary, NSDictionary, NSError, NSMutableArray, FCNetworkActivity;
@protocol FCNetworkBehaviorMonitor;

@interface FCCKDirectRequestOperation : FCNetworkOperation <NSURLSessionTaskDelegate> {
    BOOL _production;
    BOOL _operationFailsOnRequestFailure;
    BOOL _ignoreCache;
    int _networkEventType;
    NSArray *_requests;
    NSURL *_baseURL;
    NSString *_containerName;
    long long _requestType;
    NSDictionary *_additionalRequestHTTPHeaders;
    id<FCNetworkBehaviorMonitor> _networkBehaviorMonitor;
    FCEdgeCacheHint *_edgeCacheHint;
    long long _optimizationPolicy;
    id /* block */ _criticalNodeFailureTest;
    id /* block */ _recordHandler;
    id /* block */ _requestCompletionHandler;
    NSString *_requestUUID;
    FCNetworkEvent *_networkEvent;
    id /* block */ _networkActivityBlock;
    FCNetworkActivity *_networkActivity;
    NSMutableArray *_resultResponseOperations;
    NSMutableDictionary *_resultErrorsByRequestID;
    NSError *_resultError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 didCreateTask:(id)a1;
- (void)performOperation;
- (id)initWithNetworkReachability:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void)resetForRetry;
- (id)throttleGroup;
- (BOOL)validateOperation;
- (BOOL)areNetworkRequirementsSatisfiedWithReachability:(id)a0 offlineReason:(long long *)a1;
- (double)preferredTimeoutIntervalForRequest;

@end
