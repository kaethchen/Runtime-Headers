@class NSString, ACSHPanelCollection, NSMapTable, NSArray;
@protocol ACSHToolbarControlDelegate;

@interface ACSHToolbarController : NSObject

@property (retain, nonatomic) ACSHPanelCollection *panelCollection;
@property (retain) NSMapTable *_toolbarMergedPanelsByOriginalPanel;
@property (retain) NSMapTable *_toolbarMergedPanelIdentifiersByOriginalPanel;
@property (copy, nonatomic) NSString *_frontmostApplicationIdentifier;
@property (nonatomic) BOOL _shouldReadAndWritePreferences;
@property (nonatomic) BOOL _forTemplate;
@property (readonly, nonatomic) NSArray *_panelsToMergeToolbarsInto;
@property (nonatomic) unsigned long long productSupportType;
@property (nonatomic) BOOL allowUserToolbars;
@property (nonatomic) BOOL allowDwellActions;
@property (nonatomic) BOOL allowSuggestionsBar;
@property (nonatomic) BOOL allowHoverText;
@property (weak, nonatomic) id<ACSHToolbarControlDelegate> delegate;

+ (BOOL)_panelElementContainsHoverText:(id)a0;
+ (id)_maximumWidthPanelOfPanels:(id)a0;
+ (BOOL)_panelElement:(id)a0 orChildrenRecursivelyContainElementPassingTest:(id /* block */)a1;
+ (BOOL)_panelElementContainsSuggestions:(id)a0;
+ (BOOL)_panelElementHasDwellActions:(id)a0;
+ (BOOL)_panelShouldShowToolbarsByDefault:(id)a0;
+ (BOOL)_showUserToolbarPanel:(id)a0 basedOnApplicationBundleID:(id)a1;
+ (id)functionKeyPanelForPanel:(id)a0 panelCollection:(id)a1 returningMergeOrientation:(unsigned long long *)a2;
+ (id)orderedToolbarIdentifiersForPanelCollection:(id)a0;
+ (id)templateKeyboardPanelsForProductSupportType:(unsigned long long)a0 undoManager:(id)a1;
+ (id)toolbarForIdentifier:(id)a0 panelCollection:(id)a1 forTemplate:(BOOL)a2;

- (void).cxx_destruct;
- (id)_mergedPanelForBasePanel:(id)a0 panelsToMerge:(id)a1 customOptionsMapTable:(id)a2;
- (BOOL)_panel:(id)a0 shouldShowUserToolbarBasedOnPreferencesWithIdentifier:(id)a1;
- (id)_panelByAddingToolbarsPanelsToPanel:(id)a0 returningToolbarPanelIdentifiers:(id *)a1;
- (BOOL)_panelIdentifierRepresentsBestKeyboardAccountForUserSettings:(id)a0;
- (BOOL)_panelIdentifierRepresentsBestSystemKeyboard:(id)a0;
- (BOOL)_panelShouldShowDwellActions:(id)a0;
- (BOOL)_panelShouldShowFunctionKeyPanel:(id)a0;
- (BOOL)_panelShouldShowFunctionKeyPanelByDefault:(id)a0;
- (BOOL)_panelShouldShowHoverTextBar:(id)a0 respectingAllowHoverText:(BOOL)a1;
- (BOOL)_panelShouldShowHoverTextBarByDefault:(id)a0;
- (BOOL)_panelShouldShowSuggestionsBar:(id)a0 respectingAllowSuggestionsBar:(BOOL)a1;
- (id)_panelsToMergeForBasePanel:(id)a0 outGeneratedSystemPanelsBySystemToolbarIdentifier:(id *)a1 outCustomOptionsMapTable:(id *)a2;
- (BOOL)_showUserToolbarPanelBasedOnFrontmostApplication:(id)a0;
- (id)_sortedPanelsToMerge:(id)a0 basePanel:(id)a1 generatedPanelsByIdentifier:(id)a2;
- (unsigned long long)_toolbarSettingForPanel:(id)a0 toolbarIdentifier:(id)a1;
- (void)_updateMergedPanelsIfNeeded;
- (void)_updateToolbarSetting:(unsigned long long)a0 forPanel:(id)a1 toolbarIdentifier:(id)a2;
- (id)initWithPanelCollection:(id)a0;
- (void)panelCollectionUpdated;
- (id)toolbarConfigurationsForPanel:(id)a0;
- (id)toolbarMergedPanelForIdentifier:(id)a0;
- (id)toolbarMergedPanelForListPanelIdentifier:(id)a0 indexPath:(id)a1 dataSource:(id)a2;
- (id)toolbarMergedPanelForPanel:(id)a0;
- (void)updateAllowSuggestionsBar:(BOOL)a0 allowHoverText:(BOOL)a1;
- (void)updateToolbarsForFrontmostApplicationIdentifier:(id)a0;
- (void)updateVisibility:(BOOL)a0 toolbarConfiguration:(id)a1 panel:(id)a2;

@end
