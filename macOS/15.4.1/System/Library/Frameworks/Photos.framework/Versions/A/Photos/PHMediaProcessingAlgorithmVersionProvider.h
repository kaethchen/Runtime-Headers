@class NSString;

@interface PHMediaProcessingAlgorithmVersionProvider : NSObject <PLMediaProcessingAlgorithmVersionProvider, PHMediaProcessingAlgorithmVersionProvider>

@property short sceneAnalysisVersion;
@property short faceAnalysisVersion;
@property short characterRecognitionAlgorithmVersion;
@property short visualSearchAlgorithmVersion;
@property short stickerConfidenceAlgorithmVersion;
@property short vaAnalysisVersion;
@property short vaLocationAnalysisVersion;
@property unsigned long long mediaAnalysisVersion;
@property short mediaAnalysisImageVersion;
@property short captionGenerationVersion;
@property short imageEmbeddingVersion;
@property short videoEmbeddingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForVersionProvider:(id)a0;
+ (id)dictionaryForVersionProvider:(id)a0;
+ (id)providerWithCurrentVersions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProvider:(id)a0;
- (id)initWithSceneAnalysisVersion:(short)a0 faceAnalysisVersion:(short)a1 characterRecognitionAlgorithmVersion:(short)a2 visualSearchAlgorithmVersion:(short)a3 stickerConfidenceAlgorithmVersion:(short)a4 vaAnalysisVersion:(short)a5 mediaAnalysisVersion:(unsigned long long)a6;
- (id)initWithSceneAnalysisVersion:(short)a0 faceAnalysisVersion:(short)a1 characterRecognitionAlgorithmVersion:(short)a2 visualSearchAlgorithmVersion:(short)a3 stickerConfidenceAlgorithmVersion:(short)a4 vaAnalysisVersion:(short)a5 mediaAnalysisVersion:(unsigned long long)a6 mediaAnalysisImageVersion:(short)a7;
- (id)initWithSceneAnalysisVersion:(short)a0 faceAnalysisVersion:(short)a1 characterRecognitionAlgorithmVersion:(short)a2 visualSearchAlgorithmVersion:(short)a3 stickerConfidenceAlgorithmVersion:(short)a4 vaAnalysisVersion:(short)a5 vaLocationAnalysisVersion:(short)a6 mediaAnalysisVersion:(unsigned long long)a7 mediaAnalysisImageVersion:(short)a8 captionGenerationVersion:(short)a9 imageEmbeddingVersion:(short)a10 videoEmbeddingVersion:(short)a11;
- (id)initWithSceneAnalysisVersion:(short)a0 imageEmbeddingVersion:(short)a1 faceAnalysisVersion:(short)a2 characterRecognitionAlgorithmVersion:(short)a3 visualSearchAlgorithmVersion:(short)a4 stickerConfidenceAlgorithmVersion:(short)a5 vaAnalysisVersion:(short)a6 vaLocationAnalysisVersion:(short)a7 mediaAnalysisVersion:(unsigned long long)a8 mediaAnalysisImageVersion:(short)a9;
- (id)initWithSceneAnalysisVersion:(short)a0 imageEmbeddingVersion:(short)a1 faceAnalysisVersion:(short)a2 characterRecognitionAlgorithmVersion:(short)a3 visualSearchAlgorithmVersion:(short)a4 stickerConfidenceAlgorithmVersion:(short)a5 vaAnalysisVersion:(short)a6 vaLocationAnalysisVersion:(short)a7 mediaAnalysisVersion:(unsigned long long)a8 mediaAnalysisImageVersion:(short)a9 captionGenerationVersion:(short)a10;

@end
