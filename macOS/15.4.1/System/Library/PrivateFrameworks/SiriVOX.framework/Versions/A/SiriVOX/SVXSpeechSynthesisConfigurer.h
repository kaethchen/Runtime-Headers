@class SVXSynthesisVoiceConfigurer;

@interface SVXSpeechSynthesisConfigurer : NSObject {
    SVXSynthesisVoiceConfigurer *_voiceConfigurer;
}

- (void).cxx_destruct;
- (id)initWithVoiceConfigurer:(id)a0;
- (id)synthesisRequestForContext:(id)a0 preferences:(id)a1;
- (id)synthesisRequestForText:(id)a0 voice:(id)a1;

@end
