@interface MapsSync.MapsSyncHistoryCuratedCollection : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _curatedCollectionIdentifier;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
}

@property (nonatomic, readonly) long long identifierHash;
@property (nonatomic, readonly) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, readonly) int resultProviderIdentifier;

- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (Class)managedObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)deleteWithCompletion:(id /* block */)a0;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0 resultProviderIdentifier:(int)a1;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
