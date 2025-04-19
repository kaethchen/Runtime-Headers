@class QCImagePort, QCStructurePort, QCNumberPort, QCStringPort, QCBooleanPort;

@interface QCImageInfo : QCPatch {
    QCImagePort *inputImage;
    QCStringPort *outputSourceRepresentation;
    QCNumberPort *outputPixelsOriginX;
    QCNumberPort *outputPixelsOriginY;
    QCNumberPort *outputPixelsSizeH;
    QCNumberPort *outputPixelsSizeV;
    QCImagePort *outputDomainOfDefinition;
    QCStringPort *outputColorSpace;
    QCBooleanPort *outputHasAlpha;
    QCStringPort *outputTransformation;
    QCStructurePort *outputStaticMetadata;
    QCStructurePort *outputForwardMetadata;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
