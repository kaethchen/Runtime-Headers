@class UndoMedsIntentResponse, UndoMedsIntent;

@interface SiriWellnessIntents.UndoMedsIntentHandler : NSObject <UndoMedsIntentHandling>

- (id)init;
- (void)handleUndoMeds:(UndoMedsIntent *)a0 completion:(void (^)(UndoMedsIntentResponse *))a1;

@end
