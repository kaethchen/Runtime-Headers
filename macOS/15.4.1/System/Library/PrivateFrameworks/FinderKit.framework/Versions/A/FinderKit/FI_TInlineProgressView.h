@class NSString, FI_TPieChartProgressLayer, NSImageView;

@interface FI_TInlineProgressView : FI_TUpdateLayerView <NSAccessibilityProgressIndicator> {
    FI_TPieChartProgressLayer *_pieChartLayer;
    NSImageView *_templateImageView;
}

@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) double progress;
@property (readonly, nonatomic) double animationDuration;
@property (readonly, nonatomic) BOOL isProgressAnimationCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (id)accessibilityValue;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (void)initCommon;
- (void)setProgressDidCompleteHandler:(const void *)a0;

@end
