@class MRDestination, NSArray, MRContentItem, MRPlaybackQueue, MRPlayerPath, NSDate, MSVPair;

@interface MRNowPlayingRequest : NSObject

@property (class, readonly, nonatomic) BOOL localIsPlaying;
@property (class, readonly, nonatomic) unsigned int localPlaybackState;
@property (class, readonly, nonatomic) NSArray *localSupportedCommands;
@property (class, readonly, nonatomic) MRContentItem *localNowPlayingItem;
@property (class, readonly, nonatomic) MRPlaybackQueue *localPlaybackQueue;
@property (class, readonly, nonatomic) MRPlayerPath *localNowPlayingPlayerPath;
@property (class, readonly, nonatomic) NSDate *localLastPlayingDate;
@property (class, readonly, nonatomic) MSVPair *isMostRecentMediaPlaybackRelevantReason;

@property (readonly, copy, nonatomic) MRDestination *destination;

+ (void)homePlatterPreferredRouteIdentifier:(id /* block */)a0;
+ (id)isMostRecentMediaPlaybackRelevantReasonWithinInternal:(double)a0;
+ (BOOL)isMostRecentMediaPlaybackRelevantWithinInterval:(double)a0;
+ (void)shouldUseQuickControlsToDisplayPlatterForRouteIdentifier:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOrigin:(id)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithPlayerPath:(id)a0;
- (void)nowPlayingPlayerPathOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestClientPropertiesOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestDeviceLastPlayingDateOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestIsPlayingOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestLastPlayingDateOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestNowPlayingInfoOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestNowPlayingItemArtworkOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestNowPlayingItemLanguageOptionsOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestNowPlayingItemMetadataOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestPlaybackRateOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestPlaybackStateOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestProxiableSupportedCommandsOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestShuffleAndRepeatModeOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestSupportedCommandsOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 appOptions:(unsigned int)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)suspendDisconnectionPauseForConfiguration:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)triggerAudioFadeInWithReplyQueue:(id)a0 completion:(id /* block */)a1;
- (void)triggerAudioFadeOutForNowPlayingApplicationWithReplyQueue:(id)a0 completion:(id /* block */)a1;

@end
