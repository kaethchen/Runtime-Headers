@class CSUTextEncoder, VCPTextTokenizer, NSObject, VCPCNNModelEspressoV2;
@protocol OS_dispatch_queue;

@interface VCPTextEncoder : NSObject {
    VCPCNNModelEspressoV2 *_textModel;
    VCPTextTokenizer *_textTokenizer;
    CSUTextEncoder *_csuTextEncoder;
    VCPCNNModelEspressoV2 *_tokenModel;
    int _embeddingDim;
    NSObject<OS_dispatch_queue> *_embeddingGenerationQueue;
}

+ (id)convertFloat16ToFloat32:(id)a0;
+ (id)applyL2Norm:(id)a0 isFP16:(BOOL)a1;
+ (id)convertFloat32ToFloat16:(id)a0;
+ (id)convertToCSEmbedding:(id)a0 isFP16:(BOOL)a1;
+ (id)sharedModel:(id)a0 identifier:(id)a1 outputNames:(id)a2 inputNames:(id)a3 functionName:(id)a4;
+ (BOOL)useCSULanguageEncoder;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)textEmbeddingForQuery:(id)a0 useFP16:(BOOL)a1;

@end
