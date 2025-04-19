@class NSString, AXVTextField;
@protocol AXVTitleWindowMouseEventDelegate;

@interface AXVTitleWindow : AXVVoiceOverStyleWindow <AXVViewMouseEventDelegate>

@property (retain, nonatomic, setter=_setTitleTextField:) AXVTextField *_titleTextField;
@property (copy, nonatomic) NSString *visualTitle;
@property (nonatomic) double baseFontSize;
@property (weak, nonatomic) id<AXVTitleWindowMouseEventDelegate> mouseEventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)_setupTitleTextField;
- (void)_adjustWindowFrameToFitContent:(double)a0;
- (void)_setupStackView;
- (id)_setupIndicatorForDirection:(long long)a0;
- (struct CGSize { double x0; double x1; })_sizeOfString:(id)a0 withFont:(id)a1;
- (struct CGSize { double x0; double x1; })_windowSizeToFitContent:(double)a0;
- (void)mouseDownOnView:(id)a0 event:(id)a1;

@end
