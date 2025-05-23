@class SVXSessionManager, NSString, _SVXPlayAudioExpressionParserProvider, SVXModule;

@interface _SVXServiceCommandHandlerSmsPlayAudio : NSObject <SVXServiceCommandHandling> {
    SVXSessionManager *_sessionManager;
    SVXModule *_module;
    _SVXPlayAudioExpressionParserProvider *_expressionParserProvider;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithSessionManager:(id)a0 module:(id)a1;
- (id)initWithSessionManager:(id)a0 module:(id)a1 expressionParserProvider:(id)a2;
- (BOOL)isCommandUUFR:(id)a0;

@end
