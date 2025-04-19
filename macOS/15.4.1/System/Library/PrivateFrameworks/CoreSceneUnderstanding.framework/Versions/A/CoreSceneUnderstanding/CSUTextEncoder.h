@class CSUTextEncoderE5ML, CSUSystemSearchTextEncoderV1, CSUTextEncoderOutput, CSUTextEncoderConfiguration;

@interface CSUTextEncoder : NSObject

@property (retain, nonatomic) CSUSystemSearchTextEncoderV1 *systemSearchtextEncoder;
@property (retain, nonatomic) CSUTextEncoderE5ML *textEncoderE5ML;
@property (retain, nonatomic) CSUTextEncoderOutput *inferenceOutputs;
@property (readonly, nonatomic) CSUTextEncoderConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (BOOL)reLoadResources:(id *)a0;
- (void)runOnInput:(id)a0 error:(id *)a1;
- (void)runOnInputText:(id)a0 error:(id *)a1;
- (void)setContextLength:(unsigned long long)a0 error:(id *)a1;

@end
