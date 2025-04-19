@interface TKPickerTableRowView : NSTableRowView

@property (nonatomic) double selectionAlphaOverride;

+ (id)defaultAnimationForKey:(id)a0;

- (void)drawSelectionInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)interiorBackgroundStyle;
- (void)setSelected:(BOOL)a0;

@end
