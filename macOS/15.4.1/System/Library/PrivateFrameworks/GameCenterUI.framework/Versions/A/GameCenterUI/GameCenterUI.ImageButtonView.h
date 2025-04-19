@class NSImage, NSString;

@interface GameCenterUI.ImageButtonView : GameCenterUI.ButtonView {
    void /* unknown type, empty encoding */ imageAlignment;
    void /* unknown type, empty encoding */ interItemSpace;
    void /* unknown type, empty encoding */ accessibilityDescription;
}

@property (class, nonatomic, readonly) double defaultInterItemSpace;

@property (nonatomic, retain) NSImage *image;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageView;
@property (nonatomic, readonly) BOOL hasImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textLayoutFrame;
@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, copy) NSString *accessibilityDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangeState;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)updateImageViewTint;

@end
