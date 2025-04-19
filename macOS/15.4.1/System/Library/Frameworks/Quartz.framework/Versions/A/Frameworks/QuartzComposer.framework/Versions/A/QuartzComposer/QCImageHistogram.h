@class QCImagePort, QCStructurePort;

@interface QCImageHistogram : QCPatch {
    QCImagePort *inputImage;
    QCStructurePort *outputRedHistogram;
    QCStructurePort *outputGreenHistogram;
    QCStructurePort *outputBlueHistogram;
    QCStructurePort *outputAlphaHistogram;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
