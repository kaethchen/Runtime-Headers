@interface TextComposer.TCModelRunner : NSObject {
    void /* unknown type, empty encoding */ requestIdToTask;
    void /* unknown type, empty encoding */ tasksPendingCancellation;
    void /* unknown type, empty encoding */ cancellationQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)requestPrewarmingFor:(long long)a0 pid:(long long)a1 appPid:(long long)a2 preferredLanguage:(id)a3 regionPolicy:(long long)a4;
- (void)requestCancellationFor:(unsigned long long)a0;
- (void)requestModelInvocationForCalendarEventWith:(unsigned long long)a0 prompt:(id)a1 modelType:(long long)a2 pid:(long long)a3 requestIdentifier:(id)a4 regionPolicy:(long long)a5 completionHandler:(id /* block */)a6;
- (void)requestModelInvocationForQuestionnaireWith:(unsigned long long)a0 prompt:(id)a1 modelType:(long long)a2 pid:(long long)a3 requestIdentifier:(id)a4 regionPolicy:(long long)a5 completionHandler:(id /* block */)a6;
- (void)requestModelInvocationWith:(unsigned long long)a0 prompt:(id)a1 modelType:(long long)a2 isPrecomputeRequest:(BOOL)a3 seed:(long long)a4 draftSteps:(long long)a5 pid:(long long)a6 appPid:(long long)a7 requestIdentifier:(id)a8 regionPolicy:(long long)a9 disallowedStrings:(id)a10 completionHandler:(id /* block */)a11;

@end
