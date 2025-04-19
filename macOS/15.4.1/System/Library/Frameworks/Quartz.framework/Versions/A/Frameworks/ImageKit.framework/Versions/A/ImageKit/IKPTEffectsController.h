@class NSString, IKPTContentViewController, QCCompositionPickerView;

@interface IKPTEffectsController : IKViewController {
    QCCompositionPickerView *_pickerView;
}

@property IKPTContentViewController *ikpt_contentViewController;
@property (retain) NSString *qcIdentifier;

- (void)dealloc;
- (void)setImage:(id)a0;
- (void)loadView;
- (void)startAnimation;
- (id)pickerView;
- (void)setupPickerView;
- (void)compositionPickerView:(id)a0 didSelectComposition:(id)a1;
- (void)compositionPickerView:(id)a0 willSelectComposition:(id)a1;
- (void)compositionPickerViewDidStartAnimating:(id)a0;
- (BOOL)compositionPickerViewShouldStackCompositionsOnSelection:(id)a0;
- (void)compositionPickerViewWillStopAnimating:(id)a0;
- (id)selectedQCIdentifier;
- (void)setSelectedComposition:(id)a0;
- (void)setZoomRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
