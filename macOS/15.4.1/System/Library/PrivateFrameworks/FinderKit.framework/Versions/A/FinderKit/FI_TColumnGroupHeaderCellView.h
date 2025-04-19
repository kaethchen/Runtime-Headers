@class NSImage;

@interface FI_TColumnGroupHeaderCellView : NSTableCellView

@property (nonatomic, getter=isInFloatingHeader) BOOL inFloatingHeader;
@property (retain, nonatomic) NSImage *tagImage;

- (void)layout;
- (id)initWithFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 withGroupTextField:(id)a1;

@end
