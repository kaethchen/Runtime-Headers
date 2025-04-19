@class NSMutableSet;

@interface CPDelayedUpdateManager : NSObject {
    NSMutableSet *_updaters;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)applicationWillTerminate:(id)a0;
- (void)addUpdater:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)cancelDelayedUpdate;
- (void)performDelayedUpdates;
- (void)removeUpdater:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)removeUpdaterInfo:(id)a0;
- (void)startDelayedUpdate;

@end
