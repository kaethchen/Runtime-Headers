@class NSString, NSHashTable, NSObject;
@protocol BSInvalidatable;

@interface CHSServerSubscription : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject *_lock_cachedValue;
    NSHashTable *_lock_localSubscriptions;
    id<BSInvalidatable> _lock_serverSubscription;
    id /* block */ _lock_subscriptionBlock;
}

@property (retain, nonatomic) NSObject *cachedValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isSubscribed;

- (void).cxx_destruct;
- (BOOL)_lock_createServerSubscriptionIfNecessary:(id *)a0 forcing:(BOOL)a1;
- (BOOL)_lock_updateSubscription:(id *)a0;
- (id)initWithIdentifier:(id)a0 serverSubscriptionBlock:(id /* block */)a1;
- (void)noteConnectionTerminated;
- (BOOL)resubscribeIfNecessary;
- (id)subscribeWithResult:(id *)a0 error:(id *)a1;
- (id)subscribeWithResult:(id *)a0 forcingServerUpdate:(BOOL)a1 error:(id *)a2;
- (void)updateCachedValue:(id /* block */)a0;
- (id)updateSubscription:(id *)a0;

@end
