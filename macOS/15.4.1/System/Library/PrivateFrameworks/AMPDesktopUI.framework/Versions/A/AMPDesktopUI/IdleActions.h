@class NSMutableDictionary, NSMutableArray, NSNotificationQueue;

@interface IdleActions : NSObject

@property (retain, nonatomic) NSNotificationQueue *queue;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) NSMutableDictionary *uniqueBlocks;

+ (id)sharedInstance:(id)a0;

- (void).cxx_destruct;
- (id)initWithNotificationCenter:(id)a0;
- (id)uniqueID;
- (unsigned long long)blocksCount;
- (void)enqueueIdleAction:(id /* block */)a0;
- (void)enqueueUniqueIdleAction:(id)a0 withBlock:(id /* block */)a1;
- (void)handleIdleNotification:(id)a0;
- (unsigned long long)uniqueBlocksCount;

@end
