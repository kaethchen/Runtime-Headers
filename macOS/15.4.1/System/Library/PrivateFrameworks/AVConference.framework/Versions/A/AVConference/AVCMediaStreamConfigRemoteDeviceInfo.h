@class NSString;

@interface AVCMediaStreamConfigRemoteDeviceInfo : NSObject

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceUID;
@property (copy, nonatomic) NSString *modelUID;

- (void)dealloc;
- (id)init;

@end
