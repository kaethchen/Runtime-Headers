@class ICTableColumnRowButton;

@interface ICTableColumnRowButtonCell : NSButtonCell

@property (weak, nonatomic) ICTableColumnRowButton *parentButton;

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (void)swapCurrentColumnOrRowAXAction:(BOOL)a0 forwards:(BOOL)a1;

@end
