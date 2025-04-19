@class NSImage, NSMenu, NSMenuExtra;

@interface NSMenuExtraView : NSView {
    NSMenu *_menu;
    NSMenuExtra *_menuExtra;
}

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *alternateImage;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)setMenu:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 menuExtra:(id)a1;

@end
