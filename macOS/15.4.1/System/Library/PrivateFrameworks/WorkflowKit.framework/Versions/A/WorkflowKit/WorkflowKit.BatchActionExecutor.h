@interface WorkflowKit.BatchActionExecutor : NSObject <LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ queuedActionIdentifiers;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsAppProtectionUnlockWithCompletionHandler:(id /* block */)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;

@end
