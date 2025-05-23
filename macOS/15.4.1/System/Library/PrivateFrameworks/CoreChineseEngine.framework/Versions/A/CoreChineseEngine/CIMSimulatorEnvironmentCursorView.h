@class NSTimer;

@interface CIMSimulatorEnvironmentCursorView : NSView

@property (retain, nonatomic) NSTimer *blinkingTimer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)blinkingTimerFired:(id)a0;

@end
