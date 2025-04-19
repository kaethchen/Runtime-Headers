@class NSLock, ASKCommerceAccountChangeNotifier, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ASKRestrictions : NSObject {
    long long _maximumAppContentRating;
    BOOL _isRunningInStoreDemoMode;
    BOOL _hasManagedAppleID;
    BOOL _isAccountModificationRestricted;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) ASKCommerceAccountChangeNotifier *changeNotifier;
@property (retain, nonatomic) NSLock *stateLock;
@property (readonly, nonatomic) long long maximumAppContentRating;
@property (readonly, nonatomic) BOOL isAppInstallationAllowed;
@property (readonly, nonatomic) BOOL isAppUninstallationAllowed;
@property (readonly, nonatomic) BOOL isRunningInStoreDemoMode;
@property (readonly, nonatomic) BOOL hasManagedAppleID;
@property (readonly, nonatomic) BOOL isAccountModificationRestricted;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0;
- (BOOL)updateRestrictionsIfNeeded;
- (void)updateRestrictionsIfNeededAndNotify;

@end
