@class NSArray, _TtC8Contacts29CNContactProviderSupportCache;

@interface Contacts.CNContactProviderSupportCache : NSObject {
    void /* unknown type, empty encoding */ appExtensionIdentityByBundleIdentifierCache;
    void /* unknown type, empty encoding */ appExtensionIdentityCache;
    void /* unknown type, empty encoding */ containerByBundleIdentifierCache;
    void /* unknown type, empty encoding */ queryTask;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ internalExtensionBundleIDs;
    void /* unknown type, empty encoding */ isInternalExtensionsEnabled;
}

@property (class, nonatomic, readonly) _TtC8Contacts29CNContactProviderSupportCache *sharedCache;

@property (nonatomic, readonly) NSArray *cachedBundleIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;

@end
