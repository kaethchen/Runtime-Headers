@interface RTPlatform : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentPlatform;
+ (BOOL)operatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)operatingSystemNoGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromString:(id)a0;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 atLeastVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 equalToVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 noGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a1;

- (id)systemVersion;
- (id)serialNumber;
- (id)deviceClass;
- (id)productType;
- (id)buildVersion;
- (BOOL)paired;
- (unsigned long long)deviceMemorySize;
- (BOOL)internalInstall;
- (BOOL)iPhoneDevice;
- (BOOL)iPhonePlatform;
- (BOOL)isTinkerPaired;
- (BOOL)isWatchPaired;
- (BOOL)lowEndHardware;
- (BOOL)macOSPlatform;
- (BOOL)realityDevice;
- (BOOL)simulatorPlatform;
- (BOOL)supportsCoreRoutineCapability;
- (BOOL)supportsMultiUser;
- (BOOL)supportsPairedDevice;
- (BOOL)supportsScenarioTriggers;
- (id)systemModel;
- (id)userAssignedDeviceName;
- (BOOL)usesTSCForClustering;
- (BOOL)watchPlatform;

@end
