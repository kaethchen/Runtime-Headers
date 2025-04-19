@class NSTextField, AMApplicationDefinition, NSArray, AMWhoseListView, NSPopUpButton, NSBundle, NSMutableArray, NSBox;

@interface AMFindItemsAction : AMGenericAction {
    NSArray *_applicationNames;
}

@property (weak, nonatomic) NSPopUpButton *_findingPopUpButton;
@property (weak, nonatomic) NSTextField *_findingLabel;
@property (weak, nonatomic) NSTextField *_whoseLabel;
@property (weak, nonatomic) AMWhoseListView *_whoseListView;
@property (weak, nonatomic) NSBox *_whoseBox;
@property (readonly, nonatomic) NSBundle *_applicationDefinitionBundle;
@property (retain) AMApplicationDefinition *applicationDefinition;
@property (retain, nonatomic) NSArray *findingNames;
@property (retain) NSMutableArray *whoseItems;
@property (readonly, nonatomic) NSArray *applicationNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)awakeFromNib;
- (id)script;
- (void)updateName;
- (id)_defaultSettings;
- (id)initWithDefinition:(id)a0 fromArchive:(BOOL)a1;
- (id)_propertyWithName:(id)a0 inProperties:(id)a1;
- (void)_addLocalizedItemsWithTitles:(id)a0 toPopUpButton:(id)a1;
- (void)_addSettings:(id)a0;
- (id)_elementNamesFromElements:(id)a0 usingKey:(id)a1;
- (id)_elementOfElements:(id)a0 withName:(id)a1 usingKey:(id)a2;
- (void)_insertSettings:(id)a0 atIndex:(unsigned long long)a1;
- (void)_insertWhoseItemAtIndex:(unsigned long long)a0 withSettings:(id)a1;
- (void)_removeAllWhoseItems;
- (void)_removeWhoseItemAtIndex:(unsigned long long)a0;
- (void)_setProperties:(id)a0 andSettings:(id)a1 ofWhoseItemAtIndex:(unsigned long long)a2;
- (id)_settingsAtIndex:(unsigned long long)a0;
- (void)addWhoseItem:(id)a0;
- (void)changeFinding:(id)a0;
- (void)changeFindingType:(id)a0;
- (id)providesDictionary;
- (void)removeWhoseItem:(id)a0;
- (void)updateNameForApplication:(id)a0 findingName:(id)a1;

@end
