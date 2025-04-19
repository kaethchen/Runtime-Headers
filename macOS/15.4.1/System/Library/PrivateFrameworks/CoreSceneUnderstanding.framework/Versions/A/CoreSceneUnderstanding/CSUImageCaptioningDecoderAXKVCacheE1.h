@class CSUImageCaptionDecoderAXKVCacheE1Network, CSUCaptioningProcUtils, CSUImageCaptioningDecoderConfiguration;

@interface CSUImageCaptioningDecoderAXKVCacheE1 : NSObject {
    struct EspressoTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _encodedFeaturesBuffer;
}

@property (retain, nonatomic) CSUImageCaptionDecoderAXKVCacheE1Network *decoderNetObj;
@property (readonly, nonatomic) CSUCaptioningProcUtils *procUtils;
@property (readonly, nonatomic) CSUImageCaptioningDecoderConfiguration *configuration;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (BOOL)loadDecoderObj:(id *)a0;
- (BOOL)compareTensorShapesForShape1:(const void *)a0 Shape2:(const void *)a1;
- (id)computeDecodedCaptionsForFeatures:(id)a0 withDecodingMethod:(long long)a1 runDecoderOnly:(BOOL)a2 error:(id *)a3;
- (id)getCaptionsAfterBeamSearchDecodingOnEncodedFeatures;
- (id)getCaptionsAfterGreedyDecodingOnEncodedFeatures;
- (BOOL)loadDecoder:(id *)a0;
- (BOOL)loadPostProcUtilsWithBeamWidth:(int)a0 error:(id *)a1;
- (struct ModelOutput { struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x0; struct shared_ptr<std::unordered_map<std::string, std::vector<float>>> { void *x0; struct __shared_weak_count *x1; } x1; BOOL x2; })nextTokensForInputs:(const void *)a0 KVCache:(const void *)a1 AndforMaskPosition:(unsigned int)a2;
- (BOOL)populateInputBuffer:(id)a0 WithError:(id *)a1;
- (id)postProcessResults:(id)a0 error:(id *)a1;

@end
