@class NSString;

@interface AKDeviceInfo : NSObject

@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) long long osTheme;

+ (id)deviceInfo;

- (id)init;
- (void).cxx_destruct;

@end
