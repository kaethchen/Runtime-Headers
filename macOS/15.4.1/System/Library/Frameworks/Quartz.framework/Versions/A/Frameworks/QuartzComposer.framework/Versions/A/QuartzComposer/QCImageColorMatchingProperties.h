@class QCImagePort, QCIndexPort;

@interface QCImageColorMatchingProperties : QCPatch {
    QCImagePort *inputImage;
    QCIndexPort *inputColorMatching;
    QCImagePort *outputImage;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
