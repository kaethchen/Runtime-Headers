@interface AppleIDSetup.AISFlowTask : NSObject <AISFlowTaskInfoProtocol_Internal> {
    void /* unknown type, empty encoding */ cachedContinuation;
    void /* unknown type, empty encoding */ cachedTask;
}

@property (nonatomic) void /* unknown type, empty encoding */ completed;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)complete;
- (void)waitUntilLoadedWithCompletionHandler:(void (^)(void))a0;

@end
