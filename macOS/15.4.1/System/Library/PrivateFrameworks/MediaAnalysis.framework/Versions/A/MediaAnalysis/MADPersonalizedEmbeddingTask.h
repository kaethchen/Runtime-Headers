@class VUWGallery;

@interface MADPersonalizedEmbeddingTask : MADMultiModalProcessingSubtask {
    VUWGallery *_gallery;
}

+ (id)embeddingFromMultiArray:(id)a0 normalize:(BOOL)a1 version:(unsigned long long)a2;
+ (BOOL)prewarmRequest:(id)a0 error:(id *)a1;

- (int)run;
- (void).cxx_destruct;
- (long long)revision;
- (unsigned long long)imageEmbeddingVersion;
- (id)gallery;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)processEntitySegment:(id)a0 tokenEmbeddingType:(long long)a1 textEncoderInput:(id *)a2 ageType:(unsigned short *)a3;
- (int)processFaceprintSegment:(id)a0 resource:(id)a1 textEncoderInput:(id *)a2 faceObservation:(id *)a3;
- (int)processGenerativePlaygroundsOutput:(id)a0 resource:(id)a1 entitySegment:(id)a2 imageSegment:(id)a3 faceObservation:(id)a4 personalizationIndex:(unsigned long long)a5 embeddingResult:(id *)a6 hiddenLayerResult:(id *)a7 pooledEmbeddingResult:(id *)a8;
- (int)processImageSegment:(id)a0 resource:(id)a1 textEncoderInput:(id *)a2 faceObservation:(id *)a3 ageType:(unsigned short *)a4;
- (int)processInput:(id)a0 resource:(id)a1 result:(id *)a2;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 imageEmbedding:(id *)a1;
- (int)processSegments:(id)a0 resource:(id)a1 keyEntitySegment:(id *)a2 keyImageSegment:(id *)a3 faceObservation:(id *)a4 personalizationIndex:(unsigned long long *)a5 textEncoderInputs:(id)a6;
- (int)processSystemSearchOutput:(id)a0 resource:(id)a1 embeddingResult:(id *)a2;

@end
