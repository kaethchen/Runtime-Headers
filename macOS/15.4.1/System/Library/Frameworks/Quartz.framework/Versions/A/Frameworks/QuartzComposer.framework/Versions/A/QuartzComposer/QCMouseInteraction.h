@class QCBooleanPort, QCArray, NSEvent, QCIndexPort, QCNumberPort, QCInteractionPort;

@interface QCMouseInteraction : QCPatch <QCInteractionPatch> {
    QCInteractionPort *outputInteraction;
    QCBooleanPort *outputMouseDown;
    QCBooleanPort *outputMouseOver;
    QCIndexPort *outputClickCount;
    QCNumberPort *_outputXLocal;
    QCNumberPort *_outputYLocal;
    QCNumberPort *_inputInitialXDrag;
    QCNumberPort *_inputInitialYDrag;
    QCNumberPort *_inputInitialRotateValue;
    QCNumberPort *_inputInitialMagnifyValue;
    QCNumberPort *_outputXDrag;
    QCNumberPort *_outputYDrag;
    QCBooleanPort *_outputRotate;
    QCNumberPort *_outputRotateValue;
    QCBooleanPort *_outputMagnify;
    QCNumberPort *_outputMagnifyValue;
    QCNumberPort *_outputSwipeX;
    QCNumberPort *_outputSwipeY;
    QCArray *_input;
    BOOL _needRedraw;
    BOOL _multitouch;
    BOOL _useFeedback;
    struct __CFArray { } *_interactionManagers;
    NSEvent *_lastEvent;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (void)disable:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (BOOL)multitouch;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)nodeActorForView:(id)a0;
- (void)setMultitouch:(BOOL)a0;
- (void)setRenderingPatch:(id)a0 iteration:(unsigned long long)a1;

@end
