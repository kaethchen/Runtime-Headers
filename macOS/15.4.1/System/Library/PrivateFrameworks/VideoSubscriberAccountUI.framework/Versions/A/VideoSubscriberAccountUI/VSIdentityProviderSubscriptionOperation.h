@class NSArray, VSSubscriptionRegistrationCenter, NSOperationQueue, VSDeveloperSettingsFetchOperation, VSIdentityProvider;

@interface VSIdentityProviderSubscriptionOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter;
@property (retain, nonatomic) VSDeveloperSettingsFetchOperation *developerSettingsFetchOperation;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSArray *subscriptionsToAdd;
@property (copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)_authorizedBundleIdsFromAppDescriptions:(id)a0;
- (void)_registerSubscriptions:(id)a0 withAuthorizedBundleIdentifiers:(id)a1;
- (void)_removeSubscriptionsForBundleIdentifiers:(id)a0 withAuthorizedBundleIdentifiers:(id)a1;
- (id)initWithRegistrationCenter:(id)a0 andDeveloperSettingsFetchOperation:(id)a1;

@end
