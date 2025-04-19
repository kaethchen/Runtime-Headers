@class LogSpecificMedicationsIntentResponse, LogSpecificMedicationsIntent;

@interface SiriWellnessIntents.LogSpecificMedicationsIntentHandler : NSObject <LogSpecificMedicationsIntentHandling>

- (id)init;
- (void)handleLogSpecificMedications:(LogSpecificMedicationsIntent *)a0 completion:(void (^)(LogSpecificMedicationsIntentResponse *))a1;

@end
