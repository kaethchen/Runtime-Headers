@class MOEffectiveUserSettings, MOEffectiveAccountSettings, MOEffectiveAllowedClientSettings, MOEffectiveShieldSettings;

@interface MOEffectiveSettings : NSObject

@property (readonly) MOEffectiveAccountSettings *account;
@property (readonly) MOEffectiveAllowedClientSettings *allowedClient;
@property (readonly) MOEffectiveShieldSettings *shield;
@property (readonly) MOEffectiveUserSettings *user;

+ (void)startObservingChangesWithHandler:(id /* block */)a0;
+ (void)subscribeForChangesInGroups:(id)a0 eventName:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
