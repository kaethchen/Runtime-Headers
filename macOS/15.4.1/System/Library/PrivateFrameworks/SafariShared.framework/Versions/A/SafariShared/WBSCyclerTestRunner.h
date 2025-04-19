@class NSMutableArray;
@protocol WBSCyclerTestSuite, WBSCyclerTestTarget;

@interface WBSCyclerTestRunner : NSObject {
    BOOL _stopRequested;
    NSMutableArray *_pendingRequestQueue;
    NSMutableArray *_pendingRequestCompletionHandlerQueue;
}

@property (readonly, nonatomic) id<WBSCyclerTestSuite> testSuite;
@property (readonly, nonatomic) id<WBSCyclerTestTarget> target;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_stop;
- (void)handleRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_errorWithCode:(long long)a0;
- (id)_descriptionForErrorCode:(long long)a0;
- (void)_handleNextPendingRequestWithCompletionHandler:(id /* block */)a0;
- (void)_performNextIterationWithCompletionHandler:(id /* block */)a0;
- (id)initWithTestSuite:(id)a0 target:(id)a1;
- (void)requestStop;
- (void)runWithCompletionHandler:(id /* block */)a0;

@end
