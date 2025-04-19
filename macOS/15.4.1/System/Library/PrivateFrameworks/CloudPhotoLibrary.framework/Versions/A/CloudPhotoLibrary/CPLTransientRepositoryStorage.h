@class CPLEngineTransientRepository;

@interface CPLTransientRepositoryStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineTransientRepository *transientRepository;

- (void).cxx_destruct;
- (id)changeWithScopedIdentifier:(id)a0;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)initWithTransientRepository:(id)a0;
- (id)storageDescription;

@end
