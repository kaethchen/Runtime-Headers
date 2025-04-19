@class HighlightManager, NSString, NSArray, StartPageCollectionViewLayoutSection, NSAppearance, NSMutableDictionary, NSRelativeDateTimeFormatter, NSMutableSet, WBSStartPageSuggestionsManager, NSMapTable;
@protocol StartPageSuggestionsSectionProviderDelegate, StartPageCollectionSectionProviderDelegate;

@interface StartPageHighlightsSectionProvider : NSObject <StartPageHighlightViewItemDelegate, StartPageCollectionSectionProvider> {
    HighlightManager *_highlightManager;
    NSArray *_highlights;
    NSMutableSet *_highlightsIdentifierThatSentFeedback;
    StartPageCollectionViewLayoutSection *_cachedEmptyItemLayoutSection;
    BOOL _hideEmptyItemView;
    BOOL _showingSingleSection;
    BOOL _inPrivateBrowsing;
    WBSStartPageSuggestionsManager *_suggestionsManager;
    NSArray *_suggestions;
    NSMutableDictionary *_suggestionToAttributionViewMap;
    NSRelativeDateTimeFormatter *_relativeDateFormatter;
    NSMapTable *_suggestionItemsToMetadataTokens;
    NSString *_profileIdentifier;
}

@property (weak, nonatomic) id<StartPageSuggestionsSectionProviderDelegate> delegate;
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

- (void)dealloc;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (void)viewWillAppear;
- (long long)_numberOfItems;
- (void)didPerformContextMenuShowingEventForItem:(id)a0 socialMenuItems:(id)a1 event:(id)a2;
- (id)_attributionViewForStartPageSuggestionItem:(id)a0;
- (id)_browserWindowController;
- (id)_contextMenuForFrecent:(id)a0;
- (void)_didUpdateSectionVisibility:(id)a0;
- (id)_emptyItemForCollectionView:(id)a0 indexPath:(id)a1;
- (BOOL)_hasContentToDisplay;
- (id)_hideEmptyViewDefaultsKey;
- (long long)_itemCount;
- (void)_navigateToHighlightItem:(id)a0;
- (void)_navigateToHighlightItem:(id)a0 title:(id)a1 policy:(long long)a2;
- (void)_navigateToSuggestion:(id)a0;
- (id)_sectionIdentifier;
- (void)_suggestionsDidChange:(id)a0;
- (id)_suggestionsForCurrentConfiguration;
- (id)_tabPlacementHint;
- (void)_updateAttributionViews;
- (void)_updateHighlights;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)initWithCompactAppearance:(BOOL)a0 showingSingleSection:(BOOL)a1 inPrivateBrowsing:(BOOL)a2 profileIdentifier:(id)a3;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)sendFeedbackForHighlight:(id)a0;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)startPageHighlightViewItem:(id)a0 sendFeedbackForHighlight:(id)a1;
- (id)titleConfigurationForSection:(long long)a0;

@end
