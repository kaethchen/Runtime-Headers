@class NSString, PXObservable, MPMusicPlayerApplicationController, PXExpectation, NSObject;
@protocol OS_dispatch_queue;

@interface _PXAppleMusicPlayerController : PXObservable <PXAppleMusicPlayerController, PXMutableAppleMusicPlayerController> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queue_itemStoreID;
    NSString *_queue_currentClientIdentifier;
    NSString *_queue_windowSceneID;
    MPMusicPlayerApplicationController *_queue_player;
    float _queue_volume;
    id /* block */ _queue_preparationCompletionHandler;
    PXExpectation *_queue_preparationExpectation;
    id _playbackStateChangeObserver;
    id _playbackDidEndObserver;
    long long _preparationSignpostID;
    BOOL _playerRespondsToRelativeVolume;
}

@property (readonly, nonatomic) PXObservable *observable;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) BOOL isAtEnd;
@property (readonly, nonatomic) double volume;
@property (copy) NSString *currentClientIdentifier;
@property (copy, nonatomic) NSString *windowSceneID;

+ (BOOL)canApplyWorkaroundFor80278485;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)pause;
- (void)play;
- (void)setVolume:(double)a0;
- (void)setPlaybackState:(long long)a0;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)a0;
- (void)setIsAtEnd:(BOOL)a0;
- (void)_handleDidPrepareToPlayWithExpectation:(id)a0 error:(id)a1;
- (void)_handleItemPlaybackDidEnd;
- (void)_handlePlaybackStateDidChange;
- (void)_queue_callPreparationCompletionHandler:(BOOL)a0 error:(id)a1;
- (void)_queue_handleDidPrepareToPlayWithError:(id)a0;
- (void)_queue_handlePreparationExpectationFulfilled:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_queue_setCurrentClientIdentifier:(id)a0;
- (void)_queue_setWindowSceneID:(id)a0;
- (void)clientIdentifier:(id)a0 becomeCurrentClientIfNeeded:(BOOL)a1 performAsyncPlayerTransaction:(id /* block */)a2;
- (void)clientIdentifier:(id)a0 performAsyncPlayerTransaction:(id /* block */)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })fetchCurrentTime;
- (void)setItemWithStoreID:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
