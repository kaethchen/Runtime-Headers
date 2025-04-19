@interface AppStateMonitor : NSObject

+ (id)foregroundAppKeys;
+ (id)getAppsWithStates;
+ (BOOL)hasAnyForegroundApp;

@end
