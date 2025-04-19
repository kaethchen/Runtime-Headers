@class MPPlaybackContext;

@interface MPCPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

@property (readonly, nonatomic) BOOL shouldSkipWaitingForReadyToPlayStatus;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isRequestingImmediatePlayback;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)a0;
- (id)initWithPlaybackContext:(id)a0;
- (id)privateListeningOverride;
- (id)siriAssetInfo;
- (id)siriRecommendationIdentifier;
- (id)siriWHAMetricsInfo;
- (void)getMusicPlaybackContextWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;

@end
