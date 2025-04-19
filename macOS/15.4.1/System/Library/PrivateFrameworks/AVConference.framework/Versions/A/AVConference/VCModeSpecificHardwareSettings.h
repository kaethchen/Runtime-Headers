@class NSString;

@interface VCModeSpecificHardwareSettings : NSObject {
    unsigned int _vcpEncoderUsageMode;
    unsigned char _hardwareSettingsMode;
}

@property (readonly, nonatomic) BOOL supportVCPDecoderHEVC;
@property (readonly, nonatomic) BOOL supportVCPEncoderHEVC;
@property (readonly, nonatomic) BOOL vcpInitializedForHEVC;
@property (readonly, nonatomic) NSString *featureListStringHEVC;
@property (readonly, nonatomic) NSString *featureListStringH264;
@property (readonly, nonatomic) NSString *featureListStringFixedPositionHEVC;
@property (readonly, nonatomic) NSString *featureListStringFixedPositionH264;
@property (readonly, nonatomic) unsigned int tilesPerVideoFrame;

+ (unsigned int)encoderUsageTypeWithHardwareSettingsMode:(unsigned char)a0;

- (void)dealloc;
- (void)initFeatureListString;
- (id)initWithHardwareSettingsMode:(unsigned char)a0;
- (unsigned int)numTilesPerVideoFrameForHDRMode:(unsigned long long)a0;
- (void)vcpCodecGetPropertiesForID:(int)a0 block:(id /* block */)a1;
- (BOOL)vcpSupportsHEVCDecoder;
- (BOOL)vcpSupportsHEVCEncoder;

@end
