@class NSBox, NSSearchField, NSString, NSOutlineView, NSDictionary, NSOrderedSet;

@interface WebFeatureFlagSettings : SecurePreferencesModule <NSControlTextEditingDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate> {
    NSDictionary *_features;
    NSDictionary *_filteredFeatures;
    NSOrderedSet *_orderedFilteredFeatureCategoryKeys;
}

@property (weak, nonatomic) NSBox *featuresBox;
@property (weak, nonatomic) NSOutlineView *featuresOutlineView;
@property (weak, nonatomic) NSSearchField *searchField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)outlineView:(id)a0 shouldCollapseItem:(id)a1;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldExpandItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldShowOutlineCellForItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (id)_attributedTitleForFeature:(id)a0;
- (id)_featureCategoryDisplayOrder;
- (id)_featureCategoryKeyForWebFeatureCategory:(unsigned long long)a0;
- (id)_featureStatusDisplayOrder;
- (id)_featureStatusKeyForWebFeatureStatus:(unsigned long long)a0;
- (id)_localizedStringForFeatureCategoryKey:(id)a0;
- (id)_localizedStringForFeatureStatus:(unsigned long long)a0;
- (void)_updateFilteredFeatures;
- (void)openHelpPage:(id)a0;
- (void)resetFeaturesToDefaults:(id)a0;
- (id)safariHelpAnchor;
- (void)toggleFeatureForButton:(id)a0;

@end
