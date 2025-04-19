@class SFMediaMetadata;

@interface SearchUIMediaUtilities : NSObject

@property (class, retain) SFMediaMetadata *currentMedia;
@property (class) BOOL isPlaying;

+ (void)pausePlayback;
+ (void)resumePlayback;
+ (id)localAudioCache;
+ (BOOL)isCurrentMedia:(id)a0;
+ (id)backingItemForMediaMetadataCache;
+ (BOOL)bundleIdentifierSupportsOpenIntent:(id)a0;
+ (BOOL)bundleIdentifierSupportsPlayIntent:(id)a0;
+ (void)canPlayAppleMusicWithCompletionHandler:(id /* block */)a0;
+ (void)dispatchOnMusicQueueIfNecessary:(id /* block */)a0;
+ (id)fallbackPunchoutWithMetadata:(id)a0 forBundleIdentifier:(id)a1;
+ (void)getMusicUserDisclosureApprovalStatusWithCompletionHandler:(id /* block */)a0;
+ (BOOL)isCoreSpotlightMedia:(id)a0;
+ (BOOL)isMediaItem:(id)a0 equalToMediaItem:(id)a1;
+ (BOOL)isNowPlayingMedia:(id)a0;
+ (id)mediaSearchForMetadata:(id)a0;
+ (id)musicPlayer;
+ (id)musicPlayerQueue;
+ (id)musicStatusCache;
+ (void)playCoreSpotlightMedia:(id)a0;
+ (void)playMedia:(id)a0;
+ (void)resetPlayer;
+ (id)supportedIntentsForApp:(id)a0;
+ (void)updateBackingItemForMediaMetadata:(id)a0;

@end
