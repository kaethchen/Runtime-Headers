@class NSString, AVCaptureDeviceInputSourceInternal_Tundra;

@interface AVCaptureDeviceInputSource_Tundra : NSObject {
    AVCaptureDeviceInputSourceInternal_Tundra *_internal;
}

@property (readonly, nonatomic) NSString *inputSourceID;
@property (readonly, nonatomic) NSString *localizedName;

+ (void)initialize;
+ (id)inputSourceWithID:(id)a0 localizedName:(id)a1;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceInputSourceID:(id)a0 localizedName:(id)a1;

@end
