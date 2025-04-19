@class NSURLSession, NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate> {
    NSObject<OS_dispatch_queue> *dq_inFlightCommands;
    NSMutableSet *inFlightCommands;
}

@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (double)_simulatedLatency;
- (void)cancelAllCommands;
- (void)cancelCommand:(id)a0;
- (void)networkActivityStatus:(BOOL)a0;
- (void)processResponseForCommand:(id)a0 callback:(id /* block */)a1;
- (void)sendCommand:(id)a0 completionBlock:(id /* block */)a1;

@end
