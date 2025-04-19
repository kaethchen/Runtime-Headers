@class NSString, APSConnection, HDCloudSyncCoordinator, NSObject, _HKBehavior;
@protocol OS_dispatch_queue;

@interface HDCloudSyncSubscriptionNotificationHandler : NSObject <APSConnectionDelegate, HDProfileReadyObserver, HDHealthDaemonReadyObserver> {
    HDCloudSyncCoordinator *_coordinator;
    _HKBehavior *_behavior;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    APSConnection *_apsConnection;
    double _lock_lastTinkerDataDownloadTriggerTime;
    double _lock_lastTinkerDataUploadTriggerTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (id)_copyAPSEntitlement;
- (void)_enableAPSPush;
- (void)_queue_fetchAPSEnvironmentStringWithHandler:(id /* block */)a0;
- (void)_queue_handleIncomingCloudKitPushNotification:(id)a0;
- (void)_queue_handleIncomingDataDownloadAvailableNotificationOnGuardianDevices;
- (void)_queue_handleIncomingDataDownloadAvailableNotificationOnTinkerDevices;
- (void)_queue_handleIncomingDataUploadRequest;
- (void)_queue_handleIncomingPrimaryMedicalIDDataAvailableForDownloadNotification;
- (void)_queue_handleIncomingSharedSummaryDataAvailableForDownloadNotification;
- (void)_queue_handleIncomingTinkerMedicalIDDataAvailableForDownloadNotification;
- (void)_queue_handleMedicationsStateUpdatedNotification;
- (void)_queue_handleSubscriptionWithID:(id)a0;
- (BOOL)_shouldTriggerDownload;
- (BOOL)_shouldTriggerUpload;
- (void)daemonReady:(id)a0;
- (id)initWithCoordinator:(id)a0 behavior:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)resetSubscriptionSyncBackoff;
- (void)triggerSubscription:(id)a0;

@end
