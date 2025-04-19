@class NSTimer;

@interface NSDisplayLinkFallback : NSDisplayLink1 {
    NSTimer *_timer;
}

+ (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;

- (void)dealloc;
- (BOOL)isValid;
- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (double)timestamp;
- (double)duration;
- (BOOL)isPaused;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)setPaused:(BOOL)a0;

@end
