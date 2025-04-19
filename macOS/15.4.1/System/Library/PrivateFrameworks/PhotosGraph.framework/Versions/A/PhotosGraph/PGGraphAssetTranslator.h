@interface PGGraphAssetTranslator : PGGraphEntityTranslator

+ (Class)entityClass;

- (id)momentUpdateTypeByAssetProperty;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)a0 change:(id)a1 progressBlock:(id /* block */)a2;
- (id)highlightUpdateTypeByAssetProperty;

@end
