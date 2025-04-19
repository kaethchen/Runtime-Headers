@class ABCardViewStyleProvider, ABCardCollectionView, NSArray, CNUIEditingRules, ABCardViewLabelGenerator, NSString, ABCollectionViewItemFactory, ABCardViewPropertyProvider;
@protocol ABCardViewDataSource, ABCardCollectionViewControllerDelegate;

@interface ABCardCollectionViewController : NSObject <ABCardCollectionViewDataSource, ABCardCollectionViewDelegate> {
    id<ABCardViewDataSource> _dataSource;
    BOOL _provideEmptyItems;
    BOOL _isImporting;
}

@property (retain, nonatomic) ABCardCollectionView *view;
@property (retain, nonatomic) id<ABCardViewDataSource> dataSource;
@property (retain, nonatomic) ABCardViewLabelGenerator *labelGenerator;
@property (retain, nonatomic) ABCardViewPropertyProvider *propertyProvider;
@property (retain, nonatomic) ABCollectionViewItemFactory *itemFactory;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (weak) id<ABCardCollectionViewControllerDelegate> controllerDelegate;
@property (retain, nonatomic) NSArray *propetyKeysToDisplay;
@property (retain, nonatomic) CNUIEditingRules *editingRules;
@property (nonatomic, getter=isSuggestedCardMode) BOOL suggestedCardMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)delegate;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isSelectable;
- (BOOL)isTemplate;
- (id)contact;
- (BOOL)isMe;
- (BOOL)isUnified;
- (void)itemWasRemoved:(id)a0;
- (id)collectionItems;
- (void)buildActionGlyphsForItem:(id)a0;
- (void)buildVisibleViewForItem:(id)a0;
- (void)cardCollectionViewKeyViewLoopNeedsUpdate:(id)a0;
- (void)cardViewNoteDidChange;
- (id)colorForProperty:(id)a0 identifier:(id)a1;
- (void)editExistingKey:(id)a0 identifier:(id)a1 yOffset:(double)a2;
- (BOOL)editMode;
- (id)emptyCollectionItemForKey:(id)a0;
- (id)hostWindowForShareSheet;
- (BOOL)importMode;
- (id)initWithView:(id)a0 userActionListDataSource:(id)a1;
- (BOOL)isAugmentedCardItem:(id)a0;
- (BOOL)isPrivateMeEnabled;
- (void)item:(id)a0 didConfirmLabeledValue:(id)a1;
- (void)item:(id)a0 didRejectLabeledValue:(id)a1;
- (void)item:(id)a0 executeAction:(id)a1;
- (BOOL)item:(id)a0 shouldEnableAction:(id)a1;
- (id)item:(id)a0 titleForAction:(id)a1;
- (void)itemDidEndEditing:(id)a0;
- (void)itemDidRequestNewItem:(id)a0;
- (void)itemValueDidBecomeEmpty:(id)a0;
- (void)itemValueDidBecomeNonEmpty:(id)a0;
- (void)notifyDelegateActionWasPerformed;
- (BOOL)suggestedCardMode;
- (id)userActionListDataSource;
- (id)addEmptyEntriesToMultiValue:(id)a0;
- (id)addEmptyEntryToMultiValue:(id)a0;
- (id)adjustedMultiValueForKey:(id)a0;
- (id)collectionItemsForKey:(id)a0;
- (id)emptyItemForMultiValue:(id)a0 key:(id)a1;
- (id)preferredNameCollectionItem;
- (id)removeEntriesWithEmptyValuesFromMultiValue:(id)a0;
- (id)removeSuggestedEntriesFromMultiValue:(id)a0;
- (void)setImporting:(BOOL)a0;
- (BOOL)shouldDisplayPropertyForKey:(id)a0;
- (void)updateItemsOfKey:(id)a0 withNewMultiValue:(id)a1;
- (void)updateItemsOfKey:(id)a0 withNewMultiValue:(id)a1 forIndexRemoved:(unsigned long long)a2;
- (void)updateViewsOfItemsOfKey:(id)a0;
- (void)validateSiblingsOfItem:(id)a0;

@end
