@class NSMutableArray;

@interface KHDBQueue : NSObject {
    int _spinlock;
    unsigned long long _front;
    unsigned long long _back;
    NSMutableArray *_storage;
}

+ (void)testQueues;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)popObject;

@end
