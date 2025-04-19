@interface HomeAutomationInternal.AutomateHomeIntentHandler : NSObject <AutomateHomeIntentHandling> {
    void /* unknown type, empty encoding */ climateAttributes;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmAutomateHome:(id)a0 completion:(id /* block */)a1;
- (void)handleAutomateHome:(id)a0 completion:(id /* block */)a1;
- (void)resolveAutomatableTaskForAutomateHome:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTriggerForAutomateHome:(id)a0 withCompletion:(id /* block */)a1;

@end
