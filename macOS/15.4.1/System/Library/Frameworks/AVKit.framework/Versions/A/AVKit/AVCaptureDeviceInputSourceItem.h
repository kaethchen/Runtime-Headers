@class NSString, AVCaptureDevice, AVCaptureDeviceInputSource;

@interface AVCaptureDeviceInputSourceItem : NSObject

@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly) AVCaptureDevice *captureDevice;
@property (readonly) AVCaptureDeviceInputSource *inputSource;
@property (readonly) NSString *mediaType;
@property (readonly) unsigned long long type;
@property (readonly, getter=isBuiltIn) BOOL builtIn;
@property (retain) AVCaptureDeviceInputSourceItem *associatedAudioCaptureDeviceInputSourceItem;

+ (id)_mediaTypeForSourceType:(unsigned long long)a0;
+ (BOOL)captureDevice:(id)a0 canBeUsedForInputSourceType:(unsigned long long)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 inputSource:(id)a1 type:(unsigned long long)a2 builtIn:(BOOL)a3;

@end
