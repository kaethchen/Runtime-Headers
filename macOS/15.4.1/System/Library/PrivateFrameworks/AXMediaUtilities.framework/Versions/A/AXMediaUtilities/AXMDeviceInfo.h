@interface AXMDeviceInfo : NSObject

+ (id)sharedInstance;

- (id)_init;
- (id)privilegedSystemReport;
- (id)systemReport;

@end
