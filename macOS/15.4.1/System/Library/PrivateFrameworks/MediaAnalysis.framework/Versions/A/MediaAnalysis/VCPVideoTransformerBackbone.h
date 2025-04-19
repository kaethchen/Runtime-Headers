@class NSData, VCPCNNModelEspressoV2;

@interface VCPVideoTransformerBackbone : NSObject {
    VCPCNNModelEspressoV2 *_modelEspressoV2;
}

@property (readonly) int embeddingHeight;
@property (readonly) int embeddingWidth;
@property (readonly) int embeddingChannels;
@property (readonly) int embeddingSequenceLength;
@property (readonly) BOOL isFP16;
@property (readonly) NSData *embedding;
@property (readonly) NSData *spatialEmbedding;
@property (readonly) NSData *hiddenEmbedding;

+ (long long)revision;
+ (unsigned long long)embeddingVersion;
+ (unsigned long long)embeddingVersionForRevision:(long long)a0;
+ (id)getNSDataFromOuput:(id)a0 isFP16:(BOOL)a1;
+ (int)idealInputHeightWithRevision:(long long)a0;
+ (int)idealInputWidthWithRevision:(long long)a0;
+ (id)sharedModel:(id)a0 identifier:(id)a1 outputNames:(id)a2 inputNames:(id)a3 functionName:(id)a4;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (unsigned long long)inputTensorType;
- (unsigned long long)inputTensorSize;
- (int)inference:(id)a0;

@end
