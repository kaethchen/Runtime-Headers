@class INSpeakableString, NSString;

@interface INSearchForAccountsIntent : INIntent <INSearchForAccountsIntentExport>

@property (readonly, copy) INSpeakableString *accountNickname;
@property (readonly) long long accountType;
@property (readonly, copy) INSpeakableString *organizationName;
@property (readonly) long long requestedBalanceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (void)setAccountType:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)setOrganizationName:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithAccountNickname:(id)a0 accountType:(long long)a1 organizationName:(id)a2 requestedBalanceType:(long long)a3;
- (id)parametersByName;
- (void)setAccountNickname:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setRequestedBalanceType:(long long)a0;

@end
