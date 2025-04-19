@interface AVDesktopIntrinsicallySizedImageView : NSImageView {
    struct CGSize { double width; double height; } _avIntrinsicSize;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithImage:(id)a0 intrinsicSize:(struct CGSize { double x0; double x1; })a1;

@end
