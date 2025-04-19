@class NSURL, NSString;

@interface MLModelAssetResourceFactoryOnDiskImpl : NSObject <MLModelAssetResourceFactoryImpl>

@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, copy, nonatomic) NSURL *compiledModelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)modelAssetDescriptionWithError:(id *)a0;
- (id)initWithModelURL:(id)a0 error:(id *)a1;
- (id)modelStructureWithError:(id *)a0;
- (id)modelWithConfiguration:(id)a0 error:(id *)a1;

@end
