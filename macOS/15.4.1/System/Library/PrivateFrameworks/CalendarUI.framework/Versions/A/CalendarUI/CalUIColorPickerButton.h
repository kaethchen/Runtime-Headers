@class NSString, NSColor, NSImage;

@interface CalUIColorPickerButton : NSButton

@property (retain) NSString *symbolicColor;
@property (retain) NSColor *dotColor;
@property (retain) NSImage *defaultImage;
@property (retain) NSImage *selectedImage;
@property (retain) NSImage *hoverImage;
@property (retain) NSImage *mouseDownImage;

+ (Class)cellClass;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)_defaultImage;
- (id)_hoverImageWithMouseDown:(BOOL)a0;
- (id)_selectedImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 symbolicColor:(id)a1 color:(id)a2;
- (void)isHovered:(BOOL)a0;
- (void)resetButton;

@end
