@class HGAudioFeedbackConfigurationInternal;

@interface HGAudioFeedbackConfiguration : NSObject

@property (retain, nonatomic) HGAudioFeedbackConfigurationInternal *internal;
@property (nonatomic) BOOL enableAudioFeedback;
@property (nonatomic) BOOL enableWaitingTone;
@property (nonatomic) BOOL invertedConfirmationAudioFeedbackMode;

- (id)init;
- (void).cxx_destruct;
- (void)enableAudioFeedbackForHeadGesture:(unsigned long long)a0 toEnable:(BOOL)a1;
- (void)enableAudioFeedbackForHeadGesturePart:(unsigned long long)a0 toEnable:(BOOL)a1;

@end
