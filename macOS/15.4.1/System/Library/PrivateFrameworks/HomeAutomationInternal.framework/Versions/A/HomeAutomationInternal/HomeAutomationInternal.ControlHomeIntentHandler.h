@class ControlHomeIntent, ControlHomeIntentResponse;

@interface HomeAutomationInternal.ControlHomeIntentHandler : NSObject <ControlHomeIntentHandling>

- (id)init;
- (void)confirmControlHome:(ControlHomeIntent *)a0 completion:(void (^)(ControlHomeIntentResponse *))a1;
- (void)handleControlHome:(id)a0 completion:(id /* block */)a1;
- (void)resolveFiltersForControlHome:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTimeForControlHome:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveUserTaskForControlHome:(id)a0 withCompletion:(id /* block */)a1;

@end
