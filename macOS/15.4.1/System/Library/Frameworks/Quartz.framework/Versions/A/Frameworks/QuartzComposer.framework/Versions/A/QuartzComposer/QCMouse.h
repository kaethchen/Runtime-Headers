@class QCNumberPort, QCBooleanPort;

@interface QCMouse : QCPatch {
    QCNumberPort *outputX;
    QCNumberPort *outputY;
    QCBooleanPort *outputButton1;
    QCBooleanPort *outputButton2;
    QCBooleanPort *outputButton3;
    QCNumberPort *outputScrollX;
    QCNumberPort *outputScrollY;
    QCNumberPort *outputScrollZ;
    QCNumberPort *_outputRotation;
    QCNumberPort *_outputMagnification;
    QCNumberPort *_outputSwipeX;
    QCNumberPort *_outputSwipeY;
    QCBooleanPort *_inputResetScroll;
    QCNumberPort *_inputScrollFactor;
    QCBooleanPort *_inputResetRotation;
    QCBooleanPort *_inputResetMagnification;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    BOOL _integrate;
    BOOL _multitouch;
    BOOL _integrateRotation;
    BOOL _integrateMagnification;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (BOOL)integrate;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setIntegrate:(BOOL)a0;
- (void)setIntegrateMagnification:(BOOL)a0;
- (void)setIntegrateRotation:(BOOL)a0;
- (void)setMultitouch:(BOOL)a0;

@end
