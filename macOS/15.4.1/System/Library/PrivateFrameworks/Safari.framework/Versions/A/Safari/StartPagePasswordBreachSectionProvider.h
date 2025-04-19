@class StartPagePasswordBreachWarningCollectionViewItem, NSString, NSArray, NSAppearance;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPagePasswordBreachSectionProvider : NSObject <StartPagePasswordBreachNotificationCollectionViewItemDelegate, StartPageCollectionSectionProvider> {
    NSArray *_accountsWithBreachedPasswords;
    StartPagePasswordBreachWarningCollectionViewItem *_collectionViewItemTemplate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (retain, nonatomic) NSAppearance *backgroundAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;

- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (id)_browserWindowController;
- (void)_reloadDataWithPreviousBreachedPasswords:(id)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)initWithCompactAppearance:(BOOL)a0;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)startPagePasswordBreachNotificationCollectionViewItemDidClose:(id)a0;

@end
