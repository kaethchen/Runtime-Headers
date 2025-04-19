@interface ACSHPanelGenerator : NSObject

+ (id)_templateTypingSuggestionsPanel;
+ (id)_alphabeticallySortedElementsForPanelElements:(id)a0 originalPanel:(id)a1;
+ (id)_buttonForListPanelIdentifier:(id)a0 indexPath:(id)a1 dataSource:(id)a2;
+ (id)_fullWidthPanelForLocalizedName:(id)a0 label:(id)a1 placeholderActionType:(unsigned long long)a2 fontSize:(double)a3 height:(double)a4 panelToMergeInto:(id)a5 sizingPanel:(id)a6 forTemplate:(BOOL)a7;
+ (id)_generatedPanelForListPanelIdentifier:(id)a0 indexPath:(id)a1 sizingPanel:(id)a2 dataSource:(id)a3;
+ (id)_groupForPanelElements:(id)a0;
+ (unsigned long long)_numberOfRowsInListPanelIdentifier:(id)a0 atIndexPath:(id)a1 dataSource:(id)a2;
+ (unsigned long long)_numberOfRowsPerPageForListPanelIdentifier:(id)a0 atIndexPath:(id)a1 dataSource:(id)a2;
+ (id)_panelIDForListPanelIdentifier:(id)a0 indexPath:(id)a1;
+ (id)_templateAlphabeticalKeyboardPanel;
+ (id)_templateDwellActionPanel;
+ (id)_templateHoverTextPanel;
+ (void)_updateRectAndGroupingForOrderedElements:(id)a0;
+ (id)allGeneratedTemplatePanels;
+ (id)alphabeticallyOrderedPanelFromPanel:(id)a0;
+ (id)dwellActionsPanelForMergingIntoPanel:(id)a0;
+ (unsigned long long)flatIndexForIndexPath:(id)a0 listPanelIdentifier:(id)a1 dataSource:(id)a2;
+ (id)hoverTextPanelForMergingIntoPanel:(id)a0 sizingPanel:(id)a1 forTemplate:(BOOL)a2;
+ (id)listPanelForIdentifier:(id)a0 indexPath:(id)a1 sizingPanel:(id)a2 dataSource:(id)a3;
+ (id)minimizedPanelForPanel:(id)a0;
+ (id)realHoverTextPanelElementBasedOnPlaceholderElement:(id)a0;
+ (id)realSuggestionsPanelElementBasedOnPlaceholderElement:(id)a0;
+ (BOOL)substitutePlaceholdersForChildElement:(id)a0 ofPanelElement:(id)a1;
+ (id)suggestionsPanelForMergingIntoPanel:(id)a0 sizingPanel:(id)a1 forTemplate:(BOOL)a2;

@end
