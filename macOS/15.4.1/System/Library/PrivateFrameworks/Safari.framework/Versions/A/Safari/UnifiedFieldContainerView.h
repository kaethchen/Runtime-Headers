@class UnifiedField, UnifiedFieldBezelView, NSView;

@interface UnifiedFieldContainerView : NSTextField

@property (retain, nonatomic) UnifiedField *unifiedField;
@property (retain, nonatomic) UnifiedFieldBezelView *bezelView;
@property (weak, nonatomic) NSView *scribbleOverlay;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)setControlSize:(unsigned long long)a0;
- (void)_finishInitialization;
- (id)accessibilityChildren;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidMoveToSuperview;

@end
