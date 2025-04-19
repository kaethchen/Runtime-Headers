@class NSObject, HMDAppleAccountManager, NSString, NSNotificationCenter, NSNumber, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface HMDDefaultResidentDeviceManagerRoarV3DataSource : NSObject <HMDResidentDeviceManagerRoarV3DataSource>

@property (readonly) NSUserDefaults *userDefaults;
@property (readonly) NSNumber *primaryResidentPeriodicReassertDurationSeconds;
@property (readonly) NSNumber *primaryResidentPeriodicReassertSlopDurationSeconds;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly) BOOL isResidentCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)createElectionAddOnWithContext:(id)a0;
- (id)createBackingStoreForHome:(id)a0;
- (id)createPrimaryResidentDiscoveryManagerWithQueue:(id)a0;
- (id)createResidentLocationHandlerForHome:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;
- (id)createResidentSelectionManagerWithContext:(id)a0;
- (id)createResidentStatusChannelForHome:(id)a0 queue:(id)a1;
- (id)firstCloudKitImportFuture;
- (id)idsServerBagForHome:(id)a0;
- (id)logIdentifierForHome:(id)a0;
- (id)timerProvider;

@end
