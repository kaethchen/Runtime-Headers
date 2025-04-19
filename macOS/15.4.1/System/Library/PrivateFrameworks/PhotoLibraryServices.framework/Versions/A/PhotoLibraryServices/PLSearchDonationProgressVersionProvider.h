@class NSString;

@interface PLSearchDonationProgressVersionProvider : NSObject <PLMediaProcessingAlgorithmVersionProvider>

@property short captionGenerationVersion;
@property short characterRecognitionAlgorithmVersion;
@property short faceAnalysisVersion;
@property short mediaAnalysisImageVersion;
@property unsigned long long mediaAnalysisVersion;
@property short sceneAnalysisVersion;
@property short imageEmbeddingVersion;
@property short videoEmbeddingVersion;
@property short stickerConfidenceAlgorithmVersion;
@property short vaAnalysisVersion;
@property short vaLocationAnalysisVersion;
@property short visualSearchAlgorithmVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
