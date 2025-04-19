@class ISAssetCatalogResource, IFBundle;

@interface ISAssetInspector : NSObject

@property (readonly) IFBundle *bundle;
@property (retain, nonatomic) ISAssetCatalogResource *assetCatalogResource;

- (void).cxx_destruct;
- (unsigned long long)catalogAssetAppearances;
- (id)initWithBundleURL:(id)a0;

@end
