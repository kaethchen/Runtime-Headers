@class NSNumber;
@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

@property (readonly, nonatomic) NSNumber *localSecretGeneration;

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)init;
- (void).cxx_destruct;
- (id)serialNumber;
- (id)deviceName;
- (id)deviceClass;
- (id)modelVersion;
- (id)osVersion;
- (id)hardwareModel;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (BOOL)_isHomePod;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (BOOL)hasLocalSecret;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;

@end
