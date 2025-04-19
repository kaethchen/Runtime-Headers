@class NSTextFieldCell, NSPopUpButtonCell, NSDictionary, NSMenuItem, NSColor;

@interface ABLabelPopUpButton : NSPopUpButton {
    NSDictionary *mLabelAttributes;
    double mFontLineHeight;
    double mFontBaselineOffset;
    NSTextFieldCell *mTextFieldCellForDrawing;
    NSPopUpButtonCell *mPopupButtonImageFactoryCell;
}

@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSMenuItem *spacerItem;
@property (retain, nonatomic) NSMenuItem *customItem;

+ (double)rightOutset;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;
- (void)sizeToFit;
- (void)ABLabelPopUpButton_commonInit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcTextRectAndDraw:(BOOL)a0;
- (void)includeCustomLabelItem:(BOOL)a0;
- (void)setMenuItems:(id)a0;

@end
