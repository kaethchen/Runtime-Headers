@class NSDictionary;

@interface _MLTInputGeneratorUtils : NSObject

@property (nonatomic) struct __CVBuffer { } *buffer;
@property int currentCase;
@property (retain) NSDictionary *inputDescriptions;
@property (retain) NSDictionary *outputDescriptions;
@property (retain) NSDictionary *sequences;
@property unsigned int seedForRandomInput;
@property BOOL usesNdArrayInterpretation;

- (void).cxx_destruct;
- (BOOL)hasCorrespondingRecurrentInput:(id)a0;
- (id)generateRandomCVPixelBufferFeatureWithImageConstraint:(id)a0 error:(id *)a1;
- (id)generateRandomGaussianDoubleWithScale:(double)a0 bias:(double)a1;
- (id)generateRandomGaussianFloatWithScale:(float)a0 bias:(float)a1;
- (id)generateRandomGaussianIntWithScale:(int)a0 bias:(int)a1;
- (id)generateRandomInputs:(id *)a0;
- (id)generateRandomMultiArrayFeatureWithMultiArrayConstraint:(id)a0 error:(id *)a1;
- (id)generateRandomUniformDoubleBetween:(double)a0 and:(double)a1;
- (id)generateRandomUniformFloatBetween:(float)a0 and:(float)a1;
- (id)generateRandomUniformIntBetween:(int)a0 and:(int)a1;
- (id)generateRandomWithType:(long long)a0;
- (BOOL)hasCorrespondingRecurrentOutput:(id)a0;
- (id)initInputGeneratorUtilWithModel:(id)a0 currentCase:(int)a1 seed:(unsigned int)a2;

@end
