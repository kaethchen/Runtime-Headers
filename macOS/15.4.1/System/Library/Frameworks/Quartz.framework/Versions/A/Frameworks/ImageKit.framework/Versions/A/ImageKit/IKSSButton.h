@class NSString, NSMutableSet;

@interface IKSSButton : NSButton {
    NSMutableSet *_commandKeys;
}

@property (retain) NSString *toolTipString;

- (void)dealloc;
- (void)finalize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)setup;
- (void)setCommandKeys:(id)a0;
- (void)setImageName:(id)a0 bundle:(id)a1;

@end
