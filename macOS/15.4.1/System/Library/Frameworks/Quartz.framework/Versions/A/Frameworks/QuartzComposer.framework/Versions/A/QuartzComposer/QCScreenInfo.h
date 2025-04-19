@class QCNumberPort, QCIndexPort;

@interface QCScreenInfo : QCPatch {
    QCNumberPort *outputWidth;
    QCNumberPort *outputHeight;
    QCIndexPort *outputPixelsWide;
    QCIndexPort *outputPixelsHigh;
    QCNumberPort *outputRatio;
    QCNumberPort *outputResolution;
    BOOL _cleanAperture;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setUseCleanAperture:(BOOL)a0;
- (BOOL)useCleanAperture;

@end
