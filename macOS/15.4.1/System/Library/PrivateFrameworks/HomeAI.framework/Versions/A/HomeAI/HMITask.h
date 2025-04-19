@class NSDictionary;

@interface HMITask : HMFOperation

@property (copy) id /* block */ progressBlock;
@property (readonly) int taskID;
@property (readonly) NSDictionary *results;

- (void).cxx_destruct;
- (void)main;
- (id)initWithTaskID:(int)a0;
- (id)initWithTaskID:(int)a0 timeout:(double)a1;
- (void)mainInsideAutoreleasePool;

@end
