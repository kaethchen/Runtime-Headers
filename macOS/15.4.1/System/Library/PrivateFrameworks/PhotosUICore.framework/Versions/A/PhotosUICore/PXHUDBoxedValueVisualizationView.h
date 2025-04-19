@class UXLabel, PXHUDBoxedValueVisualization;

@interface PXHUDBoxedValueVisualizationView : PXHUDAbstractVisualizationView {
    UXLabel *_titleAndValueLabel;
}

@property (retain, nonatomic) PXHUDBoxedValueVisualization *visualization;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTitleAndValueLabel;
- (void)visualizationDidUpdate;

@end
