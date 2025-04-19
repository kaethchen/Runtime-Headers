@interface MKHapticEngine : NSObject

- (id)init;
- (void)prepare;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void)playFailure;
- (void)playSuccess;

@end
