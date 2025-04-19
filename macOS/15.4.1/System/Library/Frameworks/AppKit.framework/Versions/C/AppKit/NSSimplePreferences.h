@class NSMutableSet;

@interface NSSimplePreferences : NSPreferences

@property (class, weak) id customButtonTarget;

@property (readonly, nonatomic) float _horizontalBasePriority;
@property (retain, nonatomic) NSMutableSet *_customButtons;

+ (void)setBundleToSearch:(id)a0;

- (void)dealloc;
- (id)init;
- (id)_addOptionalDescriptionOrFooterForItem:(id)a0 labelInset:(double)a1 optionalFooter:(id)a2 optionalDescription:(id)a3 nextItem:(id)a4 itemView:(id)a5;
- (void)_addTabForSettingsPlistNamed:(id)a0 bundle:(id)a1 withTitle:(id)a2;
- (id)_boxWithCenteredContent:(id)a0 contentHuggingPriority:(float)a1;
- (id)_createCustomButtonForItem:(id)a0 title:(id)a1 bundle:(id)a2 stringsTable:(id)a3 optionalFooter:(id)a4 nextItem:(id)a5;
- (id)_createDescriptionLabelWithString:(id)a0;
- (id)_createFieldForTitleItem:(id)a0;
- (id)_createGridViewWithIdentifier:(id)a0;
- (id)_createGroupBoxForChildGrid:(id)a0 title:(id)a1 footer:(id)a2;
- (id)_createPopUpButtonForItem:(id)a0 bundle:(id)a1 stringsTable:(id)a2;
- (id)_createSliderFor:(id)a0;
- (id)_createToggleControlForItem:(id)a0 valueKeyPath:(id)a1 bindOptions:(id)a2 title:(id)a3 bundle:(id)a4 stringsTable:(id)a5 optionalFooter:(id)a6 module:(id)a7 nextItem:(id)a8;
- (id)_customButtonTargetToUse;
- (void)_insertFooterText:(id)a0 intoGrid:(id)a1;
- (void)_insertRadioGroupForItem:(id)a0 label:(id)a1 intoGrid:(id)a2 bundle:(id)a3 stringsTable:(id)a4 optionalFooter:(id)a5 module:(id)a6 nextItem:(id)a7;
- (void)_updateCustomButtonTargets;
- (id)_viewForItems:(id)a0 rootBundle:(id)a1 module:(id)a2;
- (id)_viewWithCenteredContent:(id)a0 contentHuggingPriority:(float)a1 inset:(double)a2;
- (void)addSpacerTo:(id)a0;
- (id)customButtons;
- (BOOL)itemIsStartOfGroup:(id)a0;
- (void)loadFromSettingsBundle;
- (id)settingsBundlePathToUse;
- (void)showPreferencesPanelForOwner:(id)a0;
- (void)stretchWrappingText:(id)a0 nicelyBasedOnSource:(id)a1;
- (void)updateConstrainedWidth:(double)a0;
- (BOOL)usesButtons;

@end
