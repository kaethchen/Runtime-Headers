@class QLFullscreenController;

@interface QLFullscreenControlsPanel : QLControlsPanel

@property (weak) QLFullscreenController *fullscreenController;

- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)backingScaleFactor;
- (BOOL)worksWhenModal;
- (BOOL)_qlIgnoreWindowForPreviewPanel:(id)a0;
- (id)_qlControllerCandidateForPreviewPanel:(id)a0;

@end
