@class NSSet, NSString, RWIMachine, RWIApplication, NSMutableDictionary;
@protocol RWIBaseManagerDelegate;

@interface RWIBaseManager : NSObject <RWIServiceConnectionDelegate, _RWIRelayToClientMessageReceiver> {
    NSMutableDictionary *_targets;
    NSMutableDictionary *_floatingDebuggables;
}

@property (weak, nonatomic) id<RWIBaseManagerDelegate> delegate;
@property (readonly, nonatomic) RWIMachine *currentMachine;
@property (readonly, nonatomic) RWIApplication *currentApplication;
@property (readonly, nonatomic) NSSet *targets;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)targets;
- (void)_addDebuggable:(id)a0;
- (void)_rpc_reportConnectedDriverList:(id)a0;
- (void)unmanageDriver:(id)a0;
- (id)unmanageMobileDeviceConnection:(id)a0;
- (void)_addApplication:(id)a0;
- (void)_addDrivable:(id)a0;
- (void)_addDriver:(id)a0;
- (void)_addFloatingDebuggable:(id)a0 forApplicationIdentifier:(id)a1;
- (void)_adoptFloatingDebuggables:(id)a0;
- (void)_fetchApplicationListingForTarget:(id)a0;
- (void)_fetchListingForApplication:(id)a0;
- (void)_removeApplication:(id)a0;
- (void)_removeDebuggable:(id)a0;
- (void)_removeDrivable:(id)a0;
- (void)_removeDriver:(id)a0;
- (void)_removeFloatingDebuggable:(id)a0;
- (void)_rpc_applicationConnected:(id)a0;
- (void)_rpc_applicationDisconnected:(id)a0;
- (void)_rpc_applicationSentData:(id)a0;
- (void)_rpc_applicationSentListing:(id)a0;
- (void)_rpc_applicationUpdated:(id)a0;
- (void)_rpc_driverConnected:(id)a0;
- (void)_rpc_driverDisconnected:(id)a0;
- (void)_rpc_driverUpdated:(id)a0;
- (void)_rpc_reportAutomaticInspectionCandidate:(id)a0;
- (void)_rpc_reportConnectedApplicationList:(id)a0;
- (void)_rpc_reportCurrentState:(id)a0;
- (void)_rpc_reportSetup:(id)a0;
- (void)_rpc_requestDriverStateChange:(id)a0;
- (void)_sendIdentifierToTarget:(id)a0;
- (void)_updateDebuggableFromListing:(id)a0 forApplication:(id)a1;
- (void)_updateDrivableFromListing:(id)a0 forApplication:(id)a1;
- (id)createServiceConnectionForTarget:(id)a0;
- (id)currentMachine;
- (void)launchApplicationWithBundleIdentifier:(id)a0 forTarget:(id)a1;
- (id)manageDriverInterface:(id)a0 forTarget:(id)a1;
- (id)manageMobileDeviceConnection:(id)a0;
- (void)manageSimulator:(id)a0;
- (id)manageTarget:(id)a0 withKey:(id)a1;
- (id)managedMobileDevice:(id)a0;
- (id)managedTargetWithKey:(id)a0;
- (id)relatedMobileDeviceMatchingDevice:(id)a0 ofClass:(Class)a1;
- (void)requestDriver:(id)a0 shouldBeActive:(BOOL)a1;
- (void)sendAutomaticInspectionEnabled:(BOOL)a0 forTarget:(id)a1;
- (void)serviceConnectionDidClose:(id)a0;
- (void)targetEstablishedServiceConnection:(id)a0;
- (void)targetHasBasicInformation:(id)a0;
- (void)targetLostServiceConnection:(id)a0;
- (void)unmanageTargetWithKey:(id)a0;
- (void)updateDriver:(id)a0 toState:(id)a1;

@end
