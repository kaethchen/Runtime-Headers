@class QCImagePixelBuffer, QCNumberPort, QCImagePort;

@interface QCHotZone : QCPatch {
    QCNumberPort *inputHitX;
    QCNumberPort *inputHitY;
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputZ;
    QCNumberPort *inputRX;
    QCNumberPort *inputRY;
    QCNumberPort *inputRZ;
    QCNumberPort *inputWidth;
    QCNumberPort *inputHeight;
    QCImagePort *inputMask;
    QCNumberPort *outputHit;
    QCNumberPort *outputZoneX;
    QCNumberPort *outputZoneY;
    QCNumberPort *outputMaskX;
    QCNumberPort *outputMaskY;
    QCNumberPort *outputTopLeftX;
    QCNumberPort *outputTopLeftY;
    QCNumberPort *outputTopRightX;
    QCNumberPort *outputTopRightY;
    QCNumberPort *outputBottomLeftX;
    QCNumberPort *outputBottomLeftY;
    QCNumberPort *outputBottomRightX;
    QCNumberPort *outputBottomRightY;
    QCImagePixelBuffer *_pixelBuffer;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
