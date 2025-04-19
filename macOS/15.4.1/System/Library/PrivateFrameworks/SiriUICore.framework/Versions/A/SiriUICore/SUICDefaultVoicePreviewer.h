@class NSString, NSTimer, SiriTTSServiceSession, NSMutableSet, SiriTTSPreviewRequest;
@protocol SUICVoicePreviewingDelegate;

@interface SUICDefaultVoicePreviewer : NSObject <SUICVoicePreviewing> {
    NSTimer *_outputAudioPowerUpdater;
    SiriTTSServiceSession *_session;
    NSMutableSet *previewSessions;
    SiriTTSPreviewRequest *_lastRequest;
}

@property (weak) id<SUICVoicePreviewingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)audioPowerUpdaterDidFire:(id)a0;
- (void)audioPowerUpdaterDidUpdate:(id)a0;
- (void)previewVoice:(id)a0 completion:(id /* block */)a1;
- (void)stopVoicePreview;

@end
