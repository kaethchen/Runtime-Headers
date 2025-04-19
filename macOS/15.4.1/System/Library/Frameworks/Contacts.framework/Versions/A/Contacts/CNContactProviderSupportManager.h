@class NSString, _TtC8Contacts28CNContactProviderSupportHost, CNContainer, CNContactProviderSupportModerator;

@interface CNContactProviderSupportManager : NSObject

@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (retain, nonatomic) _TtC8Contacts28CNContactProviderSupportHost *providerHost;
@property (retain, nonatomic) CNContactProviderSupportModerator *moderator;
@property (readonly, nonatomic) CNContainer *providerContainer;

+ (void)invalidateCache;
+ (BOOL)isConnectionForContactProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0;
- (id)requestHostDomainCommand:(id)a0 error:(id *)a1;
- (BOOL)addDomain:(id)a0 error:(id *)a1;
- (BOOL)disableDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)enableDomain:(id)a0 bundleIdentifier:(id)a1 shouldSynchronize:(BOOL)a2 error:(id *)a3;
- (id)fetchExtensionCount;
- (id)fetchExtensionItems;
- (id)getActualBundleIdentifier:(id)a0;
- (BOOL)invalidateExtensionForDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)isProviderDomainEnabledWithBundleIdentifier:(id)a0;
- (id)providerContainerWithBundleIdentifier:(id)a0;
- (id)registeredDomainsForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)resetEnumerationForDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)synchronizeProviderDomainUsingSession:(id)a0 error:(id *)a1;

@end
