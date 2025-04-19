@class AVAudioOutputSettings;

@interface AVCaptureAudioSettings : AVCaptureOutputSettings

@property (readonly, nonatomic) AVAudioOutputSettings *avAudioOutputSettings;

- (void)dealloc;
- (id)outputSettingsDictionary;
- (id)initWithAudioSettingsDictionary:(id)a0;
- (id)initWithTrustedAudioSettingsDictionary:(id)a0;

@end
