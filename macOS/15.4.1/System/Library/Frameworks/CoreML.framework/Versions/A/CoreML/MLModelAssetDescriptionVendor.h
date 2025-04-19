@class MLModelAssetResourceFactory, MLModelAssetDescription;

@interface MLModelAssetDescriptionVendor : NSObject

@property (readonly, nonatomic) MLModelAssetResourceFactory *resourceFactory;
@property (retain) MLModelAssetDescription *modelAssetDescription;

- (void).cxx_destruct;
- (void)_modelAssetDescriptionWithCompletionHandler:(id /* block */)a0;
- (void)functionNamesWithCompletionHandler:(id /* block */)a0;
- (id)initWithResourceFactory:(id)a0;
- (void)modelDescriptionOfFunctionNamed:(id)a0 completionHandler:(id /* block */)a1;
- (void)modelDescriptionWithCompletionHandler:(id /* block */)a0;

@end
