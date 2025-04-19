@class SVXInstrumentationUtilities, NSString, SVXAceViewHandler, _SVXAddViewsExpressionParserProvider, SVXModule, SVXDialogTransformer;

@interface SVXServiceCommandHandlerUIAddViews : NSObject <SVXServiceCommandHandling> {
    SVXModule *_module;
    SVXInstrumentationUtilities *_instrumentationUtils;
    SVXAceViewHandler *_aceViewHandler;
    SVXDialogTransformer *_dialogTransformer;
    _SVXAddViewsExpressionParserProvider *_expressionParserProvider;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithModule:(id)a0 instrumentationUtils:(id)a1 dialogTransformer:(id)a2 aceViewHandler:(id)a3 expressionParserProvider:(id)a4;
- (id)initWithSpeechSynthesizer:(id)a0 module:(id)a1 instrumentationUtils:(id)a2 modeProvider:(id)a3 dialogTransformer:(id)a4 synthesisResultConverter:(id)a5;
- (BOOL)isCommandUUFR:(id)a0;
- (void)prepareToHandleCommand:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldDependOnCommand:(id)a0;

@end
