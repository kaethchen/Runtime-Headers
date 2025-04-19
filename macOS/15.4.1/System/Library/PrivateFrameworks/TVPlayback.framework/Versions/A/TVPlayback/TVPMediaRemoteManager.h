@class NSDictionary, MPRemoteCommandCenter, NSDate, TVPMediaRemoteCommandHandler;
@protocol TVPPlayback, TVPMediaItem;

@interface TVPMediaRemoteManager : NSObject

@property (retain, nonatomic) id<TVPMediaItem> currentMediaItem;
@property (retain, nonatomic) id elapsedTimeObserverToken;
@property (retain, nonatomic) NSDate *lastPushDate;
@property (copy, nonatomic) NSDictionary *lastNowPlayingInfo;
@property (nonatomic) BOOL artworkNeedsUpdate;
@property (nonatomic) BOOL usingPlayerForCommandHandlerOnly;
@property (retain, nonatomic) MPRemoteCommandCenter *remoteCommandCenter;
@property (copy, nonatomic) id /* block */ updateNowPlayingInfoBlock;
@property (weak, nonatomic) id<TVPPlayback> player;
@property (retain, nonatomic) TVPMediaRemoteCommandHandler *remoteCommandHandler;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_updateBoundSelectedAudioOption;
- (void)_currentMediaItemDidChange:(id)a0;
- (void)_currentMediaItemMetadataDidChange:(id)a0;
- (void)_playbackStateDidChange:(id)a0;
- (void)_pushNowPlayingInfo:(BOOL)a0 invalidateArtwork:(BOOL)a1 pushImmediately:(BOOL)a2;
- (void)_updateBoundRepeatMode;
- (void)_updateBoundSelectedSubtitleOption;
- (void)_updateBoundShuffleMode;
- (id)initWithRemoteCommandCenter:(id)a0;
- (void)setPlayerForCommandHandler:(id)a0;
- (void)startRespondingToRemoteControlEvents;
- (void)stopRespondingToRemoteControlEvents;

@end
