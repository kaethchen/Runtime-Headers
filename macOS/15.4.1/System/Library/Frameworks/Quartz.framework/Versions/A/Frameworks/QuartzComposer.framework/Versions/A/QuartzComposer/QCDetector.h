@class QCImagePort, CIDetector, QCStructurePort, QCIndexPort, NSMutableDictionary, QCBooleanPort;

@interface QCDetector : QCPatch {
    QCImagePort *inputImage;
    QCBooleanPort *inputTracking;
    QCIndexPort *inputAccuracy;
    QCBooleanPort *inputBetterEyeLocs;
    QCStructurePort *outputFeatures;
    CIDetector *_detector;
    NSMutableDictionary *_option;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
