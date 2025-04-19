@class AXChartDescriptor;

@interface AccessibilitySharedUISupport.ChartSonificationContainerView : NSView <AXChart> {
    void /* unknown type, empty encoding */ chartDescriptor;
    void /* unknown type, empty encoding */ playheadView;
    void /* unknown type, empty encoding */ playheadLabel;
    void /* unknown type, empty encoding */ playheadTimer;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ numberFormatter;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)updatePlayhead:(double)a0;

@end
