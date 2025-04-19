@interface TSCH3DSharegroupToken : NSObject

+ (id)exportToken;
+ (id)interactiveCanvas;
+ (id)sharegroupMapWithDevice:(id)a0;
+ (id)sharegroupPool;

- (BOOL)isOneShot;
- (BOOL)canBeCreatedFromOtherThread;
- (BOOL)mustRunOnMainThread;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)shouldGarbageCollect;
- (id)targetThreadForFlushingWithOwningThread:(id)a0;

@end
