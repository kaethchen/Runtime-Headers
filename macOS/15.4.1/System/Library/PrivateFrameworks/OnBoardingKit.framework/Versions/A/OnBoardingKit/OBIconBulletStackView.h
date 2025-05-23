@interface OBIconBulletStackView : NSStackView {
    double _itemSpacing;
}

@property (nonatomic) double iconTextPadding;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addEntryWithIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 text:(id)a2;
- (void)addEntryWithIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 attributedText:(id)a2;

@end
