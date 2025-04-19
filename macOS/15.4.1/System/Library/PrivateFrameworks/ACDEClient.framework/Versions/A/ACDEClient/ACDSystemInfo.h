@class ACFFingerPrint, NSString;

@interface ACDSystemInfo : NSObject <ACMSystemInfoProtocol> {
    ACFFingerPrint *_fingerPrint;
}

@property (readonly) ACFFingerPrint *fingerPrint;
@property (readonly, nonatomic) NSString *MACAddress;
@property (readonly, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifier;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) BOOL isRunningOnModernMobileSystem;
@property (readonly, nonatomic) BOOL isTouchIDAvailable;
@property (readonly, nonatomic) BOOL isRetailDevice;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL isPreRelease;

- (void)dealloc;
- (BOOL)isTouchIDAvailable;
- (BOOL)isRetailDevice;

@end
