@interface FlashPod : DiskPod {
    BOOL _recoveryMode;
}

- (void)updateFirmware:(id)a0;
- (BOOL)ensureDiskEntry;
- (unsigned int)updaterFamilyID;
- (int)diskFormat;
- (id)initWithUpdaterID:(unsigned int)a0 familyID:(unsigned int)a1;
- (BOOL)isInRecoveryMode;
- (BOOL)mountedEnoughForUpdate;
- (BOOL)needToDisconnectAfterUpdate;
- (unsigned int)podFamilyID;
- (void)restoreFirmware:(id)a0;
- (void)setRecoveryModeService:(unsigned int)a0;
- (BOOL)supportsMultipleDiskFormats;

@end
