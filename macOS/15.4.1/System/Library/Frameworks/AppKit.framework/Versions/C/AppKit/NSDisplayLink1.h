@interface NSDisplayLink1 : NSObject

@property (class, readonly) double currentTimestamp;

@property (readonly, getter=isValid) BOOL valid;
@property (getter=isPaused) BOOL paused;
@property (readonly) double timestamp;
@property (readonly) double duration;
@property double desiredInterval;

+ (id)displayLinkForScreen:(id)a0 handler:(id /* block */)a1;

- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;

@end
