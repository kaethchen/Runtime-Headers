@interface CSSubscriptionManager : NSObject {
    id _internal;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterSubscriptionWithInfo:(id)a0;
- (void)registerSubscriptionWithInfo:(id)a0 expirationDate:(id)a1;
- (void)unregisterAllSubscriptions;

@end
