@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManagerInternal : NSObject

@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter;

- (id)init;
- (void).cxx_destruct;
- (void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(id)a0 domainIdentifiers:(id)a1 maximumExpirationLimit:(double)a2 completionHandler:(id /* block */)a3;
- (void)registerSubscriptionServiceForURL:(id)a0 withSubscriptionInfo:(id)a1 expirationDate:(id)a2;
- (void)removeSubscriptionServiceForURL:(id)a0;
- (void)removeWebSubscriptionServicesCreatedAfterDate:(id)a0;

@end
