@class NSImage;

@interface IKPTSquareButton : NSButton {
    NSImage *_initialImage;
}

@property long long style;
@property BOOL displaysState;

+ (Class)cellClass;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateStyle;
- (BOOL)_imageButton;

@end
