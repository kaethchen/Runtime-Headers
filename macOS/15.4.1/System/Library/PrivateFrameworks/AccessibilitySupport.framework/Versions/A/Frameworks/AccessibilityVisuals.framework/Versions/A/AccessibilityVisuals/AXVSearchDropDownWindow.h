@class NSTextField, NSString, NSScrollView, NSArray, NSSplitView, NSAttributedString, NSMutableArray, NSRunningApplication;
@protocol NSTextFieldDelegate;

@interface AXVSearchDropDownWindow : AXVWindow <NSSplitViewDelegate>

@property (retain, nonatomic) NSSplitView *_topLevelSplitView;
@property (retain, nonatomic) NSScrollView *_dropDownScrollView;
@property (retain, nonatomic) NSSplitView *_dropDownSplitView;
@property (retain, nonatomic) NSTextField *_searchTextField;
@property (nonatomic) BOOL dropDownEnabled;
@property (readonly, nonatomic) NSArray *_sectionViews;
@property (retain, nonatomic) NSRunningApplication *_previouslyActiveApplication;
@property (retain, nonatomic) NSMutableArray *_mutableSections;
@property (nonatomic) double dropDownHeight;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *placeholderSearchText;
@property (retain, nonatomic) NSAttributedString *attributedSearchText;
@property (retain, nonatomic) NSAttributedString *placeholderAttributedSearchText;
@property (weak, nonatomic) id<NSTextFieldDelegate> searchTextDelegate;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) Class sectionViewClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (void)hide;
- (void)show;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })splitView:(id)a0 effectiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forDrawnRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 ofDividerAtIndex:(long long)a3;
- (id)_itemViewForItem:(id)a0;
- (id)_findSectionViewForSectionInDropDown:(id)a0;
- (id)_initializeSearchTextField;
- (id)_itemFromItem:(id)a0 direction:(unsigned long long)a1;
- (id)_makeSearchBarStackView;
- (id)_sectionViewWithSection:(id)a0;
- (id)_visualEffectBackgroundView;
- (void)addSectionToDropDown:(id)a0;
- (BOOL)containsSectionInDropDown:(id)a0;
- (void)hideDropDown;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dropDownHeight:(double)a1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dropDownHeight:(double)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dropDownHeight:(double)a1 backing:(unsigned long long)a2 defer:(BOOL)a3 screen:(id)a4;
- (void)insertSectionToDropDown:(id)a0 atIndex:(long long)a1;
- (id)nextItemFromItem:(id)a0;
- (id)previousItemFromItem:(id)a0;
- (void)removeAllSectionsFromDropDown;
- (void)removeSectionFromDropDown:(id)a0;
- (void)scrollToItem:(id)a0;
- (void)showAndClearSearchText;
- (void)showDropDown;

@end
