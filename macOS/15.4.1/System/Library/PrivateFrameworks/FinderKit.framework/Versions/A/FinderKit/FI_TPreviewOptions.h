@class NSString, NSSet, NSArray, FI_TPreviewOptionsDynamicGroupSettings;

@interface FI_TPreviewOptions : NSObject <TPreviewOptionsGroupSettingsDelegate> {
    NSArray *_groupDefinitions;
    NSArray *_settingsGroups;
    FI_TPreviewOptionsDynamicGroupSettings *_dynamicGroupSettings;
    struct function<void (FI_TPreviewOptions *)> { struct __value_func<void (FI_TPreviewOptions *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _saveOptionsCallback;
}

@property (readonly, nonatomic) NSString *baseUTI;
@property (readonly, nonatomic) NSSet *userSelectedKeys;
@property (readonly, nonatomic) BOOL allKeysAreSelected;
@property (readonly, nonatomic) NSArray *spotlightQueryAttributes;
@property (readonly, nonatomic) NSArray *allSpotlightQueryAttributes;
@property (readonly, nonatomic) NSArray *orderedDisplayAttributes;
@property (readonly, nonatomic) NSArray *allOrderedDisplayAttributes;
@property (nonatomic) BOOL showQuickActions;
@property (readonly, nonatomic) BOOL quickActionsSupported;
@property (readonly, nonatomic) NSArray *groupedSettings;
@property (nonatomic) BOOL suppressSaving;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingOrderedDisplayAttributes;
+ (id)keyPathsForValuesAffectingSpotlightQueryAttributes;

- (void)dealloc;
- (id)allKeys;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveOptions;
- (void)groupDidChange:(id)a0;
- (id)initWithBaseUTIString:(const void *)a0 groups:(id)a1;
- (void)loadDefaultOptions;
- (void)loadDefaultOptionsFromDictionary:(id)a0;
- (BOOL)needToSaveGroups;
- (id)optionsToSave;
- (id)queryAttributesForSelected:(BOOL)a0;
- (void)setSaveOptionsCallback:(struct function<void (FI_TPreviewOptions *)> { struct __value_func<void (FI_TPreviewOptions *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (void)setUserSelectedKeys:(id)a0;
- (void)updateDynamicGroupSettingsWithItemMetadata:(struct shared_ptr<TItemMetadata> { struct TItemMetadata *x0; struct __shared_weak_count *x1; })a0;

@end
