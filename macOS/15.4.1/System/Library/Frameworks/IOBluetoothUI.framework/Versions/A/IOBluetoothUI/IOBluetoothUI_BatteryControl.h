@class NSTableCellView, NSTextField, NSImage, NSNumber;

@interface IOBluetoothUI_BatteryControl : NSView {
    float receivedValue;
    NSImage *batteryImage;
    NSImage *levelImage0;
    NSImage *levelImage1;
    NSImage *levelImage2;
    BOOL isUsingRedLevel;
    BOOL mSelected;
    BOOL mDrawNow;
    NSNumber *floatVal;
}

@property NSTextField *BT_deviceName;
@property NSTableCellView *BT_row;
@property (nonatomic) int batteryState;
@property (nonatomic) BOOL scalesWhenResized;
@property (nonatomic) float floatValue;
@property (nonatomic) float redLevelThreshold;

+ (id)_batteryImageForState:(int)a0;
+ (id)_batteryLevelImage:(unsigned char)a0 useRedVersion:(BOOL)a1;
+ (id)_batteryImageWithName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawBatteryImage:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)_drawBatteryLevelWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 batteryImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setupLevelImages;
- (float)batteryPercentForIcon;
- (void)battery_receivedRowSelected:(id)a0;

@end
