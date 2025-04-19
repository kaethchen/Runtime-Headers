@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isRequestingImmediatePlayback;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)a0;
- (id)asMusicPlaybackContextWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithPlaybackContext:(id)a0;
- (id)privateListeningOverride;
- (id)siriAssetInfo;
- (id)siriRecommendationIdentifier;
- (id)siriWHAMetricsInfo;

@end
