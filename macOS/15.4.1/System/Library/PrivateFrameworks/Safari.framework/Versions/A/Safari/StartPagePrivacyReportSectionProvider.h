@class PrivacyReportStartPageViewItem, NSString, NSArray, NSAppearance, WBSPrivacyReportData, StartPagePrivacyReportRedesignViewItem;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPagePrivacyReportSectionProvider : NSObject <StartPagePrivacyReportRedesignViewItemDelegate, StartPageCollectionSectionProvider> {
    PrivacyReportStartPageViewItem *_privacyReportViewTemplateItem;
    long long _numberOfTrackers;
    BOOL _needsReload;
    WBSPrivacyReportData *_privacyReportData;
    NSString *_profileIdentifier;
    StartPagePrivacyReportRedesignViewItem *_privacyReportRedesignViewTemplateItem;
}

@property (nonatomic, setter=_setCachedNumberOfTrackers:) long long _cachedNumberOfTrackers;
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
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (void)_historyWasCleared:(id)a0;
- (id)_browserWindowController;
- (id)_cachedPrivacyReportData;
- (void)_contentBlockerStatisticsStoreDidClose;
- (void)_crossSiteTrackingPreventionStatusDidChange:(id)a0;
- (void)_reloadSection;
- (id)_sectionTitle;
- (void)_setCachedPrivacyReportData;
- (void)_showPrivacyReport;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)initWithProfileIdentifier:(id)a0 usesCompactAppearance:(BOOL)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)selectStartPagePrivacyReportRedesignViewItem:(id)a0;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (id)titleConfigurationForSection:(long long)a0;

@end
