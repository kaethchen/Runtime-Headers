@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
    NSDictionary *_adaptedVideoCompressionProperties;
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
    BOOL _shouldPrepareEncodedSampleBuffersForPaddedWrites;
}

@property (readonly, nonatomic) unsigned int videoCodecType;
@property (readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property (readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property (nonatomic) BOOL shouldPrepareEncodedSampleBuffersForPaddedWrites;

+ (BOOL)_validateVideoCompressionProperties:(id)a0 againstSupportedPropertyDictionary:(id)a1 forCodecType:(id)a2 exceptionReason:(id *)a3;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (void)dealloc;
- (int)height;
- (int)width;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (id)cleanApertureDictionary;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)initWithAVVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (id)initWithTrustedAVVideoSettingsDictionary:(id)a0;
- (id)pixelAspectRatioDictionary;
- (BOOL)willYieldCompressedSamples;

@end
