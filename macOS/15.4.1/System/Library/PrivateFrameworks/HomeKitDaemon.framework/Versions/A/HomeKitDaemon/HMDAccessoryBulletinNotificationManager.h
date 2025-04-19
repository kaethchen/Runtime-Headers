@class HMDAppleAccountManager, HMDNotificationConditionEvaluator, NSArray, HMFTimer, NSString, NSObject, HMDBulletinNotificationRegistrationSource, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBulletinNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly) NSArray *matterRegistrations;
@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property BOOL currentPrimary;
@property (copy) id /* block */ synchronizeWithPrimaryDebounceTimerFactory;
@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly) NSArray *serviceRegistrationsForCurrentDevice;
@property (readonly) NSArray *accessoryRegistrations;
@property (readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_characteristicBulletinRegistrationsForSource:(id)a0 context:(id)a1;
+ (id)matterBulletinRegistrationsForSource:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)requestSynchronizeRegistrations;
- (id)_characteristicsWithPassingLocalRegistrationForCharacteristics:(id)a0;
- (id)_accessoryRegistrationFromMKFRegistrationSafe:(id)a0;
- (id)_characteristicsRegistrationsFromBulletinRegistrations:(id)a0;
- (id)_devicesToNotifyForCharacteristic:(id)a0;
- (void)_handleAccessoryBulletinNotificationRegistration:(id)a0 removed:(BOOL)a1;
- (void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)a0;
- (void)_handleDeviceBecameNotPrimary;
- (void)_handleDeviceBecamePrimary;
- (void)_handlePrimaryResidentUpdateNotification:(id)a0;
- (id)_matterRegistrationsFromBulletinRegistrations:(id)a0;
- (id)_mkfLocalCharacteristicRegistrationsWithManagedObjectContext:(id)a0;
- (id)_mkfLocalServiceRegistrationsWithManagedObjectContext:(id)a0;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (id)_updateReasonsByCharacteristicFromMessage:(id)a0;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)a0 disabledRegistrations:(id)a1;
- (id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)a0;
- (id)bulletinBoardNotificationForAccessory:(id)a0 endpointID:(id)a1;
- (id)bulletinBoardNotificationForService:(id)a0;
- (id)bulletinCharacteristicsFromChangedCharacteristics:(id)a0 message:(id)a1;
- (id)characteristicsByDestinationForCharacteristics:(id)a0;
- (id)conditionsFromPredicate:(id)a0;
- (void)configureWithDeviceIsResidentCapable:(BOOL)a0;
- (id)currentHomeAccessoryUUIDs;
- (id)devicesToNotifyForMatterPath:(id)a0;
- (void)disableBulletinForAccessory:(id)a0 endpointID:(id)a1 completion:(id /* block */)a2;
- (void)disableBulletinForService:(id)a0 completion:(id /* block */)a1;
- (void)enableBulletinForAccessory:(id)a0 endpointID:(id)a1 conditions:(id)a2 completion:(id /* block */)a3;
- (void)enableBulletinForService:(id)a0 conditions:(id)a1 completion:(id /* block */)a2;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)a0;
- (void)handleDisabledRegistrations:(id)a0;
- (void)handleEnabledRegistrations:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)handleRemovedAccessory:(id)a0;
- (void)handleRemovedEndpoint:(id)a0 fromAccessory:(id)a1;
- (void)handleRemovedService:(id)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1 accountManager:(id)a2 evaluator:(id)a3 notificationCenter:(id)a4;
- (id)matterBulletinNotificationRegistrationsForMatterPath:(id)a0;
- (id)matterRegistrationFromMKFRegistrationSafe:(id)a0;
- (id)mkfLocalMatterRegistrationsWithManagedObjectContext:(id)a0;
- (void)updateEndpointRegistrationsForAccessory:(id)a0 endpoints:(id)a1;
- (void)updateRegistrationsWithEnabledCharacteristics:(id)a0 disabledCharacteristics:(id)a1 conditions:(id)a2 completion:(id /* block */)a3;
- (void)updateRegistrationsWithEnabledMatterPaths:(id)a0 disabledMatterPaths:(id)a1 conditions:(id)a2 completion:(id /* block */)a3;
- (void)updateServiceGroup:(id)a0 completion:(id /* block */)a1;

@end
