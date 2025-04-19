@class VGExternalAccessoryState, NSString, NSMutableDictionary, VGExternalAccessoryModelFilter, VGVehicleState, NSObject, VGVehicle;
@protocol VGExternalAccessoryUpdating, OS_dispatch_queue;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedAccessoriesByConnectionId;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
    VGExternalAccessoryModelFilter *_modelFilter;
}

@property (weak, nonatomic) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_identifier;
- (id)_bluetoothIdentifier;
- (BOOL)_currentStatePassesEVRoutingRequirements;
- (id)_firmwareId;
- (BOOL)_isConnectedToCarPlayAccessory;
- (BOOL)_isConnectedToElectricVehicle;
- (BOOL)_isConnectedVehicleAllowlisted;
- (id)_modelIdFromArguments:(id)a0;
- (void)_notifyDelegateWithCurrentVehicle;
- (void)_updateFromVehicleInfo:(id)a0;
- (id)_vehicleForCurrentState;
- (id)_vehicleStateForCurrentState;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (BOOL)isConnectedToVehicle:(id)a0;
- (void)listCarsWithCompletion:(id /* block */)a0;

@end
