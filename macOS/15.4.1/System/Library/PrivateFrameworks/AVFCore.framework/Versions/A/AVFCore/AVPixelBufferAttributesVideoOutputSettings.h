@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) NSString *fieldMode;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (void)dealloc;
- (int)height;
- (int)width;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (id)cleanApertureDictionary;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;
- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (id)pixelAspectRatioDictionary;
- (BOOL)willYieldCompressedSamples;

@end
