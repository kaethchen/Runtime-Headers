@class QCIndexPort, QCImagePort, QCNumberPort;

@interface QCImageDimensions : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *outputWidth;
    QCNumberPort *outputHeight;
    QCIndexPort *outputPixelsWide;
    QCIndexPort *outputPixelsHigh;
    QCNumberPort *outputRatio;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
