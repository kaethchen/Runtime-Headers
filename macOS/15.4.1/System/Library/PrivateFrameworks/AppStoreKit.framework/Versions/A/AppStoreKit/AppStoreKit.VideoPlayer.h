@interface AppStoreKit.VideoPlayer : AVPlayer {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ videoUrl;
    void /* unknown type, empty encoding */ videoObserver;
    void /* unknown type, empty encoding */ playerItem;
    void /* unknown type, empty encoding */ failure;
    void /* unknown type, empty encoding */ failureCount;
    void /* unknown type, empty encoding */ playbackChecks;
    void /* unknown type, empty encoding */ shouldBePlaying;
    void /* unknown type, empty encoding */ shouldLoopPlayback;
    void /* unknown type, empty encoding */ seekingToZeroForLoop;
    void /* unknown type, empty encoding */ lastPlaybackTimeGuard;
    void /* unknown type, empty encoding */ lastPlaybackTimeUnsynchronized;
    void /* unknown type, empty encoding */ delegate;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)pause;
- (void)play;
- (id)initWithPlayerItem:(id)a0;

@end
