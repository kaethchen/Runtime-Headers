@class VNSession;

@interface VNImageProcessingSession : NSObject <VNRequestWarming> {
    VNSession *_session;
}

- (id)init;
- (void).cxx_destruct;
- (id)detectionprintsFromRequest:(id)a0 performedOnPixelBuffer:(struct __CVBuffer { } *)a1 withAugmentations:(id)a2 error:(id *)a3;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (id)sceneprintsFromRequest:(id)a0 performedOnPixelBuffer:(struct __CVBuffer { } *)a1 withAugmentations:(id)a2 error:(id *)a3;

@end
