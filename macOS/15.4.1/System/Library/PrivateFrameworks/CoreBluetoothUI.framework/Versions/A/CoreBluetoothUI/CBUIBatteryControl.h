@class NSColor, NSTableCellView, NSImage;

@interface CBUIBatteryControl : NSView {
    NSImage *batteryImage;
    NSImage *levelFillImage;
}

@property NSTableCellView *BT_row;
@property (copy) NSColor *color;
@property (readonly) long long tag;

+ (id)_batteryImageWithName:(id)a0;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)batteryPercent:(id)a0;
- (void)drawMask:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withColor:(id)a2;
- (id)getClassicPeer;

@end
