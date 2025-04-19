@class NSDictionary;
@protocol EFCancelable;

@interface MUIMessageListUnbundledSectionDataSource : MessageListSectionDataSource

@property (retain, nonatomic) NSDictionary *snippetHintsByGlobalMessageID;
@property (nonatomic, getter=shouldHideFollowUp) BOOL hideFollowUp;
@property (retain, nonatomic) id<EFCancelable> hideFollowUpUserDefaultsObserver;
@property (nonatomic, getter=isLocalMailboxSearchScope) BOOL localMailboxSearchScope;
@property (retain, nonatomic) id<EFCancelable> localMailboxSearchScopeUserDefaultsObserver;

- (void).cxx_destruct;
- (id)_indexPathsForSelectedItems;
- (void)collection:(id)a0 shouldHighlightSnippetHints:(id)a1;
- (id)sectionForCollection:(id)a0;
- (id)_allowedSections;
- (void)_configureCell:(id)a0 atIndexPath:(id)a1 itemID:(id)a2;
- (id)configuredCollectionViewCellForCollectionView:(id)a0 indexPath:(id)a1 itemID:(id)a2 cellIdentifier:(id)a3;
- (id)initWithIdentifier:(id)a0 section:(id)a1 collectionView:(id)a2 messageList:(id)a3 initialLoadCompletedPromise:(id)a4 layoutValuesHelper:(id)a5 state:(id)a6 headerType:(unsigned long long)a7;
- (BOOL)isPrioritySection;

@end
