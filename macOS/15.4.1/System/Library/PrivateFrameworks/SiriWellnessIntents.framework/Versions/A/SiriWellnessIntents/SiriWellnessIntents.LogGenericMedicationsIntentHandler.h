@class LogGenericMedicationsIntent, LogGenericMedicationsIntentResponse;

@interface SiriWellnessIntents.LogGenericMedicationsIntentHandler : NSObject <LogGenericMedicationsIntentHandling>

- (id)init;
- (void)handleLogGenericMedications:(LogGenericMedicationsIntent *)a0 completion:(void (^)(LogGenericMedicationsIntentResponse *))a1;

@end
