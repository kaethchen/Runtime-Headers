@interface NSForm : NSMatrix

+ (void)initialize;

- (id)addEntry:(id)a0;
- (long long)indexOfSelectedItem;
- (double)_maxWidth;
- (void)_resetTitleWidths;
- (id)accessibilityAttributeNames;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityRoleAttribute;
- (void)calcSize;
- (id)cellAtIndex:(long long)a0;
- (void)drawCellAtIndex:(long long)a0;
- (id)font;
- (long long)indexOfCellWithTag:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)insertEntry:(id)a0 atIndex:(long long)a1;
- (double)preferredTextFieldWidth;
- (void)removeEntryAtIndex:(long long)a0;
- (void)selectTextAtIndex:(long long)a0;
- (void)setBezeled:(BOOL)a0;
- (void)setBordered:(BOOL)a0;
- (void)setEntryWidth:(double)a0;
- (void)setFont:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setInterlineSpacing:(double)a0;
- (void)setPreferredTextFieldWidth:(double)a0;
- (void)setTextAlignment:(long long)a0;
- (void)setTextBaseWritingDirection:(long long)a0;
- (void)setTextFont:(id)a0;
- (void)setTitleAlignment:(long long)a0;
- (void)setTitleBaseWritingDirection:(long long)a0;
- (void)setTitleFont:(id)a0;
- (void)sizeToFit;

@end
