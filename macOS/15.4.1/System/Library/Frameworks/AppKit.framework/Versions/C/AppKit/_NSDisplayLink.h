@class _NSDisplayLinkForwarder, CADisplayLink, NSMutableSet, NSRunLoop;
@protocol _NSDisplayLinkInfoProvider;

@interface _NSDisplayLink : CADisplayLink {
    id<_NSDisplayLinkInfoProvider> _provider;
    id /* block */ _handler;
    _NSDisplayLinkForwarder *_forwarder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSRunLoop *_runLoop;
    id _keepAliveSelf;
    NSMutableSet *_runLoopModes;
    CADisplayLink *_underlyingDisplayLink;
    int _displayID;
    BOOL _providerPaused;
    BOOL _clientPaused;
    struct CAFrameRateRange { float minimum; float maximum; float preferred; } _preferredFrameRateRange;
    id _userInfo;
    long long _priority;
}

+ (id)new;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (double)timestamp;
- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (long long)priority;
- (double)duration;
- (BOOL)isPaused;
- (double)targetTimestamp;
- (id)display;
- (long long)actualFramesPerSecond;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (long long)frameInterval;
- (double)heartbeatRate;
- (unsigned int)highFrameRateReason;
- (double)maximumRefreshRate;
- (long long)minimumFrameDuration;
- (struct CAFrameRateRange { float x0; float x1; float x2; })preferredFrameRateRange;
- (long long)preferredFramesPerSecond;
- (void)setFrameInterval:(long long)a0;
- (void)setHighFrameRateReason:(unsigned int)a0;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (void)setPaused:(BOOL)a0;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)setPriority:(long long)a0;

@end
