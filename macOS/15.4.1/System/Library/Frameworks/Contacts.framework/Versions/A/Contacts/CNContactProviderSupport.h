@class CNContactStore, NSString, CNXPCContactsSupport, CNUnfairLock, CNContactProviderSupportSession;

@interface CNContactProviderSupport : NSObject

@property (class, readonly) CNContactProviderSupport *sharedInstance;

@property (retain, nonatomic) CNContactStore *providerStore;
@property (retain, nonatomic) CNXPCContactsSupport *contactsSupport;
@property (readonly) CNUnfairLock *lock;
@property (retain, nonatomic) CNContactProviderSupportSession *currentSession;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic, getter=isDomainEnabled) BOOL domainEnabled;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy, nonatomic) NSString *domainContainerIdentifier;

+ (BOOL)addDomain:(id)a0 error:(id *)a1;
+ (long long)allDomainsCountWithError:(id *)a0;
+ (id)allDomainsWithError:(id *)a0;
+ (BOOL)disableDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
+ (BOOL)enableDomain:(id)a0 bundleIdentifier:(id)a1 shouldSynchronize:(BOOL)a2 error:(id *)a3;
+ (id)registeredDomainsWithError:(id *)a0;
+ (BOOL)removeDomain:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)endSession;
- (BOOL)addDomain:(id)a0 error:(id *)a1;
- (long long)allDomainsCountWithError:(id *)a0;
- (id)allDomainsWithError:(id *)a0;
- (void)disableDomainWithCompletionHandler:(id /* block */)a0;
- (void)enableDomainWithCompletionHandler:(id /* block */)a0;
- (id)initWithDomainIdentifier:(id)a0;
- (BOOL)instanceDisableDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)instanceEnableDomain:(id)a0 bundleIdentifier:(id)a1 shouldSynchronize:(BOOL)a2 error:(id *)a3;
- (void)invalidateExtensionWithCompletionHandler:(id /* block */)a0;
- (BOOL)isSessionRunning;
- (id)registeredDomainsWithError:(id *)a0;
- (BOOL)removeDomain:(id)a0 error:(id *)a1;
- (void)requestProviderDomainCommand:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requestProviderDomainCommand:(id)a0 error:(id *)a1;
- (void)resetEnumerationWithCompletionHandler:(id /* block */)a0;
- (void)startSession:(id)a0;
- (void)synchronizeDomainUsingSession:(id)a0 completionHandler:(id /* block */)a1;

@end
