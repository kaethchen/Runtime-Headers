@interface PFDispatchQueue : NSObject

+ (void)initialize;
+ (id)mainQueue;
+ (id)newConcurrentQueueWithLabel:(id)a0;
+ (id)newSerialQueueWithLabel:(id)a0;
+ (id)globalCurrentQOSQueue;
+ (id)newQueueWithLabel:(id)a0 concurrencyLimit:(unsigned long long)a1 qos:(unsigned int)a2;
+ (id)globalQOSQueue:(unsigned int)a0;
+ (id)_newQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2;
+ (Class)concreteQueueClass;
+ (void)dispatchApply:(unsigned long long)a0 ofBlock:(id /* block */)a1;
+ (void)dispatchApply:(unsigned long long)a0 withConcurrencyLimit:(unsigned long long)a1 canceler:(id)a2 ofBlock:(id /* block */)a3;
+ (id)globalBackgroundQOSQueue;
+ (id)globalDefaultQOSQueue;
+ (id)globalUserInitiatedQOSQueue;
+ (id)globalUserInteractiveQOSQueue;
+ (id)globalUtilityQOSQueue;
+ (id)injectedExtensions;
+ (id)newConcurrentQueueWithLabel:(id)a0 qos:(unsigned int)a1;
+ (id)newConcurrentQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2 extensions:(id)a3;
+ (id)newQueueWithLabel:(id)a0;
+ (id)newQueueWithLabel:(id)a0 concurrencyLimit:(unsigned long long)a1;
+ (id)newQueueWithLabel:(id)a0 qos:(unsigned int)a1;
+ (id)newQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2 extensions:(id)a3;
+ (id)newSerialQueueWithLabel:(id)a0 qos:(unsigned int)a1;
+ (id)newSerialQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2 extensions:(id)a3;

- (id)_init;
- (void)dispatchAsyncWithCurrentQOS:(id /* block */)a0;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsyncWithCurrentQOS:(id /* block */)a0;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;

@end
