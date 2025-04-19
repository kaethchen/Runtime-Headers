@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadOperation : HMFObject <HMDThreadOperation>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ operation;
@property (nonatomic) long long operationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchBlock:(id /* block */)a0;
- (void)executeWithTimeout:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 threadOperationType:(long long)a1 completion:(id /* block */)a2;

@end
