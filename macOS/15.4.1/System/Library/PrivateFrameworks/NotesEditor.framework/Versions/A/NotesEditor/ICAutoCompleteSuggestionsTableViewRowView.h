@interface ICAutoCompleteSuggestionsTableViewRowView : NSTableRowView

@property (nonatomic) BOOL isHeaderRow;

- (BOOL)isGroupRowStyle;
- (BOOL)allowsVibrancy;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEmphasized;
- (BOOL)wantsLayer;

@end
