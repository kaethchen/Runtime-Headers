@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VSManagedProfileConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSMutableSet *observers;

+ (id)sharedConnection;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)userToken;
- (long long)TVProviderModificationAllowed;
- (long long)UIAppInstallationAllowed;
- (long long)accountModificationAllowed;
- (long long)analyticsAllowed;
- (long long)appInstallationAllowed;
- (long long)maximumAppsRating;
- (id)providerUniqueID;
- (void)refreshProfileWithCompletion:(id /* block */)a0;

@end
