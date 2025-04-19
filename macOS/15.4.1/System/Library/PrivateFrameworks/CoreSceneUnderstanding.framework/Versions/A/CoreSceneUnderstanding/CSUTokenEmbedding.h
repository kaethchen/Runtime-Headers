@class MLMultiArray;

@interface CSUTokenEmbedding : CSUTextEncoderInput

@property (retain) MLMultiArray *embedding;

- (void).cxx_destruct;

@end
