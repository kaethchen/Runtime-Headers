@class ScribbleSelectionOverlay;

@interface ScribbleOverlay : NSView {
    ScribbleSelectionOverlay *_selectionOverlay;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endSelection;
- (void)endSelectionWithCompletion:(id /* block */)a0;
- (void)moveSelectionToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;

@end
