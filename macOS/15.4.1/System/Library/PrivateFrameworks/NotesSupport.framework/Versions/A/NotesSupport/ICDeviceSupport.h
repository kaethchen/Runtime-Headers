@class NSString;

@interface ICDeviceSupport : NSObject

@property (class, readonly, nonatomic) BOOL deviceIsMac;
@property (class, readonly, nonatomic) BOOL deviceIsVision;
@property (class, readonly, nonatomic) BOOL processIsSiri;
@property (class, readonly, nonatomic) BOOL deviceSupportsMetal;
@property (class, readonly, nonatomic) NSString *deviceName;
@property (class, readonly, nonatomic) BOOL isRunningUnitTests;
@property (class, readonly, nonatomic) BOOL isRunningDuoTests;
@property (class, readonly, nonatomic) BOOL deviceIsWAPICapable;
@property (class, readonly, nonatomic) BOOL isRunningInApp;
@property (class, readonly, nonatomic) NSString *productName;
@property (class, readonly, nonatomic) NSString *productVersion;
@property (class, readonly, nonatomic) NSString *productBuildVersion;

@end
