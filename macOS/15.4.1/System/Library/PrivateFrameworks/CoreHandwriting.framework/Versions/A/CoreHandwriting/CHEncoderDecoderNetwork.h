@class NSArray, CHSingletonMLModel, NSSet;

@interface CHEncoderDecoderNetwork : NSObject

@property (readonly, nonatomic) CHSingletonMLModel *encoderModel;
@property (readonly, nonatomic) CHSingletonMLModel *decoderModel;
@property (readonly, nonatomic) NSArray *codeMap;
@property (readonly, nonatomic) long long eosIndex;
@property (readonly, nonatomic) float segmentationAttThreshold;
@property (readonly, nonatomic) long long encoderCompressionFactor;
@property (readonly, nonatomic) long long renderSymbolSize;
@property (readonly, nonatomic) long long minInputHeight;
@property (readonly, nonatomic) long long maxInputHeight;
@property (readonly, nonatomic) long long minInputWidth;
@property (readonly, nonatomic) long long maxInputWidth;
@property (readonly, nonatomic) long long padToMultipleOf;
@property (readonly, nonatomic) long long enlargeSingleDotBy;
@property (readonly, nonatomic) long long numInputChannels;
@property (readonly, nonatomic) long long numOutputClasses;
@property (retain, nonatomic) NSSet *definedMathFunctionNameSet;
@property (copy, nonatomic) NSArray *recognitionLocales;
@property (retain, nonatomic) NSSet *activeAlphabet;
@property (retain, nonatomic) NSSet *declaredVariables;

- (void)dealloc;
- (void).cxx_destruct;
- (id)loadModel:(id)a0;
- (id)initWithModelNames:(id)a0 decoderName:(id)a1;
- (id)_bestPathTokensFromDecodingStates:(const void *)a0 drawing:(id)a1 codemap:(const void *)a2;
- (struct vector<std::vector<std::unordered_map<int, int>>, std::allocator<std::vector<std::unordered_map<int, int>>>> { void *x0; void *x1; struct __compressed_pair<std::vector<std::unordered_map<int, int>> *, std::allocator<std::vector<std::unordered_map<int, int>>>> { void *x0; } x2; })_createCompressedInputImage:(const void *)a0;
- (struct FeatureArray { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x1; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x2; })_extractFeaturesFromDrawing:(id)a0 error:(id *)a1;
- (void)filterOutAlternatives:(void *)a0 codemap:(const void *)a1;
- (int)getIndexInCodemap:(id)a0;
- (id)getListOfCommonVariablesForGraphing;
- (id)loadCodemap:(id)a0;
- (id)recognizeDrawing:(id)a0 beamSize:(long long)a1 shouldCancel:(id /* block */)a2;
- (void)setUpDecoderConfusableAlternatives:(void *)a0;
- (void)setUpDecoderOutOfAlphabetAlternatives:(void *)a0;
- (void)setUpMathDecoder:(void *)a0 imageCompressed:(void *)a1;

@end
