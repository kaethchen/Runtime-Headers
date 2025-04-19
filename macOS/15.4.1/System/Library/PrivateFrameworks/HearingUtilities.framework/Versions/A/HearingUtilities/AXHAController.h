@class HCXPCMessage, NSString, NSDictionary, HUAudioHalController, NSObject;
@protocol OS_os_transaction;

@interface AXHAController : NSObject <HUNearbyHearingAidControllerDelegate> {
    BOOL _isListening;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSString *pairedDeviceUUID;
@property (retain, nonatomic) HUAudioHalController *audioHalController;
@property (retain, nonatomic) NSDictionary *availableDevicesDescription;
@property (retain, nonatomic) NSDictionary *availableControllersPayload;
@property (retain, nonatomic) HCXPCMessage *liveListenMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)descriptionForHandoffReason:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)willSwitchUser;
- (void)cleanUp;
- (void)processPropertyUpdates:(id)a0 isLocal:(BOOL)a1;
- (void)availableRemoteControllersDidChange;
- (id)connectToControllerWithID:(id)a0;
- (void)connectToPairedDevice;
- (id)currentDeviceController;
- (id)disconnectAndForceClient:(id)a0;
- (BOOL)hearingAidsIsLEA2:(id)a0;
- (BOOL)hearingAidsPaired;
- (id)readAvailableControllers:(id)a0;
- (id)readAvailableDevices:(id)a0;
- (id)readDeviceProperty:(id)a0;
- (id)registerForAvailableDevicesUpdates:(id)a0;
- (id)registerForControlMessageUpdates:(id)a0;
- (id)registerForDeviceUpdates:(id)a0;
- (void)sendAvailabilityDidChangeNotification;
- (id)sendMessagesPriority:(id)a0;
- (void)sendUpdatesForProperties:(id)a0 excludingClient:(id)a1;
- (void)setListenForAvailableDeviceUpdates:(BOOL)a0;
- (void)setPairedHearingAidID:(id)a0;
- (void)transitionToPeer;
- (void)updateNearbyDeviceAvailabilityWithForce:(BOOL)a0;
- (id)writeDeviceProperty:(id)a0;

@end
