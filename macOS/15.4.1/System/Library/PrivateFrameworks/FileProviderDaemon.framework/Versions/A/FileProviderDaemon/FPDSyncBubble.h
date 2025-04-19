@interface FPDSyncBubble : NSObject

+ (BOOL)runningInSyncBubble;

- (void)start;
- (void)startupFinished;
- (id)initWithExtensionManager:(id)a0;

@end
