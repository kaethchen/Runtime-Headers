@class NSView, CPKCategoryButton, NSMutableArray, NSButton;
@protocol CPKCategoriesPickerViewDelegate;

@interface CPKCategoriesPickerView : NSView

@property (nonatomic) unsigned long long highlightedPage;
@property (nonatomic) unsigned long long highlightedIndex;
@property (retain, nonatomic) CPKCategoryButton *leftChevron;
@property (retain, nonatomic) CPKCategoryButton *rightChevron;
@property (retain, nonatomic) NSMutableArray *pageArray;
@property (retain, nonatomic) NSView *iconContentView;
@property (retain, nonatomic) CPKCategoryButton *currentlySelectedButton;
@property (retain, nonatomic) NSButton *testButton;
@property (nonatomic) unsigned long long numberOfPages;
@property (nonatomic) BOOL shouldAnimatePageChanges;
@property (retain, nonatomic) NSView *trailingEdgeAuxiliaryView;
@property (nonatomic) unsigned long long visiblePageIndex;
@property (weak, nonatomic) id<CPKCategoriesPickerViewDelegate> delegate;

- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0 atIndex:(long long)a1;
- (void)updateViews;
- (BOOL)wantsLayer;
- (BOOL)isRTL;
- (void)chevronPressed:(id)a0;
- (void)addButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)categoryButtonPressed:(id)a0;
- (id)chevronWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 direction:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })contentTotalSize;
- (unsigned long long)currentlySelectedLinearIndex;
- (BOOL)hasBackwardsChevron;
- (BOOL)hasForwardChevron;
- (void)highlightIconAtPageIndex:(unsigned long long)a0 iconIndex:(unsigned long long)a1 userInitiated:(BOOL)a2;
- (long long)initialSelectionForState:(id)a0;
- (BOOL)isAtFirstPage;
- (BOOL)isAtLastPage;
- (id)pageAndIndexForLinearIndex:(unsigned long long)a0;
- (long long)selectedCategoryIndex;
- (void)setChevronActivated:(BOOL)a0 direction:(unsigned long long)a1;
- (void)setIcon:(id)a0 accessibilityLabel:(id)a1 tooltipIdentifier:(id)a2 forPageIndex:(unsigned long long)a3 iconIndex:(unsigned long long)a4;
- (void)setLeftChevronActivated:(BOOL)a0;
- (void)setNumberOfIcons:(unsigned long long)a0 forPageIndex:(unsigned long long)a1;
- (void)setRightChevronActivated:(BOOL)a0;
- (void)setSelectedCategoryIndex:(long long)a0;
- (void)updateAuxiliaryViewIfNecessary;
- (void)updateIconView;

@end
