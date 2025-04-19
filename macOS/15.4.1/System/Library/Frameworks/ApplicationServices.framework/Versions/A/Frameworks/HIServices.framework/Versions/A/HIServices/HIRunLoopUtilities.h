@interface HIRunLoopUtilities : NSObject

+ (void)initialize;
+ (id)_currentRunLoopMode;
+ (void)addRunLoopModesForDeferredActions:(id)a0;
+ (void)deferActions:(id /* block */)a0;

- (unsigned int)_blockQueueDepth;

@end
