@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _LTSpeakRequest : _LTTranslationRequest

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double ttsPlaybackRate;
@property (nonatomic) BOOL muteTTSBasedOnRingerSwitchIfPossible;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ audioStartHandler;

- (void).cxx_destruct;
- (id)requestContext;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_withHandlerQueue:(id /* block */)a0;
- (id)initWithLocalePair:(id)a0;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1 handlerQueue:(id)a2;
- (void)ttsAudioStarted:(id)a0 duration:(double)a1;

@end
