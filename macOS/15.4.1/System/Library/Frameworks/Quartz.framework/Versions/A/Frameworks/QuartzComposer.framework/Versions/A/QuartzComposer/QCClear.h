@class QCColorPort;

@interface QCClear : QCRenderingPatch {
    QCColorPort *inputColor;
    BOOL _clearDepthBuffer;
    BOOL _clearColorBuffer;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)allowsScissors:(id)a0;
- (BOOL)clearsColorBuffer;
- (BOOL)clearsDepthBuffer;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setClearsColorBuffer:(BOOL)a0;
- (void)setClearsDepthBuffer:(BOOL)a0;

@end
