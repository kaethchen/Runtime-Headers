@class MOMediaView;

@interface MOMediaViewLayout : UXCollectionViewLayout

@property (readonly, weak, nonatomic) MOMediaView *mediaView;
@property BOOL showHeaders;
@property BOOL showFooters;
@property BOOL enableStickiness;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateValue:(id *)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_finalizeLayoutTransition;
- (void)_prepareForTransitionFromLayout:(id)a0;
- (void)_prepareForTransitionToLayout:(id)a0;
- (id)collectionView;
- (void)finalizeAnimatedBoundsChange;
- (unsigned long long)orientation;
- (long long)userInterfaceLayoutDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withIndexPaths:(id)a1 exchangedWithIndexPaths:(id)a2;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;
- (id)_debuggingLayoutOptionsMenuContainingPresetSubmenuItem:(id)a0 menuItemIndex:(unsigned long long *)a1;
- (id)_debuggingLayoutOptionsMenuItemForPresetAtPath:(id)a0;
- (id)_debuggingLayoutOptionsPresetFileNamesAllowingCreation:(BOOL)a0;
- (id)_debuggingLayoutOptionsPresetFilePathsAllowingCreation:(BOOL)a0;
- (id)_debuggingLayoutOptionsPresetMenuItemWithTitle:(id)a0 action:(SEL)a1 representedObject:(id)a2;
- (id)_debuggingLayoutOptionsPresetPathWithName:(id)a0;
- (id)_debuggingLayoutOptionsPresetsPath;
- (id)_debuggingLayoutOptionsPresetsPathAllowingCreation:(BOOL)a0;
- (BOOL)_debuggingLayoutOptionsUserAllowsDeletingPresetAtPath:(id)a0;
- (id)_debuggingLayoutOptionsUserProvidedNameForOperationWithName:(id)a0 startingWithSuggestedName:(id)a1 disallowedNames:(id)a2;
- (id)_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 includingIndexPaths:(id)a1;
- (void)_setMediaView:(id)a0;
- (void)debuggingLayoutOptionsDeletePreset:(id)a0;
- (id)debuggingLayoutOptionsDescriptions;
- (void)debuggingLayoutOptionsLoadPreset:(id)a0;
- (void)debuggingLayoutOptionsRenamePreset:(id)a0;
- (void)debuggingLayoutOptionsReset:(id)a0;
- (void)debuggingLayoutOptionsSavePreset:(id)a0;
- (id)debuggingLayoutOptionsView;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withIndexPaths:(id)a1 movedToIndexPaths:(id)a2;
- (BOOL)supportFooters;
- (BOOL)supportHeaders;
- (BOOL)supportStickiness;

@end
