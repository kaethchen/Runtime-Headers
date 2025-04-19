@interface AOSUID2DEncryptionFlowContext : CDPUIDeviceToDeviceEncryptionFlowContext

@property (nonatomic) unsigned long long contextType;

+ (id)contextWithType:(unsigned long long)a0;
+ (id)contextWithType:(unsigned long long)a0 altDSID:(id)a1 hostWindow:(id)a2;
+ (id)contextWithType:(unsigned long long)a0 hostWindow:(id)a1;

- (id)initWithType:(unsigned long long)a0;
- (id)featureName;
- (long long)deviceToDeviceEncryptionUpgradeType;
- (long long)deviceToDeviceEncryptionUpgradeUIStyle;
- (id)initWithType:(unsigned long long)a0 altDSID:(id)a1 hostWindow:(id)a2;
- (id)initWithType:(unsigned long long)a0 hostWindow:(id)a1;
- (BOOL)requiresSynchronousRepair;

@end
