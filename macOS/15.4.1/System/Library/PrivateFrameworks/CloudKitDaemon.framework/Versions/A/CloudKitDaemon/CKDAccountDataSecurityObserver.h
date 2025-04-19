@class NSError, CKDLogicalDeviceContext, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface CKDAccountDataSecurityObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForManateeStatus;
@property (nonatomic) long long cachedWalrusStatusForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForWalrusStatus;
@property (retain, nonatomic) id<NSObject> walrusStatusChangeObserver;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)sharedWalrusController;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0;
- (void)postClouddWalrusUpdateNotification;
- (long long)_fetchManateeAvailability:(id *)a0;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (BOOL)accountSupportsManatee:(id)a0;
- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (void)handleWalrusStateChanged;
- (BOOL)isManateeAvailableForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 error:(id *)a2;
- (BOOL)isWalrusEnabledForAccount:(id)a0 allowBlockingFetch:(BOOL)a1;
- (BOOL)isWalrusEnabledForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 allowBlockingFetch:(BOOL)a2 error:(id *)a3;
- (void)manateeStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)walrusStatusForAccount:(id)a0 isSecondaryAccount:(BOOL)a1 checkCache:(BOOL)a2 allowFetch:(BOOL)a3 completionHandler:(id /* block */)a4;

@end
