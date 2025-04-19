@class WBSNamedColorOption, ColorPickerButton;

@interface _ColorOptionItem : NSCollectionViewItem

@property (weak, nonatomic) ColorPickerButton *colorPickerButton;
@property (retain, nonatomic) WBSNamedColorOption *color;

- (void).cxx_destruct;
- (void)loadView;
- (void)setSelected:(BOOL)a0;

@end
