@class CPLEngineStore;

@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)changeWithScopedIdentifier:(id)a0;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)storageDescription;

@end
