@class AVPlayer, NSString, AVPlayerItem, NSObject, AFAudioPlaybackRequest;
@protocol OS_dispatch_queue;

@interface CSSiriAudioPlaybackSessionImplAVPlayerBased : NSObject <CSSiriAudioPlaybackSession> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isActive;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    id /* block */ _completion;
}

@property (readonly, nonatomic) AFAudioPlaybackRequest *request;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_prepareWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_finalizeWithError:(id)a0;
- (void)_handleBeginInterruption;
- (void)_handleEndInterruption:(BOOL)a0;
- (void)_resetPlayerItem;
- (void)_startWithOptions:(unsigned long long)a0 preparationHandler:(id /* block */)a1 executionHandler:(id /* block */)a2 finalizationHandler:(id /* block */)a3;
- (void)_stop:(BOOL)a0;
- (void)handleBeginInterruption;
- (void)handleEndInterruption:(BOOL)a0;
- (id)initWithQueue:(id)a0 request:(id)a1 options:(unsigned long long)a2;
- (void)playerItemDidPlayToEndTime:(id)a0;
- (void)playerItemFailedToPlayToEndTime:(id)a0;
- (void)prepareWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)startWithOptions:(unsigned long long)a0 preparationHandler:(id /* block */)a1 executionHandler:(id /* block */)a2 finalizationHandler:(id /* block */)a3;
- (void)stop:(BOOL)a0 completion:(id /* block */)a1;

@end
