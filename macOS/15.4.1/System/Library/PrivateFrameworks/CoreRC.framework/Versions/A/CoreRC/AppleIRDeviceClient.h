@interface AppleIRDeviceClient : CoreIRDeviceClient

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (BOOL)isAppleRemote;
- (BOOL)pairAppleRemote:(id *)a0;
- (BOOL)unpairAppleRemote:(id *)a0;

@end
