@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)hasPairedDevice;
- (id)deviceProductType;
- (id)deviceOsVersionIfAvailable;
- (id)deviceProductTypeIfAvailable;
- (id)deviceSystemBuildVersion;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)deviceSystemVersion;
- (id)deviceSystemVersionIfAvailable;
- (id)hasPairedDeviceIfAvailable;

@end
