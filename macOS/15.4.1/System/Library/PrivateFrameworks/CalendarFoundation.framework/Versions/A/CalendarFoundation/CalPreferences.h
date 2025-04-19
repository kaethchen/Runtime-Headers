@class NSString, NSMutableSet;
@protocol CalPreferencesStore;

@interface CalPreferences : NSObject {
    id<CalPreferencesStore> _store;
    NSString *_domain;
    BOOL _readOnly;
    NSMutableSet *_registeredNotificationsToReflect;
}

+ (id)log;
+ (id)_debugColorPreferences;
+ (id)getDebugColorNumberForPreference:(id)a0 dark:(BOOL)a1;
+ (id)getDebugColorStringForPreference:(id)a0 dark:(BOOL)a1;
+ (void)removeDebugColorPreference:(id)a0 dark:(BOOL)a1;
+ (void)setDebugColorNumberForPreference:(id)a0 value:(id)a1 dark:(BOOL)a2;
+ (void)setDebugColorStringForPreference:(id)a0 value:(id)a1 dark:(BOOL)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (void)_preferenceChangedExternally:(id)a0;
- (void)_preferenceChangedInternally:(id)a0;
- (void)_synchronizePreferences;
- (id)debugColorStringForString:(id)a0 isDark:(BOOL)a1;
- (BOOL)getBooleanPreference:(id)a0 defaultValue:(BOOL)a1;
- (long long)getIntegerPreference:(id)a0 defaultValue:(long long)a1;
- (id)getValueForPreference:(id)a0 expectedClass:(Class)a1;
- (id)initWithDomain:(id)a0 readOnly:(BOOL)a1;
- (id)initWithDomain:(id)a0 store:(id)a1;
- (id)initWithDomain:(id)a0 store:(id)a1 readOnly:(BOOL)a2;
- (void)registerReflectionForPreferenceWithNotificationName:(id)a0;
- (void)removePreference:(id)a0 notificationName:(id)a1;
- (void)setBooleanPreference:(id)a0 value:(BOOL)a1 notificationName:(id)a2;
- (void)setIntegerPreference:(id)a0 value:(long long)a1 notificationName:(id)a2;
- (void)setValueForPreference:(id)a0 value:(id)a1 notificationName:(id)a2;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)a0;

@end
