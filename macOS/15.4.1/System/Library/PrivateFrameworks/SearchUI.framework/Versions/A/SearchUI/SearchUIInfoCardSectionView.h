@class SFInfoCardSection, NSString, NUIContainerStackView, TLKTextButton, NSMutableArray, NSFont;

@interface SearchUIInfoCardSectionView : SearchUICardSectionView <SearchUIInfoSizingDelegate>

@property (retain, nonatomic) SFInfoCardSection *section;
@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) NUIContainerStackView *baseView;
@property (retain, nonatomic) NUIContainerStackView *expandedView;
@property (retain, nonatomic) NSMutableArray *rowStackViews;
@property (retain, nonatomic) NUIContainerStackView *showMoreStackView;
@property (retain, nonatomic) TLKTextButton *showMoreButton;
@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) NSFont *labelFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)setupContentView;
- (void)configureShowMoreViewIfNecessary;
- (void)showMoreButtonPressed;
- (void)updateWithRowModel:(id)a0;

@end
