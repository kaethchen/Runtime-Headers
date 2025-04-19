@class SVXSpeechSynthesisUtils, SVXVoiceGenderConverter, SVXSessionUtils, SVXSpeechSynthesisConfigurationStateManager;

@interface SVXSynthesisVoiceConfigurer : NSObject {
    SVXSpeechSynthesisConfigurationStateManager *_configurationManager;
    SVXSpeechSynthesisUtils *_speechSynthesisUtils;
    SVXSessionUtils *_sessionUtils;
    SVXVoiceGenderConverter *_voiceGenderConverter;
}

- (void).cxx_destruct;
- (long long)_determineGenderWithContext:(id)a0 outputVoiceInfo:(id)a1 languageCode:(id)a2;
- (id)_determineLanguageCodeWithContext:(id)a0 outputVoiceInfo:(id)a1 preferences:(id)a2;
- (id)_determineVoiceNameWithContext:(id)a0 languageCode:(id)a1 outputVoiceInfo:(id)a2 gender:(long long)a3;
- (id)initWithConfigurationManager:(id)a0 speechSynthesisUtils:(id)a1 sessionUtils:(id)a2 voiceGenderConverter:(id)a3;
- (id)voiceForContext:(id)a0 preferences:(id)a1;

@end
