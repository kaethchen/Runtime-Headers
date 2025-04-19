@class ASDSubscriptionEntitlements;
@protocol MTSubscriptionEntitlementsObserverDelegate;

@interface MTSubscriptionEntitlementsObserver : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _subscriptionsEntitlementsLock;
}

@property (retain, nonatomic) ASDSubscriptionEntitlements *entitlements;
@property (weak, nonatomic) id<MTSubscriptionEntitlementsObserverDelegate> delegate;

- (void).cxx_destruct;
- (void)entitlementsDidChange:(id)a0;
- (id)initWithDelegate:(id)a0 onQueue:(id)a1;

@end
