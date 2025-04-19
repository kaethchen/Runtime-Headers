@class QCImagePixelBuffer, QCImagePort, NSDictionary, QCIndexPort, QCNumberPort;

@interface QCImagePixel : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *inputPixelX;
    QCNumberPort *inputPixelY;
    QCIndexPort *inputColorSpace;
    QCNumberPort *outputRed;
    QCNumberPort *outputGreen;
    QCNumberPort *outputBlue;
    QCNumberPort *outputAlpha;
    QCImagePixelBuffer *_tileBuffer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tileBounds;
    NSDictionary *_options;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
