@class QCNumberPort, QCBooleanPort;

@interface QCTablet : QCPatch {
    QCNumberPort *outputX;
    QCNumberPort *outputY;
    QCNumberPort *outputTiltX;
    QCNumberPort *outputTiltY;
    QCNumberPort *outputPressure;
    QCBooleanPort *outputTipButton;
    QCBooleanPort *outputLowerButton;
    QCBooleanPort *outputUpperButton;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
