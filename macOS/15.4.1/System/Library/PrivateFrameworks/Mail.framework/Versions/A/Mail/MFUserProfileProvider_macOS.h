@class NSString;

@interface MFUserProfileProvider_macOS : EMUserProfileProvider <EMUserProfileProviderSubclassMethods>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProvider;

- (id)_accountsEmailAddresses;
- (BOOL)hasAccountsConfigured;

@end
