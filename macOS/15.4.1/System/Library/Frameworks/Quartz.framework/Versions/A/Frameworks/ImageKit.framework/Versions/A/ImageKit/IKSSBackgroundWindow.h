@class IKSSPanel, NSMutableArray;

@interface IKSSBackgroundWindow : NSWindow {
    IKSSPanel *_panel;
    NSMutableArray *_fauxUIElements;
}

- (void)dealloc;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)mouseMoved:(id)a0;
- (void)setPanel:(id)a0;
- (id)accessibilityAttributeValue2:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForPanelButtonAtIndex:(long long)a0;
- (void)buttonSetupDone:(id)a0;

@end
