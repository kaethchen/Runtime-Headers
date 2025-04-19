@class NSView, NSLayoutConstraint, NSMutableArray, FI_TTextField;

@interface FI_TTitleAndValueView : FI_TUpdateLayerView {
    NSMutableArray *_constraints;
    NSLayoutConstraint *_titleAndValueGapConstraint;
    double _titleAndValueGap;
    BOOL _loadedFromNib;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
}

@property (retain, nonatomic) FI_TTextField *titleField;
@property (retain, nonatomic) NSView *valueView;
@property (retain, nonatomic) NSView *separatorView;
@property (nonatomic) double titleAndValueGap;
@property (nonatomic) double valueViewTopInset;
@property (nonatomic) double valueViewBottomInset;
@property (nonatomic) double maxTitleWidthPercentage;
@property (nonatomic) BOOL allowWrappingTitle;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)initCommon;
- (double)calcTopMarginConstraintConstant;
- (void)_updateInternalConstraints;
- (double)calcBottomMarginConstraintConstant;
- (void)updateValueViewAXTitle;

@end
