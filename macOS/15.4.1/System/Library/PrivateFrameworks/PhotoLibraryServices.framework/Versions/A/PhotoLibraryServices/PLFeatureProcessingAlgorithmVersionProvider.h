@class NSString;

@interface PLFeatureProcessingAlgorithmVersionProvider : NSObject <PLMediaProcessingAlgorithmVersionProvider>

@property short sceneAnalysisVersion;
@property short faceAnalysisVersion;
@property short characterRecognitionAlgorithmVersion;
@property short visualSearchAlgorithmVersion;
@property short stickerConfidenceAlgorithmVersion;
@property short vaAnalysisVersion;
@property unsigned long long mediaAnalysisVersion;
@property short mediaAnalysisImageVersion;
@property short vaLocationAnalysisVersion;
@property short captionGenerationVersion;
@property short imageEmbeddingVersion;
@property short videoEmbeddingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)provider;
+ (id)descriptionForVersionProvider:(id)a0;

- (id)init;

@end
