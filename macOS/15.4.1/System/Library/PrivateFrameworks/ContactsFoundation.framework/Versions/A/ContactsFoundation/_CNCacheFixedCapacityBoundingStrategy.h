@class CNQueue, NSString;

@interface _CNCacheFixedCapacityBoundingStrategy : NSObject <CNCacheBoundingStrategy>

@property (readonly, nonatomic) CNQueue *keys;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)shouldEvictKey:(id)a0;
- (void)willAccessKey:(id)a0;
- (void)willUpdateCacheBy:(unsigned long long)a0 forKey:(id)a1 keysToEvict:(id *)a2;

@end
