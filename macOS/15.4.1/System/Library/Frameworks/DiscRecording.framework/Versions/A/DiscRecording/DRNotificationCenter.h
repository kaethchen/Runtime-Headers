@interface DRNotificationCenter : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (id)currentRunLoopCenter;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (id)_registeredObservers;
- (BOOL)notificationNeedsImmediatePosting:(id)a0;

@end
