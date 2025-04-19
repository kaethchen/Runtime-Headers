@interface HomeDataModel.CamerasModel : NSObject <HMAccessoryDelegatePrivate, HMAccessoryDelegate, HMHomeDelegate, HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ _homesToCameraControllers;
    void /* unknown type, empty encoding */ _currentHomeIdentifier;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManager:(id)a0 didUpdateAuthorizationStatus:(unsigned long long)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManagerDidUpdatePrimaryHome:(id)a0;
- (void)accessoryDidUpdateReachability:(id)a0;
- (void)accessory:(id)a0 didUpdateApplicationDataForService:(id)a1;
- (void)accessory:(id)a0 didUpdateNameForService:(id)a1;
- (void)accessory:(id)a0 service:(id)a1 didUpdateValueForCharacteristic:(id)a2;
- (void)accessoryDidUpdateApplicationData:(id)a0;
- (void)accessoryDidUpdateName:(id)a0;
- (void)accessoryDidUpdateServices:(id)a0;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;

@end
