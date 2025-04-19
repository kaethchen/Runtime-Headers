@class NSArray, NSString, NSMutableArray;

@interface _UXToolbarItemsContainer : UXView <_UXBarItemsContainer> {
    NSMutableArray *__addedConstraints;
    BOOL _singleItemMode;
    BOOL _isTransitioning;
}

@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double baselineOffsetFromBottom;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (readonly, nonatomic) BOOL hidesGlobalTrailingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)toolbarItemsContainerForToolbar:(id)a0 items:(id)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)lastBaselineOffsetFromBottom;
- (void)updateConstraints;
- (void)prepareForTransition;

@end
