@class KVItemMapper, NSString, HMHomeManager, NSObject;
@protocol OS_dispatch_semaphore;

@interface KMHomeManagerBridge : NSObject <HMHomeManagerDelegate, KMProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
}

@property (readonly, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *setupSema;
@property (readonly, nonatomic) double setupTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (id)initWithHomeManager:(id)a0 setupTimeout:(double)a1;

@end
