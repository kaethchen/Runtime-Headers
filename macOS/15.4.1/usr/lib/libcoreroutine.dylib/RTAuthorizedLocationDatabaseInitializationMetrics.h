@interface RTAuthorizedLocationDatabaseInitializationMetrics : NSObject

@property int eraseInstallInitializationAttemptCount;
@property int eraseInstallInitializationCompletionTimeHours;
@property int numberOfVisitsRegisteredDuringEraseInstallInitialization;
@property int numberOfALOIsGeneratedDuringEraseInstallInitialization;

- (id)init;

@end
