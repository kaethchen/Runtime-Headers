@class GetHealthQuantityIntentResponse, GetHealthQuantityIntent;

@interface SiriWellnessIntents.GetHealthQuantityIntentHandler : NSObject <GetHealthQuantityIntentHandling>

- (id)init;
- (void)handleGetHealthQuantity:(GetHealthQuantityIntent *)a0 completion:(void (^)(GetHealthQuantityIntentResponse *))a1;

@end
