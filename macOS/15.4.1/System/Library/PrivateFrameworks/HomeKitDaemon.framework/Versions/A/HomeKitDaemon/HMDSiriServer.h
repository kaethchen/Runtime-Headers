@class HMDSiriAccessoryMonitor, HMDSiriRemoteInputServer, HMDSiriSession, NSString, NSObject, HMDNotificationRegistration;
@protocol OS_dispatch_queue;

@interface HMDSiriServer : NSObject <HMDDataStreamBulkSendListener, HMDSiriAccessoryMonitorDelegate, HMFLogging>

@property (class, readonly) HMDSiriServer *sharedSiriServer;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration;
@property (readonly, nonatomic) HMDSiriAccessoryMonitor *siriAccessoryMonitor;
@property (retain, nonatomic) HMDSiriRemoteInputServer *siriInputServer;
@property (retain, nonatomic) HMDSiriSession *siriUISession;
@property (nonatomic) unsigned int targetControlIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)registerForMessages;
- (void)_checkSiriSupportByAccessory:(id)a0;
- (id)_getBestAudioCodecConfiguration:(id)a0;
- (id)_getSiriSessionForAccessory:(id)a0;
- (void)_handleDisconnectForAccessory:(id)a0;
- (BOOL)_isAudioCodecSupported:(id)a0;
- (BOOL)_isSiriInputType:(long long)a0 supportedOnAccessory:(id)a1 siriAudioConfiguration:(id)a2;
- (void)_maybeTearDownSiriPlugin;
- (void)_removeDataStreamListenerForAccessory:(id)a0;
- (void)_setupSiriPlugin;
- (void)_setupSiriUIContext;
- (void)_tearDownSiriUIContext;
- (void)accessory:(id)a0 didCloseDataStreamWithError:(id)a1;
- (void)accessory:(id)a0 didReceiveBulkSessionCandidate:(id)a1;
- (void)accessoryDidStartListening:(id)a0;
- (void)handleAccessoryConfigured:(id)a0;
- (void)handleAccessoryHasBulkSendDataStream:(id)a0;
- (void)handleAccessoryRemoved:(id)a0;
- (void)handleAccessoryUnconfigured:(id)a0;
- (void)monitor:(id)a0 needsSiriCapabilityForAccessory:(id)a1;
- (void)monitor:(id)a0 willAllowAccessoryForDragonSiri:(id)a1;
- (void)monitor:(id)a0 willNotAllowAccessoryForDragonSiri:(id)a1;
- (void)monitorHasNoAccessoriesForDragonSiri:(id)a0;
- (void)setTargetableAccessory:(id)a0 withControllers:(id)a1;

@end
