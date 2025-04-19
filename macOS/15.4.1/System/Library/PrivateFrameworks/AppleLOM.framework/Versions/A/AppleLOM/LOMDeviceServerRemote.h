@interface LOMDeviceServerRemote : LOMDeviceServerConsolidated {
    unsigned int _assertionID;
    unsigned long long _smcNotificationHandle;
}

- (id)description;
- (BOOL)start;
- (id)initWithServiceName:(id)a0;
- (void)stop;
- (id)serialize;
- (BOOL)remove:(id)a0 error:(out id *)a1;
- (id)loadCertsAndKey;
- (BOOL)enableSMC:(BOOL)a0;
- (id)getBridgeOSVersion;
- (id)getCompatibleBridgeOSVersion:(id)a0;
- (BOOL)getInfo:(id *)a0 error:(out id *)a1;
- (id)getVersionData;
- (id)getVolumeUUID;
- (void)handleBootStateNotification:(unsigned char)a0;
- (void)handleSMCNotification:(unsigned char)a0 bootState:(unsigned char)a1;
- (BOOL)install:(id)a0 error:(out id *)a1;
- (BOOL)registerBootVolumeNotification;
- (BOOL)setupNWStack:(id)a0;
- (BOOL)shouldUpdateKeychain:(id)a0;
- (void)takeIdleSleepPowerAssertion;
- (BOOL)updateBootVolumeUUID:(BOOL)a0;

@end
