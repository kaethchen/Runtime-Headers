@class NSArray, CSUCaptionRuntimeParameters, CSUCaptionPostProcessingHandler;

@interface CSUCaptioningProcUtils : NSObject

@property (nonatomic) struct shared_ptr<csu::CustomVocabulary> { struct CustomVocabulary *__ptr_; struct __shared_weak_count *__cntrl_; } vocabulary;
@property (nonatomic) struct shared_ptr<csu::BeamSearch> { struct BeamSearch *__ptr_; struct __shared_weak_count *__cntrl_; } beamSearch;
@property (nonatomic) struct BeamSearchOptions { unsigned long long maxSeqLen; BOOL terminateAtEOS; struct optional<int> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } maxSteps; struct optional<std::vector<std::string>> { union { char __null_state_; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } __val_; } ; BOOL __engaged_; } excludeTokens; NSArray *denyListRules; float lengthNormalizationAlpha; float lengthNormFactor; unsigned long long scorerType; int beamWidth; int topKPerStep; float lengthNormalizationAlpha; } beamSearchOptions;
@property (nonatomic) struct EspressoTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } encodedFeaturesBuffer;
@property (retain, nonatomic) CSUCaptionRuntimeParameters *runTimeParams;
@property (nonatomic) int genderOptionForBeamSearch;
@property (retain, nonatomic) CSUCaptionPostProcessingHandler *postProcessingHandler;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDecoderConfiguration:(id)a0 beamWidth:(int)a1 beamScorerType:(unsigned long long)a2 error:(id *)a3;

@end
