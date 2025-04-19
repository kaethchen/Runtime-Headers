@class MPMediaItem;

@interface SearchUIMusicStatusCache : TLKAsyncCache

@property (retain) MPMediaItem *nowPlayingItem;
@property long long playbackState;

- (id)init;
- (void).cxx_destruct;
- (void)computeObjectForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateNowPlayingItem;
- (void)updatePlaybackState;

@end
