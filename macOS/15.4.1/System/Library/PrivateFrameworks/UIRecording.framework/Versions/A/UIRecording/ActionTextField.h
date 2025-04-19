@class NSString;

@interface ActionTextField : NSTextField {
    NSString *_action;
}

- (void)dealloc;
- (void)setActionName:(id)a0;
- (id)actionName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 action:(id)a2 font:(id)a3;
- (BOOL)isActionTextField__;

@end
