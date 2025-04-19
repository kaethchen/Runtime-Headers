@class QCImagePort, QCNumberPort;

@interface QCImageCrop : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *inputRectangle_X;
    QCNumberPort *inputRectangle_Y;
    QCNumberPort *inputRectangle_Z;
    QCNumberPort *inputRectangle_W;
    QCImagePort *outputImage;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
