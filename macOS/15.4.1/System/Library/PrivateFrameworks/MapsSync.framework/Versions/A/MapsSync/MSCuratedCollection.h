@interface MSCuratedCollection : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _curatedCollectionIdentifier;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic) long long positionIndex;
@property (nonatomic) int resultProviderIdentifier;

- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0 positionIndex:(long long)a1 resultProviderIdentifier:(int)a2;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 curatedCollectionIdentifier:(unsigned long long)a1 positionIndex:(long long)a2 resultProviderIdentifier:(int)a3;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
