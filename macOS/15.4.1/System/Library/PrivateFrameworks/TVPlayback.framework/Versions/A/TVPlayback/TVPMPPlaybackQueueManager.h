@class NSSet, MPNowPlayingInfoCenter, NSMutableDictionary, NSString, NSObject;
@protocol TVPMPPlaybackQueueManagerDelegate, TVPPlayback;

@interface TVPMPPlaybackQueueManager : NSObject <MPNowPlayingPlaybackQueueDataSource>

@property (retain, nonatomic) NSSet *oldNowPlayingKeys;
@property (readonly, nonatomic) MPNowPlayingInfoCenter *nowPlayingInfoCenter;
@property (nonatomic) BOOL isSoleUpdater;
@property (retain, nonatomic) NSMutableDictionary *imageProxies;
@property (weak, nonatomic) NSObject<TVPPlayback> *player;
@property (weak, nonatomic) id<TVPMPPlaybackQueueManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)_mediaItemHasArtwork:(id)a0;
+ (id)_mediaItemMetadataProperties;
+ (id)_mediaItemPropertyToMediaRemotePropertyMapping;
+ (unsigned long long)_mediaPlayerMediaTypeForMediaItemMediaType:(id)a0;
+ (id)_mediaRemotePropertyForMediaItemProperty:(id)a0;
+ (int)_mediaRemoteRepeatModeWithPlaylist:(id)a0;
+ (int)_mediaRemoteShuffleModeWithPlaylist:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)nowPlayingInfoCenter:(id)a0 artworkForContentItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)nowPlayingInfoCenter:(id)a0 contentItemForID:(id)a1;
- (id)nowPlayingInfoCenter:(id)a0 contentItemIDForOffset:(long long)a1;
- (id)nowPlayingInfoCenter:(id)a0 infoForContentItem:(id)a1 completion:(id /* block */)a2;
- (void)_forceCurrentContentItemToRepopulate;
- (id)_mediaItemForContentItem:(id)a0;
- (id)_mediaItemForContentItemID:(id)a0;
- (void)_mediaItemMetadataDidChange:(id)a0;
- (void)_populateContentItem:(id)a0 withMetadataFromMediaItem:(id)a1;
- (void)_populateNowPlayingInfoDictionaryForContentItem:(id)a0 withMetadataFromMediaItem:(id)a1;
- (id)initWithNowPlayingInfoCenter:(id)a0;

@end
