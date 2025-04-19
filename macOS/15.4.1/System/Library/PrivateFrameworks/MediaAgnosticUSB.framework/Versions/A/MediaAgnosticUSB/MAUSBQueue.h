@class NSMutableArray;

@interface MAUSBQueue : NSObject {
    NSMutableArray *_array;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)dequeueObject;
- (void)enqueueObject:(id)a0;
- (id)peakFront;

@end
