@class SVXSpeechSynthesisConfigurationStateManager, SVXSynthesisVoiceConfigurer;

@interface SVXSpeechRequestConfigurer : NSObject {
    SVXSpeechSynthesisConfigurationStateManager *_configurationManager;
    SVXSynthesisVoiceConfigurer *_voiceConfigurer;
}

- (void).cxx_destruct;
- (id)initWithConfigurationManager:(id)a0 voiceConfigurer:(id)a1;
- (id)speechRequestForContext:(id)a0 preferences:(id)a1;

@end
