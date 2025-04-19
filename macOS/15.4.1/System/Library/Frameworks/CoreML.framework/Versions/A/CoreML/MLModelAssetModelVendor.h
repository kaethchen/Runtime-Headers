@class MLModelConfiguration, MLModelAssetResourceFactory, MLModel;

@interface MLModelAssetModelVendor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) MLModelAssetResourceFactory *resourceFactory;
@property (copy, nonatomic) MLModelConfiguration *cachedConfiguration;
@property (retain, nonatomic) MLModel *cachedModel;

- (void).cxx_destruct;
- (id)initWithResourceFactory:(id)a0;
- (void)modelWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (id)modelWithConfiguration:(id)a0 error:(id *)a1;

@end
