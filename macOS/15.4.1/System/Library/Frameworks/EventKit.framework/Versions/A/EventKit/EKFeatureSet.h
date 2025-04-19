@interface EKFeatureSet : NSObject

+ (BOOL)areContextualRemindersSupported;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)isContinuitySupported;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (void)userAcknowledgedSplashScreen;

@end
