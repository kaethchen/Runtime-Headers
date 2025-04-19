@interface DEExtensionTracker : NSObject

+ (id)userDefaults;
+ (void)checkIn;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)_updateXPCActivityDate;
+ (id)criteria:(id)a0;
+ (id)currentLoggingExtensions;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)extensionTrackerCleanup;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (void)scheduleXPCActivity;
+ (id)sharedSerialQueue;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (double)xpcActivityTimeInterval;

@end
