@class HMFTimer, NSString, NAFuture, NSNotificationCenter, CKContainer;

@interface HMBCloudCredentialsAvailabilityListener : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    CKContainer *_container;
    NSNotificationCenter *_notificationCenter;
    NAFuture *_accountAvailabilityFuture;
    NAFuture *_keychainAvailabilityFuture;
    HMFTimer *_keychainAvailabilityTimer;
}

@property (copy) id /* block */ keychainAvailabilityTimerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)handleAccountChangedNotification:(id)a0;
- (void)handleIdentityUpdateNotification:(id)a0;
- (id)initWithContainer:(id)a0 notificationCenter:(id)a1;
- (id)waitForAccountAvailability;
- (id)waitForAccountAvailabilityAndRecheckIfAlreadyAvailable;
- (id)waitForKeychainAvailability;

@end
