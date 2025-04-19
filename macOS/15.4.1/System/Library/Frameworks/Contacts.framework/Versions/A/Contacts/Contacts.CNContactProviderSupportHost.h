@class NSString, NSArray, NSError, CNContactProviderSupportDomain, CNContactProviderSupportSession;

@interface Contacts.CNContactProviderSupportHost : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_contactStore;
    void /* unknown type, empty encoding */ ContactProviderErrorDomain;
}

- (id)init;
- (void).cxx_destruct;
- (void)addDomain:(CNContactProviderSupportDomain *)a0 bundleIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)disableDomainFor:(NSString *)a0 bundleIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)enableDomainFor:(NSString *)a0 bundleIdentifier:(NSString *)a1 showPrompt:(BOOL)a2 shouldSynchronize:(BOOL)a3 completionHandler:(void (^)(NSError *))a4;
- (id)extensionCount;
- (id)extensionItems;
- (void)invalidateExtensionFor:(NSString *)a0 bundleIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (id)isExtensionEnabledWith:(id)a0;
- (id)providerContainerFor:(id)a0;
- (void)registeredDomainsFor:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)removeDomainFor:(NSString *)a0 bundleIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)resetEnumerationFor:(NSString *)a0 bundleIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)synchronizeUsing:(CNContactProviderSupportSession *)a0 bundleIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;

@end
