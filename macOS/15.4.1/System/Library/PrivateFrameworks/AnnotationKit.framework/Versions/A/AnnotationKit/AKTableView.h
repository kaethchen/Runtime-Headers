@protocol AKSignatureTableViewEventDelegate;

@interface AKTableView : NSTableView

@property (weak) id<AKSignatureTableViewEventDelegate> tableViewEventDelegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)selectItem:(id)a0;
- (void)_setupAccessibilityCustomActions;

@end
