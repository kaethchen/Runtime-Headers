@class SVXSessionManager, NSString, SVXAudioFileDecoder, SVXVoiceMailMarkAsReadHandler, SVXModule, SVXPlayVoicemailExpressionParserProvider;

@interface _SVXServiceCommandHandlerPlayVoiceMail : NSObject <SVXServiceCommandHandling> {
    SVXSessionManager *_sessionManager;
    SVXModule *_module;
    SVXPlayVoicemailExpressionParserProvider *_playVoicemailExpressionParserProvider;
    SVXAudioFileDecoder *_audioFileDecoder;
    SVXVoiceMailMarkAsReadHandler *_voiceMailMarkAsReadHandler;
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
- (id)initWithSessionManager:(id)a0 module:(id)a1 playVoicemailExpressionParserProvider:(id)a2 audioFileDecoder:(id)a3 voicemailMarkAsReadHandler:(id)a4;
- (BOOL)isCommandUUFR:(id)a0;

@end
