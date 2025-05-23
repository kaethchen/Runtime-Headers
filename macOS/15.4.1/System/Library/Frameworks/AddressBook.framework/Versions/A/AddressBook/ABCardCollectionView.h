@class ABCardViewStyleProvider, NSString, CNContact, NSArray, NSMutableArray;
@protocol ABCardCollectionViewDelegate, CNCancelable, ABCardCollectionViewSupport, ABCardCollectionViewPresentation, ABCardCollectionViewDataSource;

@interface ABCardCollectionView : NSView <ABCardCollectionViewPresentationDelegate> {
    NSMutableArray *_collectionViewItems;
    NSMutableArray *_noteCollectionItems;
    id<ABCardCollectionViewPresentation> _itemPresentor;
    BOOL mInReflow;
    NSArray *_constraints;
    long long _noteResponderIndexAtLastTeardown;
    double _labelColumnWidth;
    id<CNCancelable> _frameDidChangeToken;
}

@property (weak) id<ABCardCollectionViewSupport> cardView;
@property (getter=isLoaded) BOOL loaded;
@property (weak, nonatomic) id<ABCardCollectionViewDataSource> dataSource;
@property (weak, nonatomic) id<ABCardCollectionViewDelegate> delegate;
@property (readonly, nonatomic) CNContact *contact;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (nonatomic) BOOL reloadEnabled;
@property (readonly, nonatomic) BOOL isEditing;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isTemplate;
@property (readonly, nonatomic) BOOL isSuggestedCardMode;
@property (readonly, nonatomic) double leftMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relationships;
+ (id)sortedCollectionViewProperties;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeItem:(id)a0;
- (BOOL)commitEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (id)updateKeyViewLoop;
- (void)viewWillMoveToWindow:(id)a0;
- (void)windowWillClose:(id)a0;
- (id)instantMessageServiceKeys;
- (id)collectionItems;
- (id)addNewItemForKey:(id)a0 giveFocus:(BOOL)a1;
- (void)applyDisplayAttributes;
- (id)collectionItemsWithValueKey:(id)a0;
- (id)colorForProperty:(id)a0 identifier:(id)a1;
- (double)desiredHeight;
- (void)editCollectionItemWithKey:(id)a0 label:(id)a1;
- (void)focusCollectionItemWithKey:(id)a0 identifier:(id)a1 yOffset:(double)a2 completion:(id /* block */)a3;
- (void)highlightSearchTerms:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allowsScrolling:(BOOL)a1;
- (void)showFirstItem;
- (void)showLastItem;
- (void)updateFaceTimeAvailability:(BOOL)a0;
- (void)preferencesChanged:(id)a0;
- (void)frameDidChange:(id)a0;
- (void)collectionItemWantsActionGlyps:(id)a0;
- (BOOL)tabbingOutOfPagedOutViewOfItem:(id)a0;
- (id)_collectionItemsWithValue:(id)a0 forKey:(id)a1;
- (id)_privateMeFieldForCollectionViewItem:(id)a0;
- (id)activeViewForItem:(id)a0;
- (void)addCollectionViewItems;
- (void)addItem:(id)a0 sort:(BOOL)a1 animated:(BOOL)a2;
- (void)addNewItem:(id)a0 giveFocus:(BOOL)a1;
- (void)addSeparatorItemAtIndex:(unsigned long long)a0;
- (void)adjustSpacing;
- (void)adjustStackViewSpacingAfterItem:(id)a0;
- (BOOL)allowMultipleValuesForItem:(id)a0;
- (void)cardCollectionViewPresentation:(id)a0 didDisplayViewOfItem:(id)a1;
- (id)cardCollectionViewPresentation:(id)a0 viewForItem:(id)a1;
- (void)collectionItem:(id)a0 didChangeLabel:(id)a1;
- (void)collectionItem:(id)a0 didChangeService:(id)a1;
- (void)collectionItemDidAddFirstCharacter:(id)a0;
- (void)collectionItemDidChangeHeight:(id)a0 shouldAnimate:(BOOL)a1;
- (void)collectionItemDidRemoveLastCharacter:(id)a0;
- (void)collectionItemWantsEditMode:(id)a0;
- (void)collectionItemWillChangeFocus:(id)a0;
- (id)collectionItemsWithCoreDataProperty:(id)a0;
- (id)collectionItemsWithProperty:(id)a0;
- (void)commonInitAllowingScrolling:(BOOL)a0;
- (void)doRemoveItem:(id)a0;
- (BOOL)focusCollectionItem:(id)a0;
- (void)insertItemWithSeparatorFollowing:(id)a0;
- (void)insertItemsAsBatch:(id)a0;
- (unsigned long long)insertionIndexOfItem:(id)a0;
- (id)labelsByProperty;
- (id)noteInsertionPoints;
- (void)removeCollectionViewItems;
- (void)resetStackView;
- (void)restoreNoteFirstResponder;
- (void)saveNoteFirstResponder;
- (void)saveTemplatePreferences;
- (void)scrollEnclosingScrollViewToFocusedEditingRow;
- (double)separatorLeadingMarginForCardCollectionViewPresentation:(id)a0;
- (double)separatorTrailingMarginForCardCollectionViewPresentation:(id)a0;
- (void)setNoteInsertionPoints:(id)a0;
- (void)setupItemPresentorWithAllowsScrolling:(BOOL)a0;
- (BOOL)shouldShowPrivacyCheckboxForItem:(id)a0;
- (BOOL)shouldUseFittingSizeToCalculateHeight:(id)a0;
- (void)sortCollectionViewItems;
- (unsigned long long)stackViewIndexOfLastItemWithValueKeypath:(id)a0;

@end
