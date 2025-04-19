@interface CMGestureManager : NSObject {
    id _internal;
}

@property (copy) id /* block */ gestureHandler;

+ (void)setGestureServiceEnabled:(BOOL)a0;
+ (BOOL)isGestureServiceAvailable;
+ (BOOL)isGestureServiceEnabled;

- (void)dealloc;
- (id)init;
- (id)initWithPriority:(int)a0;

@end
