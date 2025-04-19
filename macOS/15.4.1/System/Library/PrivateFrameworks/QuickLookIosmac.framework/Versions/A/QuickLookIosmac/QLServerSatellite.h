@class NSArray, NSString, NSOperationQueue, NSUUID, NSObject, NSMapTable;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface QLServerSatellite : NSObject {
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSMapTable *_requests;
    NSMapTable *_requestReplyBlocks;
    int _architecture;
    BOOL _shouldDie;
    int _satelliteError;
}

@property (retain, nonatomic) NSOperationQueue *coordinationQueue;
@property (readonly) BOOL forExternalGenerators;
@property (retain) NSArray *generatorIDs;
@property (copy) NSString *sandboxVariant;
@property (copy) NSString *customName;
@property BOOL forThumbnailAgent;

- (id)description;
- (void).cxx_destruct;
- (void)_handleMessage:(id)a0;
- (BOOL)_connect;
- (void)_connectionLost;
- (void)enqueueRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0 completionBlock:(id /* block */)a1;
- (void)_handleFailure:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0 message:(id)a1 error:(int)a2;
- (void)_handleGenerationComplete:(id)a0;
- (void)_handleGenerationDidStart:(id)a0;
- (void)_handleGenerationGotMoreData:(id)a0;
- (void)_handleGenerationStartNewAttachment:(id)a0;
- (void)_handleGenerationWillBeginMessage:(id)a0;
- (int)_handleHangProblem;
- (void)_handleRequestReplyIfNeeded:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0 fromMessage:(id)a1;
- (void)_handleUsageAlertMessage:(id)a0;
- (void)_handleUsageProblem:(int)a0;
- (void)_killSatellite;
- (void)_logGeneratorUse:(id)a0;
- (void)_requestDone:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0 success:(BOOL)a1;
- (void)_sendSetupMessageWithInitialRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0;
- (id)architectureDescription;
- (void)cancelRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0;
- (BOOL)hasRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a0;
- (id)initWithIdentifier:(id)a0 forExternalGenerators:(BOOL)a1 architecture:(int)a2;

@end
