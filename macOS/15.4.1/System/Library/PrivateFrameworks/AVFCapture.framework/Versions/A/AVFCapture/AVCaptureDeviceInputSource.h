@class NSString, AVCaptureDeviceInputSourceInternal;

@interface AVCaptureDeviceInputSource : NSObject {
    AVCaptureDeviceInputSourceInternal *_internal;
}

@property (readonly, nonatomic) NSString *inputSourceID;
@property (readonly, nonatomic) NSString *localizedName;

+ (void)initialize;

- (void)dealloc;

@end
