@class NSDate, NSString, NetworkQualityRemoteConfiguration, NSURLSession, LatencyURLSessionDelegate, NSOperationQueue, NetworkQualityConfiguration, NetworkQualityExecutionsResult, NSObject, ThroughputDelegate;
@protocol OS_dispatch_queue, OS_nw_activity, NetworkQualityExecutionsDelegate;

@interface NetworkQualityExecutions : NSObject <NSURLSessionDelegate> {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_executionsQueue;
    NSObject<OS_nw_activity> *_parentNWActivity;
    NSObject<OS_nw_activity> *_idleLatencyNWActivity;
    NSObject<OS_nw_activity> *_workingLatencyNWActivity;
    NSObject<OS_nw_activity> *_downloadThroughputNWActivity;
    NSObject<OS_nw_activity> *_uploadThroughputNWActivity;
    ThroughputDelegate *dlDelegate;
    ThroughputDelegate *ulDelegate;
    LatencyURLSessionDelegate *latencyDelegate;
    NSURLSession *_configSession;
    BOOL cancelled;
    NetworkQualityRemoteConfiguration *remoteConfig;
    struct test_context { struct test *test; struct execution *execution; BOOL fast; NetworkQualityRemoteConfiguration *config; } tp_ul_multi;
    struct test_context { struct test *test; struct execution *execution; BOOL fast; NetworkQualityRemoteConfiguration *config; } tp_dl_multi;
    NetworkQualityConfiguration *config;
    NetworkQualityExecutionsResult *_progressResults;
    id<NetworkQualityExecutionsDelegate> _delegate;
    id /* block */ _completionHandler;
    int _stage;
    NSDate *_start;
    NSDate *_startCapacityTest;
    NSDate *_timeout;
    NSDate *_lastProgressUpdate;
}

@property (readonly) BOOL throughputSaturated;
@property (readonly) BOOL throughputMetExitCriteria;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)drain;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancel;
- (id)initWithConfiguration:(id)a0;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)checkTimeout;
- (void)reallyExecuteUL;
- (BOOL)currentStageIs:(int)a0;
- (void)reallyExecuteDL;
- (void)_cancelWithOptionalError:(id)a0;
- (void)_sendSymptomReport;
- (void)captureError:(id)a0;
- (id)createDefaultNSURLSessionConfiguration;
- (id)createDefaultRequestwithURL:(id)a0;
- (long long)currentThroughput;
- (void)execDLWithCompletionHandler:(id /* block */)a0;
- (void)execParallelWithCompletionHandler:(id /* block */)a0;
- (void)execULWithCompletionHandler:(id /* block */)a0;
- (BOOL)isDraining;
- (void)reallyExecuteParallel;
- (void)reportingCompletionHandler:(id)a0;
- (void)setTimeout;
- (void)shareProgress;

@end
