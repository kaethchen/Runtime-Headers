@class LogQuantityIntent, LogQuantityIntentResponse;

@interface SiriWellnessIntents.LogQuantityIntentHandler : NSObject <LogQuantityIntentHandling>

- (id)init;
- (void)handleLogQuantity:(LogQuantityIntent *)a0 completion:(void (^)(LogQuantityIntentResponse *))a1;

@end
