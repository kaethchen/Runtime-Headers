@class NSMutableDictionary, MPCPlaybackEngine, NSMutableSet, NSString;

@interface _MPCLeaseManager : NSObject <MPCPlaybackEngineEventObserving, MPCPlaybackEngineInfoProvider>

@property (retain, nonatomic) NSMutableSet *leaseEndIgnoreReasons;
@property (retain, nonatomic) NSMutableDictionary *prepareCompletions;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *playbackEngineID;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_storeRequestContextForAccount:(id)a0;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)a0;
- (void)_updateStateForPlaybackPrevention;
- (void)beginIgnoringLeaseEndEventsForReason:(id)a0;
- (void)endIgnoringLeaseEndEventsForReason:(id)a0;
- (void)engine:(id)a0 willChangeToItem:(id)a1 fromItem:(id)a2;
- (void)getHasPreparedLeaseForAccount:(id)a0 completion:(id /* block */)a1;
- (id)initWithPlaybackEngine:(id)a0;
- (void)prepareForCurrentItemPlayback;
- (void)prepareForPlaybackWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)setCanStealLeaseIfNeeded;

@end
