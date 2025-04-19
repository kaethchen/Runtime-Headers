@class NSArray, NSMutableArray;
@protocol CNQueueingStrategy;

@interface CNQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) id<CNQueueingStrategy> strategy;
@property (readonly) unsigned long long count;
@property (readonly) NSArray *allObjects;

+ (id)boundedQueueWithCapacity:(unsigned long long)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0 overflowHandler:(id /* block */)a1;
+ (id)priorityQueueWithComparator:(id /* block */)a0;

- (id)init;
- (id)drain;
- (void).cxx_destruct;
- (id)peek;
- (void)enqueue:(id)a0;
- (id)initWithStrategy:(id)a0;
- (id)dequeue;
- (void)dequeueObject:(id)a0;
- (void)enqueueObjectsFromArray:(id)a0;

@end
