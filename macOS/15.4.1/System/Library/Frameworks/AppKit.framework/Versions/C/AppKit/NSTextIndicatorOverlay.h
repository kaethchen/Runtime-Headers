@class NSArray, NSView, NSClipView;
@protocol NSObject;

@interface NSTextIndicatorOverlay : NSView {
    id<NSObject> _geometryObserver;
    NSView *_maskProviderView;
    NSView *_maskReferenceView;
}

@property (class, copy, nonatomic) NSArray *maskReferenceClassNames;

@property (retain, nonatomic) NSClipView *observedClipView;

+ (BOOL)clipsToBounds;

- (void).cxx_destruct;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeMaskRect;
- (id)computeMaskReferenceView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
