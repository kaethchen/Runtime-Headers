@interface MPCMRLegacyRemoteArtworkDataSource : MPAbstractNetworkArtworkDataSource

@property (class, readonly, nonatomic) MPCMRLegacyRemoteArtworkDataSource *sharedDataSource;

+ (id)bestArtworkSizes;

- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)getExportableArtworkPropertiesForCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasExportableArtworkPropertiesForCatalog:(id)a0;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)supportedSizesForCatalog:(id)a0;
- (id)_urlForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
