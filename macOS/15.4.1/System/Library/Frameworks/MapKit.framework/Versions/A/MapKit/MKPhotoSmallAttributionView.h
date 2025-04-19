@class NSView, _MKUILabel;

@interface MKPhotoSmallAttributionView : NSView {
    _MKUILabel *_label;
    NSView *_backgroundView;
    struct CGSize { double width; double height; } _labelSize;
}

- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithMapItem:(id)a0;
- (id)attributionFont;

@end
