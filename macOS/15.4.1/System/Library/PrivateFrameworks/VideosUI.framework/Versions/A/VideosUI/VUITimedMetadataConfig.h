@class VUITimedMetadataVisualSmoothingConfig, VUITimedMetadataAudioSmoothingConfig;

@interface VUITimedMetadataConfig : NSObject

@property (retain, nonatomic) VUITimedMetadataVisualSmoothingConfig *visualSmoothingConfig;
@property (retain, nonatomic) VUITimedMetadataAudioSmoothingConfig *audioSmoothingConfig;

- (id)init;
- (void).cxx_destruct;

@end
