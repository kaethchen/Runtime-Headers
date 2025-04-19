@class SVXInstrumentationUtilities, SVXSpeechSynthesizer, SVXAFUtilitiesWrapper, SVXSpeechSynthesisResultConverter, SVXModule, SVXAceViewSpeakableTextExtractor;
@protocol MDModeProviding;

@interface SVXAceViewHandler : NSObject {
    SVXAceViewSpeakableTextExtractor *_speakableTextExtractor;
    SVXModule *_module;
    SVXInstrumentationUtilities *_instrumentationUtils;
    id<MDModeProviding> _modeProvider;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXAFUtilitiesWrapper *_afUtilitiesWrapper;
    SVXSpeechSynthesisResultConverter *_synthesisResultConverter;
}

- (void).cxx_destruct;
- (void)handleAceView:(id)a0 isExpository:(BOOL)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithModule:(id)a0 instrumentationUtils:(id)a1 modeProvider:(id)a2 speechSynthesizer:(id)a3 synthesisResultConverter:(id)a4;
- (id)initWithModule:(id)a0 instrumentationUtils:(id)a1 modeProvider:(id)a2 speechSynthesizer:(id)a3 synthesisResultConverter:(id)a4 speakableTextExtractor:(id)a5 afUtilitiesWrapper:(id)a6;

@end
