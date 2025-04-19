@interface WFCompactUnlockService : NSObject

@property (class, readonly, nonatomic) BOOL isDeviceLocked;

- (void)dealloc;
- (void)requestUnlockIfNeeded:(id /* block */)a0;

@end
