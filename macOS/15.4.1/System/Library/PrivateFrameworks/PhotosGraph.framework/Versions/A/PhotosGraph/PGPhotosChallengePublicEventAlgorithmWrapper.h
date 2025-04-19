@class PGPublicEventDisambiguator, CLSServiceManager, PGGraph, PHPhotoLibrary, CLSPublicEventManager;

@interface PGPhotosChallengePublicEventAlgorithmWrapper : NSObject {
    PGGraph *_graph;
    PHPhotoLibrary *_photoLibrary;
    CLSServiceManager *_serviceManager;
    CLSPublicEventManager *_publicEventManager;
    PGPublicEventDisambiguator *_publicEventDisambiguator;
}

- (void).cxx_destruct;
- (id)initWithEvaluationContext:(id)a0;
- (unsigned short)predictedQuestionStateForAssetUUID:(id)a0 publicEventMUID:(unsigned long long)a1;

@end
