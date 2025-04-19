@class NSTrackingArea, NSArray, NSButton;

@interface ICTableColumnRowButton : NSButton

@property (retain, nonatomic) NSTrackingArea *mouseTrackingArea;
@property (retain, nonatomic) NSArray *columnOrRowIdentifiers;
@property (readonly, nonatomic) BOOL isColumn;
@property (readonly, nonatomic) BOOL isLTR;
@property (readonly, nonatomic) NSButton *disclosureButton;

+ (BOOL)clipsToBounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setState:(long long)a0;
- (void)layout;
- (void)cursorUpdate:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (id)initAsColumn:(BOOL)a0 isLeftToRight:(BOOL)a1;
- (id)tableAXController;
- (void)updateAccentColor;

@end
