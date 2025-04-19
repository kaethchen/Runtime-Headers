@class NSMutableDictionary, CKEntitlements, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CKProcessScopedStateManager : NSObject <CKXPCProcessScopedClient> {
    BOOL _systemIsAvailable;
    BOOL _hasDeferredAuthorizationChangeNotice;
    BOOL _hasDeferredAccountChangeNotice;
    NSHashTable *_registeredContainers;
    CKEntitlements *_baseEntitlements;
    CKEntitlements *_resolvedEntitlements;
    NSMutableDictionary *_fakeEntitlements;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)__refreshAccountAccessAuthorization;
- (void)__registerForAccountChangeNotifications;
- (void)__registerForAuthorizationChangeNotifications;
- (void)clearFakeEntitlementForKey:(id)a0;
- (void)connectionBecameInvalid:(id)a0;
- (void)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 reply:(id /* block */)a2;
- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (void)noteSystemIsAvailable;
- (void)setFakeEntitlement:(id)a0 forKey:(id)a1;
- (id)untrustedEntitlements;

@end
