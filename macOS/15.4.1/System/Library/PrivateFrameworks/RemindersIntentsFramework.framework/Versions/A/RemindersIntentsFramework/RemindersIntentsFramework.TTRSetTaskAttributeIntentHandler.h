@interface RemindersIntentsFramework.TTRSetTaskAttributeIntentHandler : NSObject <INSetTaskAttributeIntentHandlingPrivate> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ contactRepresentationResolver;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ timeProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSetTaskAttribute:(id)a0 completion:(id /* block */)a1;
- (void)resolveContactEventTriggerForSetTaskAttribute:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetTaskForSetTaskAttribute:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTaskTitleForSetTaskAttribute:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTemporalEventTriggerForSetTaskAttribute:(id)a0 completion:(id /* block */)a1;

@end
