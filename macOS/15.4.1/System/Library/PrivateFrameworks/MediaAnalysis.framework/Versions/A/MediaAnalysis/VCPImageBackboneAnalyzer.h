@class VCPCNNModelEspressoV2, VCPEspressoV2Data, NSData, VCPTransforms;

@interface VCPImageBackboneAnalyzer : VCPImageAnalyzer {
    VCPTransforms *_transformImage;
    VCPEspressoV2Data *_inputData;
    int _inputWidth;
    int _inputHeight;
    VCPCNNModelEspressoV2 *_modelEspressoV2;
    long long _revision;
}

@property (readonly) BOOL isFP16;
@property (readonly) NSData *embedding;
@property (readonly) NSData *spatialEmbedding;
@property (readonly) NSData *hiddenEmbedding;
@property (nonatomic) BOOL bypassNormalizaton;

+ (id)sharedModel:(id)a0 identifier:(id)a1 outputNames:(id)a2 inputNames:(id)a3 functionName:(id)a4;

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)configForAspectRatio:(float)a0;
- (id)initWithRequestedAnalyses:(unsigned long long)a0 andRevision:(id)a1 useSharedModel:(BOOL)a2;
- (int)prepareInput:(struct __CVBuffer { } *)a0 withChannels:(int)a1 settling:(BOOL)a2;

@end
