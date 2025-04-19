@class AVAudioPlayer, NSString, NSObject, AFAudioPlaybackRequest;
@protocol OS_dispatch_queue;

@interface CSSiriAudioPlaybackSessionImplAVAudioPlayerBased : NSObject <AVAudioPlayerDelegate, CSSiriAudioPlaybackSession> {
    NSObject<OS_dispatch_queue> *_queue;
    AVAudioPlayer *_player;
    BOOL _isActive;
    BOOL _isPrepared;
    id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AFAudioPlaybackRequest *request;
@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)_didNotStartWithError:(id)a0;
- (void)_didStopWithError:(id)a0;
- (void)_finalizeWithError:(id)a0;
- (void)_handleBeginInterruption;
- (void)_handleEndInterruption:(BOOL)a0;
- (BOOL)_prepareWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)_startWithOptions:(unsigned long long)a0 preparationHandler:(id /* block */)a1 executionHandler:(id /* block */)a2 finalizationHandler:(id /* block */)a3;
- (void)_stop:(BOOL)a0;
- (void)handleBeginInterruption;
- (void)handleEndInterruption:(BOOL)a0;
- (id)initWithQueue:(id)a0 request:(id)a1 options:(unsigned long long)a2;
- (void)prepareWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)startWithOptions:(unsigned long long)a0 preparationHandler:(id /* block */)a1 executionHandler:(id /* block */)a2 finalizationHandler:(id /* block */)a3;
- (void)stop:(BOOL)a0 completion:(id /* block */)a1;

@end
