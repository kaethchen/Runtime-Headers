@class LNActionExecutor;

@interface _TtCC18AppIntentsServices21RemoteAppIntentsActor29PerformActionExecutorDelegate : NSObject <LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ actionMetadata;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ connectionStore;
    void /* unknown type, empty encoding */ delegateStore;
    void /* unknown type, empty encoding */ effectiveBundleIdentifier;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ intentFileStore;
    void /* unknown type, empty encoding */ payloadPrivacy;
    void /* unknown type, empty encoding */ peer;
    void /* unknown type, empty encoding */ pendingRequests;
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ executorIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 didPerformActionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsActionConfirmationWithRequest:(id)a1;
- (void)executor:(LNActionExecutor *)a0 needsAppProtectionUnlockWithCompletionHandler:(void (^)(BOOL))a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsContinueInAppWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (BOOL)executor:(id)a0 shouldRunShowOutputAction:(id)a1;

@end
