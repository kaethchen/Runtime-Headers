@class SVXAFSpeakableUtteranceParserProvider, NSString, SVXInstrumentationUtilities, SVXModule, SVXAFUtilitiesWrapper, SVXSayItChildTaskProvider, SVXSAUILParseableExpressionProvider, SVXSpeechSynthesisResultConverter, SVXSpeechSynthesisUtils, _SVXRemoteExpressionParsingServiceProvider, SVXSpeechSynthesizer;

@interface SVXServiceCommandHandlerUISayIt : NSObject <SVXServiceCommandHandling> {
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXModule *_module;
    SVXInstrumentationUtilities *_instrumentationUtils;
    SVXAFSpeakableUtteranceParserProvider *_utteranceParserProvider;
    _SVXRemoteExpressionParsingServiceProvider *_expressionParsingServiceProvider;
    SVXSAUILParseableExpressionProvider *_parseableExpressionFactory;
    SVXSayItChildTaskProvider *_sayItChildTaskFactory;
    SVXAFUtilitiesWrapper *_afUtilities;
    SVXSpeechSynthesisResultConverter *_synthesisResultConverter;
    SVXSpeechSynthesisUtils *_speechSynthesisUtils;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithSpeechSynthesizer:(id)a0 module:(id)a1 instrumentationUtils:(id)a2 synthesisResultConverter:(id)a3 speechSynthesisUtils:(id)a4;
- (id)initWithSpeechSynthesizer:(id)a0 module:(id)a1 instrumentationUtils:(id)a2 synthesisResultConverter:(id)a3 speechSynthesisUtils:(id)a4 utteranceParserProvider:(id)a5 expressionParsingServiceProvider:(id)a6 parseableExpressionFactory:(id)a7 sayItChildTaskFactory:(id)a8 afUtilities:(id)a9;
- (BOOL)isCommandUUFR:(id)a0;
- (void)prepareToHandleCommand:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldDependOnCommand:(id)a0;

@end
