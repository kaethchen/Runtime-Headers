@class NSString;

@interface GKDevice : NSObject {
    NSString *_udid;
}

@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *versionlessDeviceType;
@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *gameKitVersion;
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable;

+ (id)currentDevice;
+ (id)zeroOutVersionWithDeviceType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_initPlatform;
- (id)buildVersionHeader;
- (BOOL)isDevelopmentDevice;
- (BOOL)isFocusDevice;
- (BOOL)isProductType:(unsigned int)a0;
- (id)platformBuildVersion;
- (id)processNameHeader;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;

@end
