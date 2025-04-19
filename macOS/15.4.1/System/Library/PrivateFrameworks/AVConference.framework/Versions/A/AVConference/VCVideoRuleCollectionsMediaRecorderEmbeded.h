@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsMediaRecorderEmbeded : VCVideoRuleCollectionsMediaRecorder {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (BOOL)isSupportedDeviceClass;
- (id)initWithHardwareSettings:(id)a0;
- (BOOL)isSupportedChipID;
- (unsigned char)mediaRecorderCapabilities;
- (id)mediaRecorderImageTypes;
- (id)mediaRecorderVideoCodecs;

@end
