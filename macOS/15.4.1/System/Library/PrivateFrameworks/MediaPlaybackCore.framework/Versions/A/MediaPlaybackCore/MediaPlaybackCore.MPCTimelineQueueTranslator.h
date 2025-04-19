@class NSString;

@interface MediaPlaybackCore.MPCTimelineQueueTranslator : _TtCs12_SwiftObject <MFQueueControlling> {
    void /* unknown type, empty encoding */ playbackEngine;
    void /* unknown type, empty encoding */ timeline;
    void /* unknown type, empty encoding */ renderer;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ playbackCoordinator;
@property (nonatomic, readonly) NSString *targetContentItemID;

- (void)invalidateCache;
- (id)MPAVItemForMFPlayerItem:(id)a0;
- (BOOL)canSkipInDirection:(long long)a0 fromItem:(id)a1;
- (id)contentItemIDsFromOffset:(long long)a0 toOffset:(long long)a1 nowPlayingIndex:(long long *)a2;
- (void)invalidateCacheWithContentItemID:(id)a0;
- (id)queueItemForContentItemID:(id)a0 allowReuse:(BOOL)a1 error:(id *)a2;
- (id)queueItemForPlayerItem:(id)a0 allowReuse:(BOOL)a1;
- (void)setMPAVItem:(id)a0 forMFPlayerItem:(id)a1;
- (void)updatePlayerPlaybackCoordinator:(id)a0;

@end
