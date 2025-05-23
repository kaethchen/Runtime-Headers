@class NSString, NSArray, NSMutableSet, NSObject, HMDHAPAccessory;
@protocol OS_dispatch_queue;

@interface HMDTargetControllerManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSString *logID;
@property (nonatomic) unsigned char maximumTargets;
@property (nonatomic) unsigned long long ticksPerSecond;
@property (retain, nonatomic) NSArray *buttonConfiguration;
@property (retain, nonatomic) NSMutableSet *configuredTargets;
@property (nonatomic) BOOL configurationRefreshed;
@property (readonly, weak, nonatomic) HMDHAPAccessory *controller;
@property (readonly, nonatomic) NSArray *targetUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)logIdentifier;
- (void)__characteristicEventsReceived:(id)a0;
- (id)_dataForRemoveTargets:(id)a0 outError:(id *)a1;
- (void)_removeTargets:(id)a0;
- (void)__accessoryConfigured:(id)a0;
- (void)__accessoryConnected:(id)a0;
- (void)__accessoryDisconnected:(id)a0;
- (void)__accessoryNameUpdated:(id)a0;
- (void)__accessoryRemoved:(id)a0;
- (void)__accessoryUnconfigured:(id)a0;
- (void)__handleActiveIdentifierChange:(id)a0 forCharacteristic:(id)a1;
- (id)__refreshedConfiguration:(id)a0;
- (void)_addTargets:(id)a0;
- (void)_auditTargets:(id)a0;
- (void)_configureTargetAccessories:(id)a0 reason:(id)a1 targetAccessories:(id)a2 responseHandler:(id /* block */)a3;
- (id)_dataForAddTargets:(id)a0 outError:(id *)a1;
- (id)_dataForListTargetsWithOutError:(id *)a0;
- (id)_dataForResetTargetsWithOutError:(id *)a0;
- (id)_dataForUpdateTarget:(id)a0 name:(id)a1 buttonConfiguration:(id)a2 outError:(id *)a3;
- (void)_handleActiveIdentifierReadResponses:(id)a0;
- (void)_handleConfigureTargets:(id)a0 responseHandler:(id /* block */)a1;
- (void)_listTargetsWithCompletionHandler:(id /* block */)a0;
- (void)_notifyConfigurationRefresh:(id)a0;
- (int)_parseSupportedTargetConfiguration:(id)a0;
- (void)_postSelectionChangeNotification:(BOOL)a0 object:(id)a1 userInfo:(id)a2;
- (void)_readSupportedConfigurationWithCompletion:(id /* block */)a0;
- (void)_refreshConfigurationWithCompletion:(id /* block */)a0;
- (void)_registerForActiveIdentifierNotifications;
- (void)_resetTargets;
- (void)_saveTargetUUIDs;
- (void)_updateName:(id)a0 buttonConfiguration:(id)a1 target:(id)a2;
- (void)acknowledgeTargetControlService:(id)a0 active:(BOOL)a1;
- (void)addConfiguredTarget:(id)a0;
- (void)addTargetAccessory:(id)a0 buttonConfiguration:(id)a1;
- (void)autoConfigureTargets;
- (void)handleConfigureTargets:(id)a0 responseHandler:(id /* block */)a1;
- (id)initWithTargetControllerAccessory:(id)a0 targets:(id)a1;
- (void)refreshConfigurationWithCompletion:(id /* block */)a0;
- (void)registerForActiveIdentifierNotifications;
- (void)removeConfiguredTarget:(id)a0;
- (void)removeTargetAccessory:(id)a0;
- (void)resetConfiguredTargets;
- (id)targetConfigurationMatchingAccessory:(id)a0;
- (id)targetConfigurationMatchingIdentifier:(id)a0;
- (void)updateButtonConfigurationForTarget:(id)a0;
- (void)updateTargetAccessory:(id)a0 name:(id)a1 buttonConfiguration:(id)a2;
- (void)updateTargets:(id)a0;

@end
