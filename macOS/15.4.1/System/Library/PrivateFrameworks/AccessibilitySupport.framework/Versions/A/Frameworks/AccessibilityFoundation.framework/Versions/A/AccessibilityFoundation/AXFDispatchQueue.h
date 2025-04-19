@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXFDispatchQueue : NSObject <AXFDispatchQueue>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainQueue;
+ (void)assertNotQueue:(id)a0;
+ (void)assertQueue:(id)a0;
+ (id)globalQueue;
+ (id)globalQueueWithQualityOfService:(long long)a0;
+ (id)newConcurrentQueueWithLabel:(id)a0;
+ (id)newSerialQueueWithLabel:(id)a0;

- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)executeAfterDelay:(long long)a0 block:(id /* block */)a1;
- (void)executeAfterDelay:(long long)a0 workItem:(id)a1;
- (void)executeAsynchronously:(unsigned long long)a0 block:(id /* block */)a1;
- (void)executeBlockAsynchronously:(id /* block */)a0;
- (void)executeBlockSynchronously:(id /* block */)a0;
- (void)executeSynchronously:(unsigned long long)a0 block:(id /* block */)a1;
- (void)executeWorkItemAsynchronously:(id)a0;
- (void)executeWorkItemSynchronously:(id)a0;
- (id)initWithLabel:(id)a0 qualityOfService:(long long)a1 attributes:(unsigned long long)a2 target:(id)a3;

@end
