@class ABAccountRepository, ABUserDefaults;

@interface ABDefaultAccountPreference : NSObject {
    ABAccountRepository *_repository;
    ABUserDefaults *_preferences;
}

+ (id)os_log;

- (void)dealloc;
- (void).cxx_destruct;
- (void)postDistributedNotification;
- (id)defaultAccount;
- (id)fallbackAccount;
- (void)defaultAccountChangedExternally:(id)a0;
- (id)initWithAccountRepository:(id)a0;
- (id)initWithAccountRepository:(id)a0 defaults:(id)a1;
- (void)postDidChangeNotifications;
- (void)postLocalNotification;
- (void)registerForNotifications;
- (id)sanityCheckDefaultAccount:(id)a0;
- (id)sanityCheckDefaultAcountIdentifier:(id)a0;
- (void)setDefaultAccount:(id)a0;

@end
