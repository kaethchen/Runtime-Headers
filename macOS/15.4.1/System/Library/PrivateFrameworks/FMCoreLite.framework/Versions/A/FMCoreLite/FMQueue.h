@class NSArray, NSMutableArray;
@protocol FMQueueingStrategy;

@interface FMQueue : NSObject {
    NSMutableArray *_buffer;
    id<FMQueueingStrategy> _strategy;
}

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

@end
