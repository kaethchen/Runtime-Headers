@class QCImagePort, QCStructurePort;

@interface QCImageProperties : QCPatch {
    QCImagePort *inputImage;
    QCStructurePort *outputProperties;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
