@class NSUUID, NSString, NSSet, HMFMessageDispatcher, NSObject, HMDActiveXPCClientConnectionsManager, HMDAccessory, HMDSymptomManager;
@protocol OS_dispatch_queue;

@interface HMDAccessorySymptomHandler : HMFObject <HMDAccessorySymptomsDelegate, HMDActiveXPCClientConnectionsManagerDelegate, HMFLogging, HMFMessageReceiver>

@property (readonly, copy) NSString *logIdentifier;
@property (readonly) HMDSymptomManager *symptomManager;
@property (readonly) HMDActiveXPCClientConnectionsManager *activeClientConnectionsManager;
@property (copy, nonatomic) NSSet *symptoms;
@property (retain, nonatomic) NSUUID *sfDeviceIdentifier;
@property (readonly, copy, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)initWithAccessory:(id)a0;
- (void)updateSymptoms:(id)a0;
- (id)_filteredSymptomsForSymptoms:(id)a0;
- (void)_handleInitiateFixMessage:(id)a0;
- (void)_handleSubscribeMessage:(id)a0;
- (void)_handleUnsubscribeMessage:(id)a0;
- (void)_notifyAllSubscribedClientConnections;
- (void)_notifySubscribedClientConnection:(id)a0;
- (void)_notifySubscribedClientConnections:(id)a0;
- (void)_registerMessages;
- (BOOL)_shouldFilterWiFiMismatchSymptomForAccessory:(id)a0;
- (void)_updateSFDeviceIdentifier:(id)a0;
- (void)clientConnectionsManager:(id)a0 didHandleActivationForClientConnection:(id)a1;
- (void)clientConnectionsManager:(id)a0 didHandleDeactivationForClientConnection:(id)a1;
- (void)handleAccessoryDeviceUpdated;
- (id)initWithAccessory:(id)a0 logIdentifier:(id)a1 symptomManager:(id)a2 activeClientConnectionsManager:(id)a3;
- (void)symptomManager:(id)a0 didChangeSFDeviceIdentifier:(id)a1;
- (void)symptomManager:(id)a0 didChangeSymptoms:(id)a1;

@end
