@class NSDictionary, NSString;
@protocol ACMPrincipalPreferences, ACMPreferencesStore;

@interface ACDExternalEnvironmentPreferences : ACMExternalEnvironmentPreferences <ACDExternalEnvironmentPreferences>

@property (readonly, retain) NSDictionary *environmentSpecification;
@property (readonly, retain) NSString *realm;
@property (readonly, retain) id<ACMPrincipalPreferences> principalPreferences;
@property (retain) id<ACMPreferencesStore> preferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publicKey;
- (void)setPublicKey:(id)a0;

@end
