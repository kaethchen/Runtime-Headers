@class FCFetchedValueManager;
@protocol FCContentContext;

@interface FCHeldPBCodableFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) Class codableClass;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) FCFetchedValueManager *resourceConfigurationManager;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fastCachedValue;
- (void)_processFetchOperationResult:(id)a0 withBlock:(id /* block */)a1;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithCodableClass:(Class)a0 contentContext:(id)a1 resourceConfigurationManager:(id)a2;
- (id)inputManagers;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;

@end
