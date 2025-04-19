@protocol SOAddRemoveActionBarCellDelegate;

@interface SOAddRemoveActionBarCell : NSSegmentedCell

@property (nonatomic) id<SOAddRemoveActionBarCellDelegate> customDelegate;

- (double)_menuDelayTimeForSegment:(long long)a0;
- (id)accessibilityAttributeValue:(id)a0;
- (void)drawSegment:(long long)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;

@end
