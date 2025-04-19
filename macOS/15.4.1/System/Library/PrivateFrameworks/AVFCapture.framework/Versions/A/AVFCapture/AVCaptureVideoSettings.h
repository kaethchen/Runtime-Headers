@class AVVideoOutputSettings;

@interface AVCaptureVideoSettings : AVCaptureOutputSettings

@property (readonly, nonatomic) AVVideoOutputSettings *avVideoOutputSettings;

- (void)dealloc;
- (id)cleanApertureDictionary;
- (id)outputSettingsDictionary;
- (id)pixelAspectRatioDictionary;
- (id)initWithTrustedVideoSettingsDictionary:(id)a0;
- (id)initWithVideoSettingsDictionary:(id)a0;

@end
