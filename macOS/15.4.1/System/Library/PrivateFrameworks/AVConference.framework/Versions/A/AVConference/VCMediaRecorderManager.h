@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaRecorderManager : NSObject <VCMediaRecorderDelegate> {
    NSMutableDictionary *_streamTokenList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)prepareURL:(id)a0 forXPCWithSandboxing:(BOOL)a1;

- (void)dealloc;
- (id)init;
- (id)mediaRecorderFromClientContext:(id)a0;
- (void)deregisterBlocksFromService;
- (BOOL)dispatchedRegisterMediaRecorder:(id)a0 withStreamToken:(long long)a1 andError:(id *)a2;
- (id)newClientContextWithStreamToken:(long long)a0 error:(id *)a1;
- (id)newRequestWithArguments:(id)a0 state:(unsigned char)a1;
- (void)notifyClientsWithStreamToken:(long long)a0 service:(char *)a1 arguments:(id)a2;
- (void)registerBlocksForService;
- (void)registerMediaRecorder:(id)a0 withStreamToken:(long long)a1;
- (void)saveImage:(id)a0 movie:(id)a1;
- (void)streamToken:(long long)a0 didEndProcessingRequest:(id)a1 urlContext:(const struct tagVCMediaRecorderDelegateURLContext { id x0; id x1; BOOL x2; } *)a2 error:(id)a3;
- (void)streamToken:(long long)a0 didFinishRequest:(id)a1 didSucceed:(BOOL)a2;
- (void)streamToken:(long long)a0 didStartProcessingRequest:(id)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didUpdateCapabilities:(unsigned int)a1;
- (void)streamTokenDidCleanupAllRequests:(long long)a0;

@end
