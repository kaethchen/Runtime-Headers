@class NSString, NSImage;

@interface IKDeviceItem : NSObject

@property (copy) NSString *deviceName;
@property (copy) NSString *deviceUUID;
@property (retain) NSImage *deviceIcon;
@property long long deviceID;
@property BOOL isCamera;
@property BOOL isScanner;
@property BOOL isRoot;
@property BOOL isNetwork;

- (void)dealloc;
- (id)description;

@end
