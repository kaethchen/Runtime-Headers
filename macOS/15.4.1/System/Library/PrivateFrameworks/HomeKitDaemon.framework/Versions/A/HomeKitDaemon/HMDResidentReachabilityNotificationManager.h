@class NSString, HMFTimer, HMDRemoteDeviceMonitor, HMDBulletinBoard, HMDResidentReachabilityContext, HMDIDSServerBag, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) BOOL hasReachableResidents;
@property (readonly) BOOL anyEnabledResidentSupportsReachabilityNotifications;
@property (readonly) BOOL hasMultipleResidents;
@property (readonly, copy) id /* block */ timerFactory;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDIDSServerBag *idsServerBag;
@property (retain) HMFTimer *evaluateDebounceTimer;
@property (retain) HMFTimer *unreachableBulletinDebounceTimer;
@property (retain) HMDResidentReachabilityContext *reachabilityContext;
@property BOOL notificationEnabled;
@property double primaryResidentUnreachableTime;
@property (retain, nonatomic) HMFTimer *userPreferredReachabilityBulletinDebounceTimer;
@property (retain, nonatomic) NSString *previousPrimary;
@property (retain, nonatomic) NSString *electedPrimary;
@property (nonatomic) BOOL isUserPreferredReachable;
@property (retain) HMDResidentReachabilityContext *userPreferredReachabilityContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createTimer;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)_updatePrimaryResidentLostTime:(id)a0;
- (BOOL)shouldPostReachableNotification;
- (void)_evaluateReachabilityBulletinAndPostponeUnreachableBulletin:(BOOL)a0;
- (void)_handleNetworkReachabilityChange:(id)a0;
- (void)_handleResidentAdded:(id)a0;
- (void)_handleResidentRemoved:(id)a0;
- (void)_handleResidentUpdated:(id)a0;
- (void)_handleUserPreferredReachabilityBulletinDebounceTimer;
- (void)_handleUserPreferredResidentReachable:(id)a0;
- (void)_startDebounceTimer;
- (void)_startUnreachableBulletinDebounceTimer;
- (void)configureWithHome:(id)a0 deviceMonitor:(id)a1;
- (void)configureWithHome:(id)a0 deviceMonitor:(id)a1 notificationCenter:(id)a2 idsServerBag:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithResidentReachabilityContext:(id)a0 workQueue:(id)a1;
- (id)initWithResidentReachabilityContext:(id)a0 workQueue:(id)a1 timerFactory:(id /* block */)a2 bulletinBoard:(id)a3;
- (BOOL)shouldPostUnreachableNotification;
- (BOOL)shouldPostUserPreferredReachableNotification;
- (BOOL)shouldPostUserPreferredUnreachableNotification;

@end
