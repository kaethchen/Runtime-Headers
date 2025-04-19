@class SiriTTSPreviewRequest, SiriTTSServiceSession, NSObject;
@protocol OS_dispatch_queue;

@interface SiriUIVoicePreviewManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewPlaybackQueue;
@property (retain, nonatomic) SiriTTSServiceSession *voicePreviewPlayer;
@property (retain, nonatomic) SiriTTSPreviewRequest *previewRequest;
@property long long mode;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (void)_executeCompletionBlock;
- (void)_executePreviewForVoice:(id)a0;
- (void)playPreviewForVoice:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
