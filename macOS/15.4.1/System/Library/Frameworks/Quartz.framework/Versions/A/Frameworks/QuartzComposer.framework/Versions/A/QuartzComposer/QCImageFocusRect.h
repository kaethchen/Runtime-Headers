@class QCImagePort, QCNumberPort;

@interface QCImageFocusRect : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *outputOriginX;
    QCNumberPort *outputOriginY;
    QCNumberPort *outputWidth;
    QCNumberPort *outputHeight;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (id)_getFocusRect:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
