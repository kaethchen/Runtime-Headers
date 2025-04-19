@interface MPCPodcastsDefaultsHelper : NSObject {
    void /* unknown type, empty encoding */ _defaults;
}

@property (class, nonatomic, readonly) MPCPodcastsDefaultsHelper *standard;

@property (nonatomic, readonly) double skipForwardInterval;
@property (nonatomic, readonly) double skipBackwardInterval;
@property (nonatomic, readonly) BOOL remoteSkipInsteadOfNextTrack;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
