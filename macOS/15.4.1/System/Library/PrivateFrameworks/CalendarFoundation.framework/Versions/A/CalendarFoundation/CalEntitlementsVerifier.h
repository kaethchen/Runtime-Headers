@interface CalEntitlementsVerifier : NSObject

+ (id)_currentProcessValueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
+ (BOOL)currentProcessCanAccessProcedureOrEmailAlarms;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)a0;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasCalendarToolEntitlement;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessIsFirstPartyApp;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsShortcuts;
+ (BOOL)currentProcessUsesInProcessEventStores;

@end
