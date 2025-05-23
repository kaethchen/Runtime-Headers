@class NSString, NSArray, MPCPlaybackIntent, NSMutableDictionary, MPAVItem, NSMutableArray, NSMapTable, MPCPlaybackEngineEventStream;
@protocol MPCQueueControllerBehaviorMusicSharePlay, MPCQueueControllerPlaybackEngine, MPCQueueControllerBehaviorImplementation, MPCQueueControllerBehaviorMusic, MPCQueueControllerUpNextBehavior, MPCQueueControllerReusableBehavior, MPCQueueControllerBehavior, MPCQueueControllerDelegate;

@interface MPCQueueController : NSObject <MPCPlaybackEngineEventObserving, MPCQueueControllerBehaviorHost, MPCQueueControllerExternalSyncBehaviorHost, MPAVItemObserver, MSVSegmentedCoding> {
    id /* block */ _postEditContinuation;
    long long _syncResetAttempts;
    unsigned long long _stateHandle;
    BOOL _loadingAdditionalItems;
    NSArray *_lastECATSStack;
}

@property (class, retain, nonatomic) Class testBehaviorClass;
@property (class, retain, nonatomic) Class musicBehaviorClass;
@property (class, retain, nonatomic) Class testBehaviorClass;
@property (class, retain, nonatomic) Class musicBehaviorClass;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *coderVersions;
@property (copy, nonatomic) NSString *loadingContentItemID;
@property (retain, nonatomic) NSMapTable *activeEdits;
@property (retain, nonatomic) NSMutableArray *potentialCurrentItemEdits;
@property (copy, nonatomic) NSString *restoreLastStartTimePositionToContentItemID;
@property (readonly, nonatomic) double lastSavedTime;
@property (retain, nonatomic) id<MPCQueueControllerBehaviorImplementation> behaviorImpl;
@property (readonly, copy, nonatomic) NSString *revisionString;
@property (readonly, nonatomic) id<MPCQueueControllerBehavior> behavior;
@property (readonly, nonatomic) id<MPCQueueControllerUpNextBehavior> upNextBehavior;
@property (readonly, nonatomic) id<MPCQueueControllerReusableBehavior> reusableBehavior;
@property (readonly, nonatomic) id<MPCQueueControllerBehaviorMusic> music;
@property (readonly, nonatomic) id<MPCQueueControllerBehaviorMusicSharePlay> musicSharePlay;
@property (readonly, nonatomic) id<MPCQueueControllerBehavior> behavior;
@property (readonly, nonatomic) id<MPCQueueControllerUpNextBehavior> upNextBehavior;
@property (readonly, nonatomic) id<MPCQueueControllerReusableBehavior> reusableBehavior;
@property (readonly, nonatomic) id<MPCQueueControllerBehaviorMusic> music;
@property (readonly, nonatomic) id<MPCQueueControllerBehaviorMusicSharePlay> musicSharePlay;
@property (readonly, nonatomic) long long behaviorType;
@property (weak, nonatomic) id<MPCQueueControllerPlaybackEngine> playbackEngine;
@property (weak, nonatomic) id<MPCQueueControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL containsRestorableContent;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *targetContentItemID;
@property (readonly, nonatomic) long long targetContentItemSource;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, copy, nonatomic) NSString *preferredFirstContentItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *engineID;
@property (readonly, nonatomic) NSString *playerID;
@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent;

