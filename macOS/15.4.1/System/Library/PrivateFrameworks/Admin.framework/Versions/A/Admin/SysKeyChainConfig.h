@interface SysKeyChainConfig : NSObject

+ (id)sharedSysKeyChainConfig;

- (void)setKeyForDomain:(id)a0;
- (BOOL)setODSDPassword:(id)a0 accountName:(id)a1;
- (void)setRestrictAppInstallations:(unsigned long long)a0;
- (void)setRestrictAppInstallations:(BOOL)a0 allowCaspianIdentifiedApps:(BOOL)a1;
- (int)storeKeyInSystemKeychain:(id)a0 forUser:(id)a1 serverURL:(id)a2 description:(id)a3;
- (BOOL)storeSystemKeychainPassword:(id)a0 account:(id)a1 service:(id)a2;

@end
