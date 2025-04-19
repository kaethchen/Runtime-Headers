@class NSString;

@interface AXVWindow : NSWindow <AXFScreenManagerObserving>

@property (nonatomic) BOOL _listeningForScreenParametersChangedNotification;
@property (nonatomic) BOOL _didHide;
@property (nonatomic) struct CGPoint { double x0; double x1; } frameCenter;
@property (nonatomic) struct CGSize { double x0; double x1; } frameSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hide;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)show;
- (void)screenManager:(id)a0 screensChanged:(id)a1;
- (void)_setTrustedForObscuring;
- (void)handleScreenParametersChanged;

@end
