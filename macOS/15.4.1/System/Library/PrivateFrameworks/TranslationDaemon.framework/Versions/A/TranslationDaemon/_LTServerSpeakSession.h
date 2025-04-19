@class NSObject, AVAudioConverter, _LTPlaybackService;
@protocol _LTTranslationEngine, OS_dispatch_queue;

@interface _LTServerSpeakSession : NSObject {
    id<_LTTranslationEngine> _engine;
    _LTPlaybackService *_player;
    NSObject<OS_dispatch_queue> *_queue;
    AVAudioConverter *_converter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _cachedCompletionHandler;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithEngine:(id)a0;
- (void)_callCompletionAndClearIfNeeded:(id)a0 error:(id)a1;
- (id)_createTemporaryOutputFileWithURL:(id)a0;
- (BOOL)_hasCachedCompletion;
- (void)_playback:(id)a0 context:(id)a1 completion:(id /* block */)a2 audioStartHandler:(id /* block */)a3;
- (void)speak:(id)a0 context:(id)a1 completion:(id /* block */)a2 audioStartHandler:(id /* block */)a3;

@end
