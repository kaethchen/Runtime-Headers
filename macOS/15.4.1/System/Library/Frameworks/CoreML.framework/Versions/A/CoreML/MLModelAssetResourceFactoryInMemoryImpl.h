@class NSURL, NSString;

@interface MLModelAssetResourceFactoryInMemoryImpl : NSObject <MLModelAssetResourceFactoryImpl> {
    struct unique_ptr<_MLModelInputArchiver, std::default_delete<_MLModelInputArchiver>> { struct __compressed_pair<_MLModelInputArchiver *, std::default_delete<_MLModelInputArchiver>> { struct _MLModelInputArchiver *__value_; } __ptr_; } _inputArchiver;
}

@property (readonly, copy, nonatomic) NSURL *compiledModelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)modelAssetDescriptionWithError:(id *)a0;
- (id)initWithArchiveData:(id)a0;
- (id)modelStructureWithError:(id *)a0;
- (id)modelWithConfiguration:(id)a0 error:(id *)a1;

@end
