@class MLMultiArray, NSSet;

@interface U2HeadInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input_mask;
@property (retain, nonatomic) MLMultiArray *input_span_features;
@property (retain, nonatomic) MLMultiArray *sequence_output;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithInput_mask:(id)a0 input_span_features:(id)a1 sequence_output:(id)a2;

@end
