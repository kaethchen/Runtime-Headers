@class NSArray, NSString;

@interface FormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {
    struct vector<OpaqueFormAutoFillFrame *, std::allocator<OpaqueFormAutoFillFrame *>> { struct OpaqueFormAutoFillFrame **__begin_; struct OpaqueFormAutoFillFrame **__end_; struct __compressed_pair<OpaqueFormAutoFillFrame **, std::allocator<OpaqueFormAutoFillFrame *>> { struct OpaqueFormAutoFillFrame **__value_; } __end_cap_; } _frames;
}

@property (readonly, copy, nonatomic) NSArray *formsMetadata;
@property (readonly, nonatomic) unsigned long long formCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enumerateFormsUsingBlock:(id /* block */)a0;
- (void)replaceFormsMetadataUsingBlock:(id /* block */)a0;
- (id)initWithFrames:(const void *)a0 metadataForAllForms:(const void *)a1;

@end