+ (id)describePlayer:(id)a0;
+ (id)allKnownSessionTypes;
+ (long long)behaviorForQueue:(id)a0;
+ (BOOL)isSupportedSessionType:(id)a0 forEngine:(id)a1 reason:(id *)a2;
+ (void)registerPublisher:(id)a0;
+ (void)unregisterPublisher:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didRestoreVersion:(long long)a0 forSegment:(id)a1;
- (id)segmentForCodingKey:(id)a0;
- (long long)versionForSegment:(id)a0;
- (void)_setTargetContentItemID:(id)a0 source:(long long)a1;
- (id)_stateDictionaryIncludingQueue:(BOOL)a0;
- (id)initWithBehaviorType:(long long)a0 sessionID:(id)a1;
- (void)_commitEdit:(id)a0;
- (id)_contentItemIDWithOffset:(long long)a0 fromItemID:(id)a1 mode:(long long)a2 didReachEnd:(BOOL *)a3;
- (void)_currentItemDidChangeFromItem:(id)a0 toItem:(id)a1;
- (void)_emitEventsForItemChangeFromItem:(id)a0 toCurrentItem:(id)a1;
- (void)_evaluateContextAwareTriggersWithReason:(id)a0;
- (void)_evaluateCurrentItemWithEdit:(id)a0;
- (id)_itemForContentItemID:(id)a0 allowReuse:(BOOL)a1;
- (BOOL)_playerItemDidBecomeActiveWithContentItemID:(id)a0;
- (void)_rollbackEdit:(id)a0;
- (void)_updateQueueIndexForItemIfNeeded:(id)a0;
- (void)_withDynamicBehavior:(id /* block */)a0;
- (void)_withExternalSyncBehavior:(id /* block */)a0;
- (BOOL)_withRestorableBehavior:(id /* block */)a0;
- (BOOL)_withTransportableBehavior:(id /* block */)a0;
- (void)_withUpNextBehavior:(id /* block */)a0;
- (id)beginEditWithReason:(id)a0;
- (id)beginExternalSyncEditWithReason:(id)a0;
- (void)behaviorDidChange;
- (BOOL)canJumpToContentItemID:(id)a0 reason:(id *)a1;
- (BOOL)canNextTrackForContentItemID:(id)a0 reason:(id *)a1;
- (BOOL)canPreviousTrackForContentItemID:(id)a0 reason:(id *)a1;
- (id)contentItemIDAtIndex:(long long)a0;
- (id)contentItemIDWithCurrentItemOffset:(long long)a0 mode:(long long)a1 didReachEnd:(BOOL *)a2;
- (id)contentItemIDWithoutRepeatIteration:(id)a0;
- (id)contentItemIDsFromOffset:(long long)a0 toOffset:(long long)a1 mode:(long long)a2 nowPlayingIndex:(long long *)a3;
- (void)didConnectToPlaybackEngine:(id)a0;
- (void)didDisconnectFromPlaybackEngine:(id)a0;
- (void)didSignificantlyChangeItem:(id)a0;
- (long long)displayIndexForContentItemID:(id)a0;
- (long long)displayItemCount;
- (void)donateStartPlayerItem:(id)a0 completion:(id /* block */)a1;
- (void)engine:(id)a0 didChangeItemElapsedTime:(double)a1 rate:(float)a2;
- (void)engine:(id)a0 didChangeToState:(unsigned long long)a1;
- (void)engine:(id)a0 didReachEndOfQueueWithReason:(id)a1;
- (void)enumerateContentItemIDsInMode:(long long)a0 block:(id /* block */)a1;
- (void)finalizeStateRestorationWithLoadingItemReady:(id /* block */)a0 completion:(id /* block */)a1;
- (void)incrementVersionForSegment:(id)a0;
- (BOOL)isExportableSessionType:(id)a0 forContentItemID:(id)a1 reason:(id *)a2;
- (id)itemForContentItemID:(id)a0;
- (id)itemForContentItemID:(id)a0 allowReuse:(BOOL)a1;
- (void)jumpToContentItemID:(id)a0;
- (void)jumpToContentItemID:(id)a0 direction:(long long)a1;
- (void)jumpToFirstContentItemWithSource:(long long)a0;
- (void)performAfterEdits:(id /* block */)a0;
- (void)performAllowingEditsToChangeCurrentItem:(id /* block */)a0;
- (void)performSetQueue:(id)a0 loadingItemReady:(id /* block */)a1 completion:(id /* block */)a2;
- (void)playerItemDidBecomeCurrent:(id)a0;
- (void)playerItemDidResignCurrent:(id)a0;
- (id)startPlayerItemContinuable;
- (void)upNextBehaviorDidChange;
- (void)willConnectToPlaybackEngine:(id)a0;
- (void)willDisconnectFromPlaybackEngine:(id)a0;

@end
