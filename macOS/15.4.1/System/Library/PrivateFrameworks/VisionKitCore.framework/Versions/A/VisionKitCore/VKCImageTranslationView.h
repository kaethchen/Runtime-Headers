@class LTUIVisualTranslationView, NSView, VKCVisualSearchResult;

@interface VKCImageTranslationView : VKCImageBaseOverlayView

@property (retain, nonatomic) LTUIVisualTranslationView *visualTranslationView;
@property (weak, nonatomic) NSView *presentationAnchorView;
@property BOOL translationNeedsUpdate;
@property (retain, nonatomic) NSView *translationContainerView;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;

- (id)init;
- (void).cxx_destruct;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRecognitionResult:(id)a0;
- (id)recognizedLines;
- (void)_justExistsToStopAWarning;
- (void)checkForTranslationResultsWithCompletion:(id /* block */)a0;
- (void)hideTranslationOverlay;
- (void)showTranslationOverlay;

@end
