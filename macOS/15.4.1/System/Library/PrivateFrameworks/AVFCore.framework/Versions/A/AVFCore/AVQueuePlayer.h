@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

@property (nonatomic, getter=supportsAdvanceTimeForOverlappedPlayback, setter=setSupportsAdvanceTimeForOverlappedPlayback:) BOOL supportsAdvanceTimeForOverlappedPlayback;

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)a0;

- (void)dealloc;
- (id)init;
- (void)removeAllItems;
- (void)removeItem:(id)a0;
- (id)initWithItems:(id)a0;
- (id)items;
- (void)setActionAtItemEnd:(long long)a0;
- (void)_canOverlapPlaybackConditionsChanged;
- (long long)_defaultActionAtItemEnd;
- (void)advanceToNextItem;
- (BOOL)canInsertItem:(id)a0 afterItem:(id)a1;
- (BOOL)canOverlapPlaybackFromPlayerItem:(id)a0 toPlayerItem:(id)a1;
- (void)insertItem:(id)a0 afterItem:(id)a1;

@end
