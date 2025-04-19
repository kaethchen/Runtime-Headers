@class NSURL;

@interface LCFModelStoreModelMetadataProvider : NSObject

@property (readonly, nonatomic) NSURL *modelStoreRootWithKeyURL;
@property (readonly, nonatomic) NSURL *metadataPlistFileURL;

- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)getMetadata;
- (id)getModelMetadata:(id)a0;
- (BOOL)removeModelMetadata:(id)a0;
- (BOOL)setModelMetadata:(id)a0 metadata:(id)a1;

@end
