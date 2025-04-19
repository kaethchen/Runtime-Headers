@class NSStackView, NSMapTable;

@interface PXHUDView : UXView

@property (retain, nonatomic) NSMapTable *visualizationToView;
@property (retain, nonatomic) NSStackView *stackView;

+ (Class)visualizationClassToViewClass:(Class)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addVisualization:(id)a0;
- (void)removeVisualization:(id)a0;

@end
