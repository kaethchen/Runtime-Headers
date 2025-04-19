@class CSUCaptioningProcUtils, CSUImageCaptioningDecoderConfiguration;

@interface CSUImageCaptioningDecoderE1 : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _decoderNet;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _bridgeNet;
    struct EspressoTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _inputTokens;
    struct EspressoTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _bridgeInputBuffer;
    struct EspressoTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _encodedFeaturesBuffer;
}

@property (readonly, nonatomic) CSUCaptioningProcUtils *procUtils;
@property (readonly, nonatomic) CSUImageCaptioningDecoderConfiguration *configuration;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (BOOL)compareTensorShapesForShape1:(const void *)a0 Shape2:(unsigned long long[5])a1 rank:(unsigned long long)a2;
- (id)computeDecodedCaptionsForFeatures:(id)a0 withDecodingMethod:(long long)a1 runDecoderOnly:(BOOL)a2 error:(id *)a3;
- (id)getBridgeLayerOutput:(id)a0 error:(id *)a1;
- (id)getCaptionsAfterBeamSearchDecodingOnEncodedFeatures;
- (id)getCaptionsAfterGreedyDecodingOnEncodedFeatures;
- (BOOL)loadBridge:(id *)a0;
- (BOOL)loadDecoder:(id *)a0;
- (BOOL)loadPostProcUtilsWithBeamWidth:(int)a0 error:(id *)a1;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })nextTokensForInputs:(const void *)a0 AndforMaskPosition:(unsigned int)a1;
- (BOOL)populateInputBufferWithBridgeFeatures:(id)a0 WithError:(id *)a1;
- (id)postProcessResults:(id)a0 error:(id *)a1;
- (BOOL)reshapeEncodedFeaturesBufferForBridgeNet:(id)a0 WithError:(id *)a1;

@end
