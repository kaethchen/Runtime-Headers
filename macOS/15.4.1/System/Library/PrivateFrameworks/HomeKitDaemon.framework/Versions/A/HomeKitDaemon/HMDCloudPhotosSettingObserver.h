@class NSNotificationCenter, NSString;
@protocol HMDACAccount;

@interface HMDCloudPhotosSettingObserver : HMFObject <HMFLogging>

@property (class, readonly) HMDCloudPhotosSettingObserver *sharedInstance;

@property (readonly) id<HMDACAccount> account;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, getter=isSupported) BOOL supported;
@property (getter=isCloudPhotosEnabled) BOOL cloudPhotosEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)configure;
- (void)handleAccountStoreDidChangeNotification:(id)a0;
- (id)initWithAccount:(id)a0 notificationCenter:(id)a1 isSupported:(BOOL)a2;
- (BOOL)isCloudPhotosEnabledOnAccount;

@end
