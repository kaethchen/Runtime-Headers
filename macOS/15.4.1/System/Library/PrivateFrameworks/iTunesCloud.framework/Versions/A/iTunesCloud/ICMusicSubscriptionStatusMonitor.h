@class NSNumber, NSMutableDictionary, NSMutableArray, NSArray, ICMusicSubscriptionStatus, ICUserIdentityContext, ICUserIdentity;

@interface ICMusicSubscriptionStatusMonitor : NSObject {
    ICUserIdentityContext *_identityContext;
    NSNumber *_DSID;
    NSMutableDictionary *_observers;
    NSMutableArray *_accessHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_notificationHandlers;
}

@property (readonly, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;

+ (id)sharedMonitorForIdentity:(id)a0;
+ (id)_sharedInstanceManager;
+ (id)sharedMonitorForIdentity:(id)a0 identityStore:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)beginObservingSubscriptionStatusWithHandler:(id /* block */)a0;
- (void)endObservingSubscriptionStatusWithToken:(id)a0;
- (void)refreshSubscriptionStatus;
- (void)_endObservingSubscriptionStatus;
- (void)_beginObservingSubscriptionStatus;
- (id)_effectiveIdentityForRequestingSubscriptionStatus;
- (void)_handleActiveUserIdentityDidChangeRemoteNotification;
- (void)_handleHomeManagerPropertiesDidChange:(id)a0;
- (void)_handleSubscriptionStatusDidChange:(id)a0;
- (void)_handleUserIdentityStoreDidChange:(id)a0;
- (id)_initWithIdentityContext:(id)a0;
- (void)_invokeAccessHandlersWithSubscriptionStatus:(id)a0 error:(id)a1;
- (BOOL)_isMonitoringSubscriptionStatusForAutoupdatingIdentity;
- (void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_updateWithSubscriptionStatus:(id)a0;
- (void)performBlockWithLoadedSubscriptionStatus:(id /* block */)a0;

@end
