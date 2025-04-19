@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BCSCoalesceHelper : NSObject <BCSCoalesceHelperProtocol>

@property (readonly, nonatomic) NSMutableDictionary *coalesceObjectPool;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *coalesceHelperDispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQOSClass:(unsigned int)a0;
- (void)_enqueueCoalesceObject:(id)a0 isDuplicateRequest:(BOOL *)a1 inCoalesceObjectPool:(id)a2;
- (id)_dequeueCoalesceObjectsForCoalesceKey:(id)a0 inCoalesceObjectPool:(id)a1;
- (id)dequeueCoalesceObjectsForCoalesceKey:(id)a0;
- (void)enqueueCoalesceObject:(id)a0 isDuplicateRequest:(BOOL *)a1;
- (BOOL)isDuplicateRequest:(id)a0;

@end
