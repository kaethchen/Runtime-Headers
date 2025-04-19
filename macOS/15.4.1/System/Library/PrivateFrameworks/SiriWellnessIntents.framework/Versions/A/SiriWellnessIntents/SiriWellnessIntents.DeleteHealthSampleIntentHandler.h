@class DeleteHealthSampleIntentResponse, DeleteHealthSampleIntent;

@interface SiriWellnessIntents.DeleteHealthSampleIntentHandler : NSObject <DeleteHealthSampleIntentHandling>

- (id)init;
- (void)handleDeleteHealthSample:(DeleteHealthSampleIntent *)a0 completion:(void (^)(DeleteHealthSampleIntentResponse *))a1;

@end
