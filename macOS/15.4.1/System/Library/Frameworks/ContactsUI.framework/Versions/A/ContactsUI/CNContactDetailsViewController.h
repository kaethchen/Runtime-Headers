@class ABCardViewStyleProvider, CNContact, AKCardViewDataSource, NSString, CNUIEditingRules, ABCardCollectionViewController, ABCardCollectionView;
@protocol CNContactDetailsViewControllerDelegate;

@interface CNContactDetailsViewController : NSViewController <ABCardCollectionViewControllerDelegate, CNContactCardWidget>

@property (retain, nonatomic) CNUIEditingRules *editingRules;
@property (retain, nonatomic) ABCardCollectionView *cardCollectionView;
@property (retain, nonatomic) ABCardCollectionViewController *cardCollectionViewController;
@property (retain, nonatomic) CNContact *contact;
@property (weak, nonatomic) id<CNContactDetailsViewControllerDelegate> controllerDelegate;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL isUnified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)delegate;
- (BOOL)commitEditing;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isSelectable;
- (BOOL)isTemplate;
- (void)loadView;
- (void)reloadData;
- (void)viewDidLoad;
- (void)addTemplateItemForKey:(id)a0;
- (void)applyDisplayAttributes;
- (void)cardCollectionViewControllerKeyViewLoopNeedsUpdate:(id)a0;
- (void)cardViewNoteDidChange;
- (id)colorForProperty:(id)a0 identifier:(id)a1;
- (void)createConstrains;
- (double)desiredHeight;
- (void)editCollectionItemWithKey:(id)a0 label:(id)a1;
- (void)editExistingKey:(id)a0 identifier:(id)a1 yOffset:(double)a2;
- (BOOL)editMode;
- (void)focusCollectionItemWithKey:(id)a0 identifier:(id)a1 yOffset:(double)a2 completion:(id /* block */)a3;
- (void)highlightSearchTerms:(id)a0;
- (BOOL)importMode;
- (BOOL)isPrivateMeEnabled;
- (void)notifyDelegateActionWasPerformed;
- (void)setPropertyKeysToDisplay:(id)a0;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (void)showFirstItem;
- (void)showLastItem;
- (BOOL)suggestedCardMode;
- (void)updateFaceTimeAvailability:(BOOL)a0;
- (id)updateKeyViewLoopAndReturnTailView;
- (id)userActionListDataSource;

@end
