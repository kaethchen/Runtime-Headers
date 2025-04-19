@class HGConfigurationInternal, HGMLConfiguration, HGAudioFeedbackConfiguration;

@interface HGConfiguration : NSObject

@property (retain, nonatomic) HGConfigurationInternal *internal;
@property (retain, nonatomic) HGMLConfiguration *mlConfig;
@property (retain, nonatomic) HGAudioFeedbackConfiguration *audioFeedbackConfig;
@property (nonatomic) BOOL requestPartGestures;
@property (nonatomic) BOOL enableRawDataLogging;
@property (nonatomic) BOOL singleDelivery;

- (id)init;
- (void).cxx_destruct;

@end
