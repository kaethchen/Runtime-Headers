@class NSControl;

@interface _MKSmallCalloutPassthroughButton : NSControl

@property (retain, nonatomic) NSControl *targetControl;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)_forwardAction:(SEL)a0 toTargetViewWithEvent:(id)a1;

@end
