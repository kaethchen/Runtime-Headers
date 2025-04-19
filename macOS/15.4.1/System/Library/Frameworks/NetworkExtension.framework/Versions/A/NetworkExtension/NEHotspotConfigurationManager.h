@interface NEHotspotConfigurationManager : NSObject

@property (class, readonly) NEHotspotConfigurationManager *sharedManager;

- (void)applyConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)getConfiguredSSIDsWithCompletionHandler:(id /* block */)a0;
- (void)joinAccessoryHotspot:(id)a0 passphrase:(id)a1 completionHandler:(id /* block */)a2;
- (void)joinAccessoryHotspotWithoutSecurity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeConfigurationForHS20DomainName:(id)a0;
- (void)removeConfigurationForSSID:(id)a0;

@end
