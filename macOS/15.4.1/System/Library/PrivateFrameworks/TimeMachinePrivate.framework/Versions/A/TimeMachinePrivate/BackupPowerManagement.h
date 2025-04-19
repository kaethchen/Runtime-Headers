@class NSNumber;

@interface BackupPowerManagement : NSObject

@property (retain) NSNumber *batteryPercentRemainingHighWaterMark;
@property (readonly) BOOL hasUnlimitedPower;
@property (readonly) NSNumber *batteryPercentRemaining;
@property (readonly) int powerState;

+ (id)backupPowerManager;

- (void).cxx_destruct;
- (BOOL)shouldContinueBackupInMode:(unsigned long long)a0 allowBackUpOnBattery:(BOOL)a1 error:(id *)a2;
- (BOOL)shouldStartBackupInMode:(unsigned long long)a0 allowBackUpOnBattery:(BOOL)a1 error:(id *)a2;

@end
