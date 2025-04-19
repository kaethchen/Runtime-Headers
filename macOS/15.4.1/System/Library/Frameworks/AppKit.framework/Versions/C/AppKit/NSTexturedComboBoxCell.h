@interface NSTexturedComboBoxCell : NSComboBoxCell

- (BOOL)drawsBackground;
- (BOOL)_isToolbarComboBox;
- (double)_textVerticalAdjust;
- (double)_textVerticalInset;

@end
