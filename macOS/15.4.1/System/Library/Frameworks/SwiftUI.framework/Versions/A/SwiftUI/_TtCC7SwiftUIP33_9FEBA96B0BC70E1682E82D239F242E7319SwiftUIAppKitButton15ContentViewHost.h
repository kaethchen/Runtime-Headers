@protocol NSContentStyle;

@interface _TtCC7SwiftUIP33_9FEBA96B0BC70E1682E82D239F242E7319SwiftUIAppKitButton15ContentViewHost : NSView {
    void /* unknown type, empty encoding */ contentStyleSignal;
    void /* unknown type, empty encoding */ ignoreContentStyleUpdates;
    void /* unknown type, empty encoding */ icsHeight;
    void /* unknown type, empty encoding */ firstBaselineOffset;
    void /* unknown type, empty encoding */ lastBaselineOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_helper;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;
@property (nonatomic, retain) id<NSContentStyle> contentStyle;
@property (nonatomic) BOOL flipped;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
