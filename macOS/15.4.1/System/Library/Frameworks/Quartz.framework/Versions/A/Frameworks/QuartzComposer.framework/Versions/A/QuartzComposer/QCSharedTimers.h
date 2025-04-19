@interface QCSharedTimers : NSObject {
    struct __CFArray { } *_timers;
}

+ (id)sharedTimers;

- (id)description;
- (id)init;
- (void)addClient:(id)a0 selector:(SEL)a1 frequency:(float)a2;
- (void)removeClient:(id)a0 selector:(SEL)a1;

@end
