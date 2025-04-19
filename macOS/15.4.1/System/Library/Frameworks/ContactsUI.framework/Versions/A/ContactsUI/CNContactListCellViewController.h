@class NSString, NSArray, ABAddressBook, CNContact, CNContactPickerCardViewStyleProvider, CNContactStore, AKCardViewDataSource, ABCollectionViewItemFactory, CNContactListCellView;
@protocol CNContactListCellViewControllerDelegate;

@interface CNContactListCellViewController : NSObject <ABCardCollectionViewDataSource, ABCardCollectionViewDelegate> {
    ABCollectionViewItemFactory *_itemFactory;
    AKCardViewDataSource *_dataSource;
    AKCardViewDataSource *_suggestionDataSource;
    CNContactStore *_contactStore;
    ABAddressBook *_addressBook;
    ABAddressBook *_suggestionAddressBook;
    CNContactPickerCardViewStyleProvider *_styleProvider;
    NSString *_contactIdentifier;
    NSString *_linkIdentifier;
}

@property (weak) CNContactListCellView *cellView;
@property (weak) id<CNContactListCellViewControllerDelegate> delegate;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL canExpandCell;
@property (copy) NSArray *displayedKeys;
@property BOOL allowsNamePicking;
@property (readonly) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keysToFetch;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)dataSource;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isSelectable;
- (BOOL)isTemplate;
- (void)setEntry:(id)a0;
- (id)superview;
- (BOOL)isMe;
- (void)setAddressBook:(id)a0;
- (BOOL)isUnified;
- (void)setContactStore:(id)a0;
- (id)collectionItems;
- (void)itemWasClicked:(id)a0;
- (void)buildActionGlyphsForItem:(id)a0;
- (void)buildVisibleViewForItem:(id)a0;
- (void)cardViewNoteDidChange;
- (id)colorForProperty:(id)a0 identifier:(id)a1;
- (void)editExistingKey:(id)a0 identifier:(id)a1 yOffset:(double)a2;
- (BOOL)editMode;
- (id)fetchContact;
- (BOOL)hasDisplayedKeys;
- (BOOL)hasValuesForDisplayedKeys;
- (BOOL)importMode;
- (BOOL)isPrivateMeEnabled;
- (id)makeDataSource;
- (void)refreshCollectionView;
- (id)scopeForItem:(id)a0;
- (BOOL)shouldEnableCell;
- (BOOL)suggestedCardMode;

@end
