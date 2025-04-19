@class NSString;

@interface CtrAccessoryInfoType : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *ipaddr;
@property (readonly) BOOL isMatter;
@property (readonly) BOOL isBatteryPowered;

- (void).cxx_destruct;

@end
