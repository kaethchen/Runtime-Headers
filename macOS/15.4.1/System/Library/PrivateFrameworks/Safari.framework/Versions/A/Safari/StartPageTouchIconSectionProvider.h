@class NSString, WBSSiteMetadataManager, NSAppearance, NSArray, NSMapTable;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPageTouchIconSectionProvider : NSObject <SiriSuggestionsStartPageLinkRecommendationDelegate, StartPageCollectionSectionProvider> {
    NSMapTable *_recommendationMetadataTokens;
}

@property (readonly, nonatomic) WBSSiteMetadataManager *siteMetadataManager;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) long long _sectionIndex;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _iconSize;
@property (readonly, nonatomic) long long _maximumNumberOfColumns;
@property (readonly, nonatomic) double _interitemSpacing;
@property (readonly, nonatomic) NSString *_sectionTitle;
@property (readonly, nonatomic) BOOL _hasContentToDisplay;
@property (readonly, nonatomic) long long _numberOfRowsToShowWhenCollapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (retain, nonatomic) NSAppearance *backgroundAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;

- (void)dealloc;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (long long)_numberOfItems;
- (id)_metadataRequestForContentItem:(id)a0;
- (void)_addRecommendationMetadataToken:(id)a0 item:(id)a1;
- (id)_browserWindowController;
- (void)_cancelPendingMetadataRequests;
- (void)_cancelTouchIconRequestForCollectionViewItem:(id)a0;
- (struct CGSize { double x0; double x1; })_collectionViewItemSize;
- (id)_contentItemAtIndex:(unsigned long long)a0;
- (id)_enqueuedSiteMetadataRequestForRecommendationItem:(id)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)initWithSiteMetadataManager:(id)a0 usesCompactAppearance:(BOOL)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (id)titleConfigurationForSection:(long long)a0;
- (void)willReuseItem:(id)a0;

@end
